#include "Comments.h"

FBManagmentSytem::Comments::Comments(void)
{
	InitializeComponent();
}

FBManagmentSytem::Comments::Comments(Facebook ^ f, User ^ u, Posts ^ p)
{
	InitializeComponent();
	F = f;
	U = u;
	P = p;
}

System::Void FBManagmentSytem::Comments::pictureBox4_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	Post^ s = gcnew Post(F, U, P);
	this->Hide();
	s->Show();
	return System::Void();
}

System::Void FBManagmentSytem::Comments::Comments_Load(System::Object ^ sender, System::EventArgs ^ e)
{
	if (P->comm->Count != 0)
	{
		int x = 3;
		for (int i = 0; i < P->comm->Count; i++)
		{
			Panel^ commentBase = gcnew Panel();
			panel1->Controls->Add(commentBase);
			commentBase->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			commentBase->Location = System::Drawing::Point(0, x);
			commentBase->Size = System::Drawing::Size(360, 100);

			PictureBox^ commPic = gcnew PictureBox();
			panel1->Controls->Add(commPic);
			MemoryStream^ ms = gcnew MemoryStream(P->comm[i]->user->profilephoto);
			commPic->Image = Image::FromStream(ms);
			commPic->Location = System::Drawing::Point(17, 18);
			commPic->Size = System::Drawing::Size(50, 50);
			commPic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;

			PictureBox^ bgPic = gcnew PictureBox();
			panel1->Controls->Add(bgPic);
			bgPic->Image = pictureBox8->Image;
			bgPic->Location = System::Drawing::Point(73, 15);
			bgPic->Size = System::Drawing::Size(254, 58);
			bgPic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;


			Label^ commUser = gcnew Label();
			panel1->Controls->Add(commUser);
			commUser->AutoSize = true;
			commUser->BackColor = System::Drawing::SystemColors::ButtonFace;
			commUser->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			commUser->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,	static_cast<System::Byte>(0)));
			commUser->ForeColor = System::Drawing::Color::Black;
			commUser->Location = System::Drawing::Point(93, 27);
			commUser->Size = System::Drawing::Size(80, 18);
			commUser->Text = P->comm[i]->user->username();

			Label^ commText = gcnew Label();
			panel1->Controls->Add(commText);
			commText->AutoSize = true;
			commText->BackColor = System::Drawing::SystemColors::ButtonFace;
			commText->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			commText->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,static_cast<System::Byte>(0)));
			commText->ForeColor = System::Drawing::Color::Black;
			commText->Location = System::Drawing::Point(94, 47);
			commText->Size = System::Drawing::Size(139, 17);
			commText->Text = P->comm[i]->text;

			Label^ likeBtn = gcnew Label();
			panel1->Controls->Add(likeBtn);
			likeBtn->AutoSize = true;
			likeBtn->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			likeBtn->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,static_cast<System::Byte>(0)));
			likeBtn->ForeColor = System::Drawing::Color::Gray;
			likeBtn->Location = System::Drawing::Point(103, 80);
			likeBtn->Text = L"Like";
			likeBtn->Click += 

			Label^ commBtn = gcnew Label();
			panel1->Controls->Add(commBtn);
			commBtn->AutoSize = true;
			commBtn->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			commBtn->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,static_cast<System::Byte>(0)));
			commBtn->ForeColor = System::Drawing::Color::Gray;
			commBtn->Location = System::Drawing::Point(150, 80);
			commBtn->Text = L"Reply";
			commBtn->Click

			Label^ reacts = gcnew Label();
			panel1->Controls->Add(reacts);
			reacts->AutoSize = true;
			reacts->BackColor = System::Drawing::Color::Transparent;
			reacts->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,static_cast<System::Byte>(0)));
			reacts->ForeColor = System::Drawing::Color::Black;
			reacts->Location = System::Drawing::Point(77, 80);
			reacts->Text = P->comm[i]->reactsCount;

			if (P->comm[i]->reply->Count != 0)
			{
				commentBase->Size = System::Drawing::Size(360, 150);

				PictureBox^ repPic = gcnew PictureBox();
				panel1->Controls->Add(repPic);
				MemoryStream^ ms = gcnew MemoryStream(P->comm[i]->reply[0]->user->profilephoto);
				repPic->Image = Image::FromStream(ms);
				repPic->Location = System::Drawing::Point(94, 103);
				repPic->Size = System::Drawing::Size(30, 30);
				repPic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;

				Label^ repUser = gcnew Label();
				panel1->Controls->Add(repUser);
				repUser->AutoSize = true;
				repUser->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				repUser->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				repUser->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,static_cast<System::Byte>(0)));
				repUser->ForeColor = System::Drawing::Color::Black;
				repUser->Location = System::Drawing::Point(130, 110);
				repUser->Text = P->comm[i]->reply[0]->user->username();

				Label^ repText = gcnew Label();
				panel1->Controls->Add(repText);
				repText->AutoSize = true;
				repText->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				repText->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				repText->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,static_cast<System::Byte>(0)));
				repText->ForeColor = System::Drawing::Color::Black;
				repText->Location = System::Drawing::Point(216, 111);
				repText->Size = System::Drawing::Size(96, 17);
				repText->Text = P->comm[i]->reply[0]->text;

				x += 150;
			}
			else
			{
				x += 100;
			}
		}
	}
	return System::Void();
}
