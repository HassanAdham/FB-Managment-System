#pragma once
#include "Facebook.h"
#include "TagForm.h"

namespace FBManagmentSytem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Globalization;
	/// <summary>
	/// Summary for WritePost
	/// </summary>
	public ref class WritePost : public System::Windows::Forms::Form
	{
	public:
		Facebook ^ F;
		User ^ U;
		String^ postText;
		array<Byte>^ postImage;
		String^ privacySelect;
	private: System::Windows::Forms::Label^  label1;
	public:

	public:
		List<String^>^ tagged_userss;
		WritePost(void);
		WritePost(Facebook ^ f, User ^ u);
		WritePost(Facebook ^ f, User ^ u, String^ pstTxt, array<Byte>^ pstImge, String^ privacySlct, List<String^>^ tagged_usrs)
		{
			InitializeComponent();
			F = f;
			U = u;
			postText = pstTxt;
			postTxt->Text = pstTxt;
			postImage = pstImge;
			if (pstImge != nullptr)
			{
				MemoryStream^ ms = gcnew MemoryStream(pstImge);
				postIMG->Image = Image::FromStream(ms);
			}
			privacySelect = privacySlct;
			privacyCmbo->Text = privacySlct;
			tagged_userss = tagged_usrs;
			if (tagged_usrs->Count == 1)
			{
				label1->AutoSize = true;
				label1->Font = gcnew System::Drawing::Font("Segoe UI", 10, FontStyle::Regular);
				label1->BackColor = Color::White;
				label1->ForeColor = Color::Black;
				array<String^>^ arr = tagged_usrs[0]->Split(' ');
				label1->Text = "with " + arr[0];
				userLbl->Text = U->username();
				label1->Location = Point(userLbl->Width + 55 , 71);
				label1->Visible = true;
			}
			else if(tagged_usrs->Count > 1)
			{
				label1->AutoSize = true;
				label1->BackColor = Color::White;
				label1->ForeColor = Color::Black;
				userLbl->Text = U->username();
				label1->Location = Point(userLbl->Width + 55, 71);
				label1->Font = gcnew System::Drawing::Font("Segoe UI", 10, FontStyle::Regular);
				array<String^>^ arr = tagged_usrs[0]->Split(' ');
				label1->Text = "with " + arr[0] + " and " + (tagged_usrs->Count - 1) + " others";
				label1->Visible = true;
			}
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~WritePost()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label2;
	protected:
	private: System::Windows::Forms::Panel^  panel1;
	private: Bunifu::Framework::UI::BunifuImageButton^  backBtn;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::Label^  userLbl;
	private: System::Windows::Forms::ComboBox^  privacyCmbo;
	private: System::Windows::Forms::PictureBox^  postIMG;
	private: System::Windows::Forms::TextBox^  postTxt;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  postBtn;
	private: Bunifu::Framework::UI::BunifuFlatButton^  tagBtn;
	private: Bunifu::Framework::UI::BunifuFlatButton^  bunifuFlatButton1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox5;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(WritePost::typeid));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->postBtn = (gcnew System::Windows::Forms::Button());
			this->backBtn = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->userLbl = (gcnew System::Windows::Forms::Label());
			this->privacyCmbo = (gcnew System::Windows::Forms::ComboBox());
			this->postTxt = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->tagBtn = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->bunifuFlatButton1 = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->postIMG = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->backBtn))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->postIMG))->BeginInit();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(89)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(66, 15);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(135, 32);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Create Post";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(89)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->panel1->Controls->Add(this->postBtn);
			this->panel1->Controls->Add(this->backBtn);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(360, 60);
			this->panel1->TabIndex = 14;
			// 
			// postBtn
			// 
			this->postBtn->BackColor = System::Drawing::Color::Transparent;
			this->postBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->postBtn->Enabled = false;
			this->postBtn->FlatAppearance->BorderSize = 0;
			this->postBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->postBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->postBtn->ForeColor = System::Drawing::Color::White;
			this->postBtn->Location = System::Drawing::Point(285, 0);
			this->postBtn->Name = L"postBtn";
			this->postBtn->Size = System::Drawing::Size(75, 60);
			this->postBtn->TabIndex = 13;
			this->postBtn->Text = L"Post";
			this->postBtn->UseVisualStyleBackColor = false;
			this->postBtn->Click += gcnew System::EventHandler(this, &WritePost::postBtn_Click);
			// 
			// backBtn
			// 
			this->backBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(89)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->backBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->backBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"backBtn.Image")));
			this->backBtn->ImageActive = nullptr;
			this->backBtn->Location = System::Drawing::Point(0, 0);
			this->backBtn->Name = L"backBtn";
			this->backBtn->Size = System::Drawing::Size(55, 60);
			this->backBtn->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->backBtn->TabIndex = 12;
			this->backBtn->TabStop = false;
			this->backBtn->Zoom = 10;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(12, 66);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(50, 50);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 15;
			this->pictureBox3->TabStop = false;
			// 
			// userLbl
			// 
			this->userLbl->AutoSize = true;
			this->userLbl->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->userLbl->Location = System::Drawing::Point(62, 66);
			this->userLbl->Name = L"userLbl";
			this->userLbl->Size = System::Drawing::Size(102, 25);
			this->userLbl->TabIndex = 16;
			this->userLbl->Text = L"UserName";
			// 
			// privacyCmbo
			// 
			this->privacyCmbo->Cursor = System::Windows::Forms::Cursors::Hand;
			this->privacyCmbo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->privacyCmbo->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->privacyCmbo->ForeColor = System::Drawing::Color::DimGray;
			this->privacyCmbo->FormattingEnabled = true;
			this->privacyCmbo->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Public", L"Private" });
			this->privacyCmbo->Location = System::Drawing::Point(68, 92);
			this->privacyCmbo->Name = L"privacyCmbo";
			this->privacyCmbo->Size = System::Drawing::Size(72, 23);
			this->privacyCmbo->TabIndex = 17;
			this->privacyCmbo->Text = L"Public";
			// 
			// postTxt
			// 
			this->postTxt->BackColor = System::Drawing::Color::White;
			this->postTxt->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->postTxt->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->postTxt->Location = System::Drawing::Point(12, 132);
			this->postTxt->Multiline = true;
			this->postTxt->Name = L"postTxt";
			this->postTxt->Size = System::Drawing::Size(336, 293);
			this->postTxt->TabIndex = 18;
			this->postTxt->TextChanged += gcnew System::EventHandler(this, &WritePost::postTxt_TextChanged);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::White;
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(17, 127);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(205, 40);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 19;
			this->pictureBox1->TabStop = false;
			// 
			// tagBtn
			// 
			this->tagBtn->Activecolor = System::Drawing::Color::White;
			this->tagBtn->BackColor = System::Drawing::Color::White;
			this->tagBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tagBtn->BorderRadius = 0;
			this->tagBtn->ButtonText = L"Tag Friends";
			this->tagBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->tagBtn->DisabledColor = System::Drawing::Color::White;
			this->tagBtn->ForeColor = System::Drawing::Color::Black;
			this->tagBtn->Iconcolor = System::Drawing::Color::Transparent;
			this->tagBtn->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tagBtn.Iconimage")));
			this->tagBtn->Iconimage_right = nullptr;
			this->tagBtn->Iconimage_right_Selected = nullptr;
			this->tagBtn->Iconimage_Selected = nullptr;
			this->tagBtn->IconMarginLeft = 15;
			this->tagBtn->IconMarginRight = 0;
			this->tagBtn->IconRightVisible = true;
			this->tagBtn->IconRightZoom = 55;
			this->tagBtn->IconVisible = true;
			this->tagBtn->IconZoom = 70;
			this->tagBtn->IsTab = false;
			this->tagBtn->Location = System::Drawing::Point(0, 591);
			this->tagBtn->Margin = System::Windows::Forms::Padding(4);
			this->tagBtn->Name = L"tagBtn";
			this->tagBtn->Normalcolor = System::Drawing::Color::White;
			this->tagBtn->OnHovercolor = System::Drawing::Color::White;
			this->tagBtn->OnHoverTextColor = System::Drawing::Color::Black;
			this->tagBtn->selected = false;
			this->tagBtn->Size = System::Drawing::Size(360, 50);
			this->tagBtn->TabIndex = 20;
			this->tagBtn->Text = L"Tag Friends";
			this->tagBtn->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->tagBtn->Textcolor = System::Drawing::Color::Black;
			this->tagBtn->TextFont = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tagBtn->Click += gcnew System::EventHandler(this, &WritePost::unfriBtn_Click);
			// 
			// bunifuFlatButton1
			// 
			this->bunifuFlatButton1->Activecolor = System::Drawing::Color::White;
			this->bunifuFlatButton1->BackColor = System::Drawing::Color::White;
			this->bunifuFlatButton1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuFlatButton1->BorderRadius = 0;
			this->bunifuFlatButton1->ButtonText = L"Photo/Video";
			this->bunifuFlatButton1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuFlatButton1->DisabledColor = System::Drawing::Color::White;
			this->bunifuFlatButton1->ForeColor = System::Drawing::Color::Black;
			this->bunifuFlatButton1->Iconcolor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton1->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuFlatButton1.Iconimage")));
			this->bunifuFlatButton1->Iconimage_right = nullptr;
			this->bunifuFlatButton1->Iconimage_right_Selected = nullptr;
			this->bunifuFlatButton1->Iconimage_Selected = nullptr;
			this->bunifuFlatButton1->IconMarginLeft = 15;
			this->bunifuFlatButton1->IconMarginRight = 0;
			this->bunifuFlatButton1->IconRightVisible = true;
			this->bunifuFlatButton1->IconRightZoom = 55;
			this->bunifuFlatButton1->IconVisible = true;
			this->bunifuFlatButton1->IconZoom = 70;
			this->bunifuFlatButton1->IsTab = false;
			this->bunifuFlatButton1->Location = System::Drawing::Point(0, 538);
			this->bunifuFlatButton1->Margin = System::Windows::Forms::Padding(4);
			this->bunifuFlatButton1->Name = L"bunifuFlatButton1";
			this->bunifuFlatButton1->Normalcolor = System::Drawing::Color::White;
			this->bunifuFlatButton1->OnHovercolor = System::Drawing::Color::White;
			this->bunifuFlatButton1->OnHoverTextColor = System::Drawing::Color::Black;
			this->bunifuFlatButton1->selected = false;
			this->bunifuFlatButton1->Size = System::Drawing::Size(360, 50);
			this->bunifuFlatButton1->TabIndex = 20;
			this->bunifuFlatButton1->Text = L"Photo/Video";
			this->bunifuFlatButton1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bunifuFlatButton1->Textcolor = System::Drawing::Color::Black;
			this->bunifuFlatButton1->TextFont = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuFlatButton1->Click += gcnew System::EventHandler(this, &WritePost::bunifuFlatButton1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::LightGray;
			this->pictureBox2->Location = System::Drawing::Point(0, 590);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(360, 3);
			this->pictureBox2->TabIndex = 21;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::LightGray;
			this->pictureBox4->Location = System::Drawing::Point(0, 538);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(360, 3);
			this->pictureBox4->TabIndex = 22;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::LightGray;
			this->pictureBox5->Location = System::Drawing::Point(0, 121);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(360, 3);
			this->pictureBox5->TabIndex = 23;
			this->pictureBox5->TabStop = false;
			// 
			// postIMG
			// 
			this->postIMG->Location = System::Drawing::Point(17, 431);
			this->postIMG->Name = L"postIMG";
			this->postIMG->Size = System::Drawing::Size(100, 100);
			this->postIMG->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->postIMG->TabIndex = 24;
			this->postIMG->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(196, 66);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(102, 25);
			this->label1->TabIndex = 16;
			this->label1->Text = L"UserName";
			this->label1->Visible = false;
			// 
			// WritePost
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(360, 640);
			this->Controls->Add(this->postIMG);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->bunifuFlatButton1);
			this->Controls->Add(this->tagBtn);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->postTxt);
			this->Controls->Add(this->privacyCmbo);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->userLbl);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"WritePost";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Facebook";
			this->Load += gcnew System::EventHandler(this, &WritePost::WritePost_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->backBtn))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->postIMG))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void postTxt_TextChanged(System::Object^  sender, System::EventArgs^  e);

	private: System::Void unfriBtn_Click(System::Object^  sender, System::EventArgs^  e);

	private: System::Void postBtn_Click(System::Object^  sender, System::EventArgs^  e);

	private: System::Void bunifuFlatButton1_Click(System::Object^  sender, System::EventArgs^  e);

	private: System::Void WritePost_Load(System::Object^  sender, System::EventArgs^  e);

private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
