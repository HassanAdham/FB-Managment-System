#include "Mainapp.h"
#include "Login.h"
#include "Profile.h"
#include "WritePost.h"
#include "Search.h"
#include "NotFriend.h"
#include "Friend.h"

namespace FBManagmentSytem {
	FBManagmentSytem::Mainapp::Mainapp(void)
	{
		InitializeComponent();
	}

	Mainapp::Mainapp(Facebook ^ f, User ^ u)
	{
		F = f;
		U = u;
		InitializeComponent();
	}



	FBManagmentSytem::Mainapp::~Mainapp()
	{
		if (components)
		{
			delete components;
		}
	}

	System::Void Mainapp::pplBtn_CheckedChanged(System::Object ^ sender, System::EventArgs ^ e)
	{
		if (pplBtn->Checked == true)
		{
			feedsPanel->Visible = false;
			notiPanel->Visible = false;
			stngsPanel->Visible = false;
			pplPanel->Visible = true;
			feedsBtn->BackgroundImage = feedsNotAct->BackgroundImage;
			pplBtn->BackgroundImage = pplAct->BackgroundImage;
			noti->BackgroundImage = notiNotAct->BackgroundImage;
			setBtn->BackgroundImage = setNotAct->BackgroundImage;
			List<Friends^>^ friendlist = F->f[Int32::Parse(U->id) - 1];
			int y = 0;
			for (int i = 1; i < friendlist->Count; i++)
			{
				if (friendlist[i]->fri__req == "2")
				{
					Panel^ pnl = gcnew Panel();
					pplPanel->Controls->Add(pnl);
					pnl->Size = System::Drawing::Size(360, 60);
					pnl->Location = Point(0, y);
					pnl->BackColor = Color::LightGray;

					PictureBox^ img = gcnew PictureBox();
					pnl->Controls->Add(img);
					img->Location = Point(10, 5);
					img->Size = System::Drawing::Size(50, 50);
					img->SizeMode = PictureBoxSizeMode::StretchImage;

					Label^ nameLbl = gcnew Label();
					pnl->Controls->Add(nameLbl);
					nameLbl->Font = gcnew System::Drawing::Font("Segoe UI", 14, FontStyle::Regular);
					nameLbl->Text = friendlist[i]->usr->username();
					nameLbl->Location = Point(70, 15);
					nameLbl->BackColor = Color::LightGray;
					nameLbl->Cursor = Cursors::Hand;
					nameLbl->Click += gcnew EventHandler(this, &Mainapp::lblClk_Click);

					Button^ accept = gcnew Button;
					pnl->Controls->Add(accept);
					accept->Location = Point(240, 20);
					accept->AutoSize = false;
					accept->Font = gcnew System::Drawing::Font("Segoe UI", 1, FontStyle::Regular);
					accept->Image = acceptImg->Image;
					accept->Size = System::Drawing::Size(71, 24);
					accept->Text = friendlist[i]->usr->id;
					accept->Cursor = Cursors::Hand;
					accept->FlatStyle = FlatStyle::Flat;
					accept->FlatAppearance->BorderSize = 0;
					accept->Click += gcnew EventHandler(this, &Mainapp::accept_Click);


					Button^ X = gcnew Button();
					pnl->Controls->Add(X);
					X->Location = Point(318, 20);
					X->AutoSize = false;
					X->Font = gcnew System::Drawing::Font("Segoe UI", 1, FontStyle::Regular);
					X->Image = rejectImg->Image;
					X->FlatAppearance->BorderSize = 0;
					X->FlatStyle = FlatStyle::Flat;
					X->Cursor = Cursors::Hand;
					X->Size = System::Drawing::Size(24, 24);
					X->Text = friendlist[i]->usr->id;
					X->Click += gcnew EventHandler(this, &Mainapp::X_Click);
					y += 63;
				}
			}
		}
		return System::Void();
	}

	System::Void Mainapp::logoutBtn_Click(System::Object ^ sender, System::EventArgs ^ e)
	{
		Login^ s = gcnew Login();
		this->Hide();
		s->Show();
		return System::Void();
	}

	System::Void Mainapp::profileClkPnl_Click(System::Object ^ sender, System::EventArgs ^ e)
	{
		Profile^ s = gcnew Profile(F, U);
		this->Hide();
		s->Show();
		return System::Void();
	}

	System::Void Mainapp::userLbl_Click(System::Object ^ sender, System::EventArgs ^ e)
	{
		Profile^ s = gcnew Profile(F, U);
		this->Hide();
		s->Show();
		return System::Void();
	}

	System::Void Mainapp::label1_Click(System::Object ^ sender, System::EventArgs ^ e)
	{
		Profile^ s = gcnew Profile(F, U);
		this->Hide();
		s->Show();
		return System::Void();
	}

	System::Void Mainapp::userPic_Click(System::Object ^ sender, System::EventArgs ^ e)
	{
		Profile^ s = gcnew Profile(F, U);
		this->Hide();
		s->Show();
		return System::Void();
	}

	System::Void Mainapp::panel1_Click(System::Object ^ sender, System::EventArgs ^ e)
	{
		WritePost^ s = gcnew WritePost(F,U);
		this->Hide();
		s->Show();
		return System::Void();
	}

	System::Void Mainapp::searchTxt_Click(System::Object ^ sender, System::EventArgs ^ e)
	{
		Search^ s = gcnew Search(F, U);
		this->Hide();
		s->Show();
		return System::Void();
	}

	System::Void Mainapp::searchTxt_Enter_1(System::Object ^ sender, System::EventArgs ^ e)
	{
		Search^ s = gcnew Search(F, U);
		this->Hide();
		s->Show();
		return System::Void();
	}
	System::Void Mainapp::accept_Click(System::Object ^ sender, System::EventArgs ^ e)
	{
		Button^ clickedButton = safe_cast<Button^>(sender);
		String^ s = clickedButton->Text;
		List<Friends^>^x = F->f[Int32::Parse(U->id)-1];
		for (int i = 0; i < x->Count; i++)
		{
			if (x[i]->usr->id == s) {
				x[i]->fri__req = "1";
				break;
			}
		}
		List<Friends^>^y = F->f[Int32::Parse(s)-1];
		for (int i = 0; i < y->Count; i++)
		{
			if (y[i]->usr->id == U->id) {
				y[i]->fri__req = "1";
				
			}
		}
		F->serStruct();
		pplPanel->Controls->Clear();
		pplBtn->Checked = false;
		pplBtn->Checked = true;
		return System::Void();
	}

	System::Void Mainapp::X_Click(System::Object ^ sender, System::EventArgs ^ e)
	{
		Button^ clickedButton = safe_cast<Button^>(sender);
		String^ s = clickedButton->Text;
		List<Friends^>^x = F->f[Int32::Parse(U->id)-1];
		for (int i = 0; i < x->Count; i++)
		{
			if (x[i]->usr->id == s) {
				x[i]->fri__req = "0";
				break;
			}
		}
		List<Friends^>^y = F->f[Int32::Parse(s)-1];
		for (int i = 0; i < y->Count; i++)
		{
			if (y[i]->usr->id == U->id) {
				y[i]->fri__req = "0";
				break;
			}
		}
		F->serStruct();
		pplPanel->Controls->Clear();
		pplBtn->Checked = false;
		pplBtn->Checked = true;
		return System::Void();
	}

	System::Void Mainapp::lblClk_Click(System::Object ^ sender, System::EventArgs ^ e)
	{
		Label^ clickedlabel = safe_cast<Label^>(sender);
		String^ s = clickedlabel->Text;
		array<String^>^ arr = s->Split(' ');
		String^ fn = arr[0];
		List<Friends^>^ friendlist = F->f[Int32::Parse(U->id) - 1];
		for (int i = 0; i < friendlist->Count; i++)
		{
			if (friendlist[i]->usr->Fname == fn)
			{
					NotFriend^ s = gcnew NotFriend(F, U, friendlist[i]->usr);
					this->Hide();
					s->Show();
			}
		}
		return System::Void();
	}

}