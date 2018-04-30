#include "FriendsOP.h"
#include"Friend.h"
#include"NotFriend.h"
#include"Profile.h"

FBManagmentSytem::FriendsOP::FriendsOP(void)
{
	InitializeComponent();
	//
	//TODO: Add the constructor code here
	//
}

FBManagmentSytem::FriendsOP::FriendsOP(Facebook ^ f, User ^ u1, User ^ u2)
{
	F = f;
	U1 = u1;
	U2 = u2;
	InitializeComponent();
	//
	//TODO: Add the constructor code here
	//
}

System::Void FBManagmentSytem::FriendsOP::FriendsOP_Load(System::Object ^ sender, System::EventArgs ^ e)
{
	List<Friends^>^ L = F->f[Int32::Parse(U2->id) - 1];
	int y = 0;
	for (int i = 1; i < L->Count; i++)
	{
		if (L[i]->fri__req == "1")
		{

			Panel^ pnl = gcnew Panel();
			panel3->Controls->Add(pnl);
			pnl->Size = System::Drawing::Size(360, 60);
			pnl->Location = Point(0, y);
			pnl->BackColor = Color::LightGray;

			PictureBox^ img = gcnew PictureBox();
			pnl->Controls->Add(img);
			img->Location = Point(30, 5);
			img->Size = System::Drawing::Size(50, 50);
			img->SizeMode = PictureBoxSizeMode::StretchImage;
			img->BackColor = Color::White;

			Label^ nameLbl = gcnew Label();
			pnl->Controls->Add(nameLbl);
			nameLbl->Text = L[i]->usr->username();
			nameLbl->AutoSize = false;
			nameLbl->Size = System::Drawing::Size(250, 25);
			nameLbl->Font = gcnew System::Drawing::Font("Segoe UI", 14, FontStyle::Regular);
			nameLbl->Location = Point(88, 15);
			nameLbl->BackColor = Color::LightGray;
			nameLbl->Cursor = Cursors::Hand;
			nameLbl->Click += gcnew EventHandler(this, &FriendsOP::lblClk_Click);
			y += 63;
		}
	}
	return System::Void();
}

System::Void FBManagmentSytem::FriendsOP::lblClk_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	try
	{
		Label^ clickedlabel = safe_cast<Label^>(sender);
		String^ s = clickedlabel->Text;
		array<String^>^ arr = s->Split(' ');
		String^ fn = arr[0];
		List<Friends^>^ friendlist = F->f[Int32::Parse(U1->id) - 1];
		for (int i = 0; i < friendlist->Count; i++)
		{
			if (friendlist[i]->usr->Fname == fn)
			{
				if (friendlist[i]->usr->Fname == U1->Fname)
				{
					Profile^ s = gcnew Profile(F, U1);
					this->Hide();
					s->Show();
				}
				else if (friendlist[i]->fri__req == "1")
				{
					Friend^ s = gcnew Friend(F, U1, friendlist[i]->usr);
					this->Hide();
					s->Show();
				}
				else
				{
					NotFriend^ s = gcnew NotFriend(F, U1, friendlist[i]->usr);
					this->Hide();
					s->Show();
				}

			}
		}
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
	return System::Void();
}
