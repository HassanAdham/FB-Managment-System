#include "Profile.h"
#include "EditPro.h"
#include "FriendsOP.h"

FBManagmentSytem::Profile::Profile(void)
{
	InitializeComponent();
}

FBManagmentSytem::Profile::Profile(Facebook ^ f, User ^ u)
{
	InitializeComponent();
	F = f;
	U = u;
}

System::Void FBManagmentSytem::Profile::Profile_Load(System::Object ^ sender, System::EventArgs ^ e)
{
	this->Size = System::Drawing::Size(370, 640);
	this->AutoScroll = true;

	userLbl->Text = U->username();

	MemoryStream^ ms = gcnew MemoryStream(U->profilephoto);
	pictureBox8->Image = Image::FromStream(ms);

	MemoryStream^ ns = gcnew MemoryStream(U->coverphoto);
	pictureBox1->Image = Image::FromStream(ns);

	pictureBox1->Controls->Add(backBtn);
	backBtn->BackColor = Color::Transparent;
	backBtn->Location = Point(57, -1);

	eduLbl->Text = U->edu;
	workLbl->Text = U->work;
	liveLbl->Text = U->address;

	if (F->AllPosts->Count != 0) {
		List<PostInfo^>^ postlist = F->AllPosts[Int32::Parse(U->id) - 1];
		int y = 178;
		for (int i = 0; i < postlist->Count; i++)
		{
			if (postlist[i]->PostStat == "1")
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
					feedsPanel->Size = System::Drawing::Size(360, feedsPanel->Height+228);
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

System::Void FBManagmentSytem::Profile::editBtn_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	EditPro^ s = gcnew EditPro(F, U);
	this->Hide();
	s->Show();
	return System::Void();
}

System::Void FBManagmentSytem::Profile::bunifuTileButton3_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	FriendsOP^ s = gcnew FriendsOP(F,U, U);
	this->Hide();
	s->Show();
	return System::Void();
}

System::Void FBManagmentSytem::Profile::backBtn_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	Mainapp ^main = gcnew Mainapp(F, U);
	this->Hide();
	main->Show();
	return System::Void();
}
