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

	System::Void Mainapp::feedsBtn_CheckedChanged(System::Object ^ sender, System::EventArgs ^ e)
	{
		homePanel->Visible = true;
		notiPanel->Visible = false;
		stngsPanel->Visible = false;
		pplPanel->Visible = false;
		feedsBtn->BackgroundImage = feedsAct->BackgroundImage;
		pplBtn->BackgroundImage = pplNotAct->BackgroundImage;
		noti->BackgroundImage = notiNotAct->BackgroundImage;
		setBtn->BackgroundImage = setNotAct->BackgroundImage;

		if (F->AllPosts->Count != 0) {
			List<PostInfo^>^ postlist = F->AllPosts[Int32::Parse(U->id) - 1];
			int y = 3;
			for (int i = 0; i < postlist->Count; i++)
			{
				if (postlist[i]->PostStat == "2"|| postlist[i]->PostStat=="1")
				{
					Panel^ feedssPanel = gcnew Panel();
					feedsPanel->Controls->Add(feedssPanel);
					feedssPanel->BackColor = System::Drawing::Color::White;
					feedssPanel->Cursor = System::Windows::Forms::Cursors::Hand;
					feedssPanel->Location = System::Drawing::Point(0, y);
					feedssPanel->Size = System::Drawing::Size(360, 380);

					PictureBox^ propic = gcnew PictureBox();
					feedssPanel->Controls->Add(propic);
					MemoryStream^ ms = gcnew MemoryStream(postlist[i]->post->userr->profilephoto);
					propic->Image = Image::FromStream(ms);
					propic->Location = System::Drawing::Point(13, 12);
					propic->Size = System::Drawing::Size(45, 45);
					propic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;

					Label^ username = gcnew Label();
					feedssPanel->Controls->Add(username);
					username->AutoSize = true;
					username->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
					username->Location = System::Drawing::Point(63, 12);
					username->Text = postlist[i]->post->userr->username();

					Label^ time = gcnew Label();
					feedssPanel->Controls->Add(time);
					time->AutoSize = true;
					time->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
					time->ForeColor = System::Drawing::Color::FromArgb(114, 118, 121);
					time->Location = System::Drawing::Point(65, 36);
					time->Text = postlist[i]->post->date;

					Label^ postText = gcnew Label();
					feedssPanel->Controls->Add(postText);
					postText->AutoSize = false;
					postText->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
					postText->Location = System::Drawing::Point(11, 62);
					postText->Size = System::Drawing::Size(334, 76);
					postText->Text = postlist[i]->post->text;

					if (postlist[i]->post->img == nullptr)
					{
						int count = postlist[i]->post->Like->Count + postlist[i]->post->Love->Count + postlist[i]->post->Haha->Count + postlist[i]->post->Wow->Count + postlist[i]->post->Angry->Count + postlist[i]->post->Sad->Count;
						if (count != 0)
						{
							PictureBox^ reactsImage = gcnew PictureBox();
							feedssPanel->Controls->Add(reactsImage);
							reactsImage->Image = pictureBox9->Image;
							reactsImage->Location = System::Drawing::Point(10, 152);
							reactsImage->Size = System::Drawing::Size(50, 22);
							reactsImage->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;

							Label^ reactsCount = gcnew Label();
							feedssPanel->Controls->Add(reactsCount);
							reactsCount->AutoSize = true;
							reactsCount->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
							reactsCount->ForeColor = System::Drawing::Color::Black;
							reactsCount->Location = System::Drawing::Point(57, 156);
							reactsCount->Text = count.ToString();
						}
						Label^ commCount = gcnew Label();
						feedssPanel->Controls->Add(commCount);
						commCount->AutoSize = true;
						commCount->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
						commCount->ForeColor = System::Drawing::Color::Black;
						commCount->Location = System::Drawing::Point(272, 159);
						commCount->Text = postlist[i]->post->comm->Count.ToString() + " comments";

						PictureBox^ dash = gcnew PictureBox();
						feedssPanel->Controls->Add(dash);
						dash->BackColor = System::Drawing::Color::LightGray;
						dash->Location = System::Drawing::Point(10, 177);
						dash->Size = System::Drawing::Size(340, 1);

						PictureBox^ likeBtn = gcnew PictureBox();
						feedssPanel->Controls->Add(likeBtn);
						likeBtn->Image = pictureBox11->Image;
						likeBtn->Location = System::Drawing::Point(58, 190);
						likeBtn->Size = System::Drawing::Size(60, 25);
						likeBtn->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;

						PictureBox^ commBtn = gcnew PictureBox();
						feedssPanel->Controls->Add(commBtn);
						commBtn->Image = pictureBox10->Image;
						commBtn->Location = System::Drawing::Point(207, 190);
						commBtn->Size = System::Drawing::Size(100, 25);
						commBtn->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;

						y += 228;
						feedsPanel->Size = System::Drawing::Size(360, feedsPanel->Height + 228);
					}
					else
					{
						int count = postlist[i]->post->Like->Count + postlist[i]->post->Love->Count + postlist[i]->post->Haha->Count + postlist[i]->post->Wow->Count + postlist[i]->post->Angry->Count + postlist[i]->post->Sad->Count;

						PictureBox^ postPicture = gcnew PictureBox();
						feedssPanel->Controls->Add(postPicture);
						MemoryStream^ ms = gcnew MemoryStream(postlist[i]->post->img);
						postPicture->Image = Image::FromStream(ms);
						postPicture->Location = System::Drawing::Point(0, 141);
						postPicture->Size = System::Drawing::Size(360, 155);
						postPicture->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;

						if (count != 0)
						{
							PictureBox^ reactsImage = gcnew PictureBox();
							feedssPanel->Controls->Add(reactsImage);
							reactsImage->Image = pictureBox9->Image;
							reactsImage->Location = System::Drawing::Point(10, 308);
							reactsImage->Size = System::Drawing::Size(50, 22);
							reactsImage->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;

							Label^ reactsCount = gcnew Label();
							feedssPanel->Controls->Add(reactsCount);
							reactsCount->AutoSize = true;
							reactsCount->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
							reactsCount->ForeColor = System::Drawing::Color::Black;
							reactsCount->Location = System::Drawing::Point(57, 312);
							int count = postlist[i]->post->Like->Count + postlist[i]->post->Love->Count + postlist[i]->post->Haha->Count + postlist[i]->post->Wow->Count + postlist[i]->post->Angry->Count + postlist[i]->post->Sad->Count;
							reactsCount->Text = count.ToString();
						}
						Label^ commCount = gcnew Label();
						feedssPanel->Controls->Add(commCount);
						commCount->AutoSize = true;
						commCount->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
						commCount->ForeColor = System::Drawing::Color::Black;
						commCount->Location = System::Drawing::Point(272, 315);
						commCount->Text = postlist[i]->post->comm->Count.ToString() + " comments";

						PictureBox^ dash = gcnew PictureBox();
						feedssPanel->Controls->Add(dash);
						dash->BackColor = System::Drawing::Color::LightGray;
						dash->Location = System::Drawing::Point(10, 333);
						dash->Size = System::Drawing::Size(340, 1);

						PictureBox^ likeBtn = gcnew PictureBox();
						feedssPanel->Controls->Add(likeBtn);
						likeBtn->Image = pictureBox11->Image;
						likeBtn->Location = System::Drawing::Point(58, 346);
						likeBtn->Size = System::Drawing::Size(60, 25);
						likeBtn->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;

						PictureBox^ commBtn = gcnew PictureBox();
						feedssPanel->Controls->Add(commBtn);
						commBtn->Image = pictureBox10->Image;
						commBtn->Location = System::Drawing::Point(207, 346);
						commBtn->Size = System::Drawing::Size(100, 25);
						commBtn->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;

						y += 383;
						feedsPanel->Size = System::Drawing::Size(360, feedsPanel->Height + 383);
					}
				}
			}
		}


		return System::Void();
	}

	System::Void Mainapp::pplBtn_CheckedChanged(System::Object ^ sender, System::EventArgs ^ e)
	{
		if (pplBtn->Checked == true)
		{
			homePanel->Visible = false;
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
		List<PostInfo^>^ postlist1 = F->AllPosts[Int32::Parse(U->id) - 1];
		for (int i = 0; i < postlist1->Count; i++)
		{
			if (postlist1[i]->post->userr->id == s) {
				postlist1[i]->PostStat = "2";

			}
		}
		List<PostInfo^>^ postlist2 = F->AllPosts[Int32::Parse(s) - 1];
		for (int i = 0; i < postlist2->Count; i++)
		{
			if (postlist2[i]->post->userr->id == U->id) {
				postlist2[i]->PostStat = "2";

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

	System::Void Mainapp::panel2_Click(System::Object ^ sender, System::EventArgs ^ e)
	{
		Post^ s = gcnew Post();
		this->Hide();
		s->Show();
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