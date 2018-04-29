#include "Search.h"
#include "NotFriend.h"
#include "Friend.h"
#include "Profile.h"

FBManagmentSytem::Search::Search(void)
{
	InitializeComponent();
}

FBManagmentSytem::Search::Search(Facebook ^ f, User ^ u)
{
	F = f;
	U = u;
	InitializeComponent();
}

System::Void FBManagmentSytem::Search::Search_Load(System::Object ^ sender, System::EventArgs ^ e)
{
	
	return System::Void();
}

System::Void FBManagmentSytem::Search::searchTxt_Enter(System::Object ^ sender, System::EventArgs ^ e)
{
	if (searchTxt->Text == "Search")
	{
		searchTxt->Text = "";
		searchTxt->ForeColor = Color::White;
	}
	return System::Void();
}

System::Void FBManagmentSytem::Search::searchTxt_Leave(System::Object ^ sender, System::EventArgs ^ e)
{
	if (searchTxt->Text == "")
	{
		searchTxt->Text = "Search";
		searchTxt->ForeColor = Color::FromArgb(139, 157, 195);
	}
	return System::Void();
}

System::Void FBManagmentSytem::Search::lblClk_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	Label^ clickedlabel = safe_cast<Label^>(sender);
	String^ s = clickedlabel->Text;
	array<String^>^ arr = s->Split(' ');
	String^ fn = arr[0];
	List<Friends^>^ friendlist = F->f[Int32::Parse(U->id)-1];
	for (int i = 0; i < friendlist->Count; i++)
	{
		if (friendlist[i]->usr->Fname == fn)
		{
			if (friendlist[i]->fri__req == "0")
			{
				NotFriend^ s = gcnew NotFriend(F, U, friendlist[i]->usr);
				this->Hide();
				s->Show();
			}
			else if (friendlist[i]->fri__req == "1")
			{
				Friend^ s = gcnew Friend(F, U, friendlist[i]->usr);
				this->Hide();
				s->Show();
			}
			else
			{
				Profile^ s = gcnew Profile(F, U);
				this->Hide();
				s->Show();
			}
		}
	}
	return System::Void();
}

System::Void FBManagmentSytem::Search::searchTxt_TextChanged(System::Object ^ sender, System::EventArgs ^ e)
{
	//List<Friends^>^ friendlist = F->f[Int32::Parse(U->id) - 1];
	panel3->Controls->Clear();
	List<User^>^ userlist = gcnew List<User^>();
	String^ constring = L"datasource=localhost; port=3306; username=root; password=admin";
	MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDatabase = gcnew MySqlCommand("facebook.Search", conDatabase);
	cmdDatabase->CommandType = CommandType::StoredProcedure;
	cmdDatabase->Parameters->Add(gcnew MySqlParameter("str", searchTxt->Text));
	MySqlDataReader^ myreader;
	conDatabase->Open();
	myreader = cmdDatabase->ExecuteReader();
	if (searchTxt->Text != "")
	{
		while (myreader->Read())
		{
			User^ use = gcnew User();
			use->id = myreader["id"]->ToString();
			use->Fname = myreader["user_firstname"]->ToString();
			use->Lname = myreader["user_lastname"]->ToString();
			use->mail = myreader["user_email"]->ToString();
			use->gender = myreader["user_gender"]->ToString();
			String^ BD = myreader["user_birthdate"]->ToString();
			array<String^>^ arr = BD->Split('/');
			use->day = arr[0];
			use->month = arr[1];
			use->year = arr[2][0].ToString() + arr[2][1].ToString() + arr[2][2].ToString() + arr[2][3].ToString();
			userlist->Add(use);
		}
		conDatabase->Close();
		int x = 0;
		for (int i = 0; i < userlist->Count; i++)
		{
			Panel^ pnl = gcnew Panel();
			panel3->Controls->Add(pnl);
			pnl->Size = System::Drawing::Size(360, 60);
			pnl->Location = Point(0, x);
			pnl->BackColor = Color::LightGray;

			PictureBox^ img = gcnew PictureBox();
			pnl->Controls->Add(img);
			img->Location = Point(30, 5);
			img->Size = System::Drawing::Size(50, 50);
			img->SizeMode = PictureBoxSizeMode::StretchImage;
			img->BackColor = Color::White;

			Label^ nameLbl = gcnew Label();
			pnl->Controls->Add(nameLbl);
			nameLbl->Text = userlist[i]->username();
			nameLbl->AutoSize = false;
			nameLbl->Size = System::Drawing::Size(250, 25);
			nameLbl->Font = gcnew System::Drawing::Font("Segoe UI", 14, FontStyle::Regular);
			nameLbl->Location = Point(88, 15);
			nameLbl->BackColor = Color::LightGray;
			nameLbl->Cursor = Cursors::Hand;
			nameLbl->Click += gcnew EventHandler(this, &Search::lblClk_Click);
			x += 63;
		}
	}
	return System::Void();
}


