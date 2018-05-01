#pragma once
#include "Facebook.h"
#include "Mainapp.h"
#include "About.h"
#include "Post.h"

namespace FBManagmentSytem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Profile
	/// </summary>

	public ref class Profile : public System::Windows::Forms::Form
	{
		Facebook^ F;
			 User^ U;

	public:

		Profile(void);
		Profile(Facebook^ f, User^ u);

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Profile()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  userLbl;
	private: System::Windows::Forms::Label^  eduLbl;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::PictureBox^  pictureBox9;
	private: System::Windows::Forms::PictureBox^  pictureBox10;
	private: System::Windows::Forms::PictureBox^  pictureBox11;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  workLbl;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  liveLbl;
	private: System::Windows::Forms::Panel^  feedsPanel;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: Bunifu::Framework::UI::BunifuImageButton^  backBtn;
	private: Bunifu::Framework::UI::BunifuTileButton^  bunifuTileButton1;
	private: Bunifu::Framework::UI::BunifuTileButton^  editBtn;
	private: Bunifu::Framework::UI::BunifuTileButton^  bunifuTileButton3;
	private: Bunifu::Framework::UI::BunifuTileButton^  bunifuTileButton4;
	private: Posts ^ passedPost;

	protected: 

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Profile::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->userLbl = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->bunifuTileButton1 = (gcnew Bunifu::Framework::UI::BunifuTileButton());
			this->editBtn = (gcnew Bunifu::Framework::UI::BunifuTileButton());
			this->bunifuTileButton3 = (gcnew Bunifu::Framework::UI::BunifuTileButton());
			this->bunifuTileButton4 = (gcnew Bunifu::Framework::UI::BunifuTileButton());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->eduLbl = (gcnew System::Windows::Forms::Label());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->workLbl = (gcnew System::Windows::Forms::Label());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->liveLbl = (gcnew System::Windows::Forms::Label());
			this->feedsPanel = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->backBtn = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			this->feedsPanel->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->backBtn))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::White;
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-57, -1);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(473, 176);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::White;
			this->pictureBox2->Location = System::Drawing::Point(130, 124);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(100, 100);
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// userLbl
			// 
			this->userLbl->BackColor = System::Drawing::Color::White;
			this->userLbl->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->userLbl->Location = System::Drawing::Point(36, 238);
			this->userLbl->Name = L"userLbl";
			this->userLbl->Size = System::Drawing::Size(289, 30);
			this->userLbl->TabIndex = 2;
			this->userLbl->Text = L"User Name";
			this->userLbl->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->userLbl->Click += gcnew System::EventHandler(this, &Profile::label1_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::LightGray;
			this->pictureBox4->Location = System::Drawing::Point(0, 47);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(360, 3);
			this->pictureBox4->TabIndex = 3;
			this->pictureBox4->TabStop = false;
			// 
			// bunifuTileButton1
			// 
			this->bunifuTileButton1->AccessibleRole = System::Windows::Forms::AccessibleRole::TitleBar;
			this->bunifuTileButton1->BackColor = System::Drawing::Color::Transparent;
			this->bunifuTileButton1->color = System::Drawing::Color::Transparent;
			this->bunifuTileButton1->colorActive = System::Drawing::Color::LightGray;
			this->bunifuTileButton1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuTileButton1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuTileButton1->ForeColor = System::Drawing::Color::DarkGray;
			this->bunifuTileButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuTileButton1.Image")));
			this->bunifuTileButton1->ImagePosition = 10;
			this->bunifuTileButton1->ImageZoom = 25;
			this->bunifuTileButton1->LabelPosition = 16;
			this->bunifuTileButton1->LabelText = L"About";
			this->bunifuTileButton1->Location = System::Drawing::Point(10, 0);
			this->bunifuTileButton1->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
			this->bunifuTileButton1->Name = L"bunifuTileButton1";
			this->bunifuTileButton1->Size = System::Drawing::Size(75, 47);
			this->bunifuTileButton1->TabIndex = 4;
			this->bunifuTileButton1->Click += gcnew System::EventHandler(this, &Profile::bunifuTileButton1_Click);
			// 
			// editBtn
			// 
			this->editBtn->BackColor = System::Drawing::Color::Transparent;
			this->editBtn->color = System::Drawing::Color::Transparent;
			this->editBtn->colorActive = System::Drawing::Color::LightGray;
			this->editBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->editBtn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->editBtn->ForeColor = System::Drawing::Color::DarkGray;
			this->editBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"editBtn.Image")));
			this->editBtn->ImagePosition = 10;
			this->editBtn->ImageZoom = 25;
			this->editBtn->LabelPosition = 16;
			this->editBtn->LabelText = L"Edit Profile";
			this->editBtn->Location = System::Drawing::Point(95, 0);
			this->editBtn->Margin = System::Windows::Forms::Padding(5);
			this->editBtn->Name = L"editBtn";
			this->editBtn->Size = System::Drawing::Size(75, 47);
			this->editBtn->TabIndex = 4;
			this->editBtn->Click += gcnew System::EventHandler(this, &Profile::editBtn_Click);
			// 
			// bunifuTileButton3
			// 
			this->bunifuTileButton3->BackColor = System::Drawing::Color::Transparent;
			this->bunifuTileButton3->color = System::Drawing::Color::Transparent;
			this->bunifuTileButton3->colorActive = System::Drawing::Color::LightGray;
			this->bunifuTileButton3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuTileButton3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuTileButton3->ForeColor = System::Drawing::Color::DarkGray;
			this->bunifuTileButton3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuTileButton3.Image")));
			this->bunifuTileButton3->ImagePosition = 10;
			this->bunifuTileButton3->ImageZoom = 35;
			this->bunifuTileButton3->LabelPosition = 16;
			this->bunifuTileButton3->LabelText = L"Friends";
			this->bunifuTileButton3->Location = System::Drawing::Point(182, 0);
			this->bunifuTileButton3->Margin = System::Windows::Forms::Padding(5);
			this->bunifuTileButton3->Name = L"bunifuTileButton3";
			this->bunifuTileButton3->Size = System::Drawing::Size(75, 47);
			this->bunifuTileButton3->TabIndex = 4;
			this->bunifuTileButton3->Click += gcnew System::EventHandler(this, &Profile::bunifuTileButton3_Click);
			// 
			// bunifuTileButton4
			// 
			this->bunifuTileButton4->BackColor = System::Drawing::Color::Transparent;
			this->bunifuTileButton4->color = System::Drawing::Color::Transparent;
			this->bunifuTileButton4->colorActive = System::Drawing::Color::LightGray;
			this->bunifuTileButton4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuTileButton4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuTileButton4->ForeColor = System::Drawing::Color::DarkGray;
			this->bunifuTileButton4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuTileButton4.Image")));
			this->bunifuTileButton4->ImagePosition = 10;
			this->bunifuTileButton4->ImageZoom = 25;
			this->bunifuTileButton4->LabelPosition = 16;
			this->bunifuTileButton4->LabelText = L"More";
			this->bunifuTileButton4->Location = System::Drawing::Point(267, 0);
			this->bunifuTileButton4->Margin = System::Windows::Forms::Padding(5);
			this->bunifuTileButton4->Name = L"bunifuTileButton4";
			this->bunifuTileButton4->Size = System::Drawing::Size(75, 47);
			this->bunifuTileButton4->TabIndex = 4;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(20, 63);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(20, 20);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox5->TabIndex = 5;
			this->pictureBox5->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label2->Location = System::Drawing::Point(43, 67);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(62, 15);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Studied at";
			// 
			// eduLbl
			// 
			this->eduLbl->BackColor = System::Drawing::Color::Transparent;
			this->eduLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->eduLbl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(139)), static_cast<System::Int32>(static_cast<System::Byte>(157)),
				static_cast<System::Int32>(static_cast<System::Byte>(195)));
			this->eduLbl->Location = System::Drawing::Point(103, 66);
			this->eduLbl->Name = L"eduLbl";
			this->eduLbl->Size = System::Drawing::Size(245, 33);
			this->eduLbl->TabIndex = 6;
			this->eduLbl->Text = L"Faculty of Computer and Information\r\nScience Ain Shams University\r\n";
			this->eduLbl->Click += gcnew System::EventHandler(this, &Profile::label3_Click);
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(21, 127);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(18, 18);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox6->TabIndex = 5;
			this->pictureBox6->TabStop = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label4->Location = System::Drawing::Point(44, 129);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(54, 15);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Works at";
			// 
			// workLbl
			// 
			this->workLbl->BackColor = System::Drawing::Color::Transparent;
			this->workLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->workLbl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(139)), static_cast<System::Int32>(static_cast<System::Byte>(157)),
				static_cast<System::Int32>(static_cast<System::Byte>(195)));
			this->workLbl->Location = System::Drawing::Point(104, 126);
			this->workLbl->Name = L"workLbl";
			this->workLbl->Size = System::Drawing::Size(245, 33);
			this->workLbl->TabIndex = 6;
			this->workLbl->Text = L"Facebook";
			this->workLbl->Click += gcnew System::EventHandler(this, &Profile::label3_Click);
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(21, 102);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(16, 16);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox7->TabIndex = 5;
			this->pictureBox7->TabStop = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label6->Location = System::Drawing::Point(45, 103);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(48, 15);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Lives in";
			// 
			// liveLbl
			// 
			this->liveLbl->AutoSize = true;
			this->liveLbl->BackColor = System::Drawing::Color::Transparent;
			this->liveLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->liveLbl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(139)), static_cast<System::Int32>(static_cast<System::Byte>(157)),
				static_cast<System::Int32>(static_cast<System::Byte>(195)));
			this->liveLbl->Location = System::Drawing::Point(102, 103);
			this->liveLbl->Name = L"liveLbl";
			this->liveLbl->Size = System::Drawing::Size(84, 15);
			this->liveLbl->TabIndex = 6;
			this->liveLbl->Text = L"Cairo, Egypt";
			this->liveLbl->Click += gcnew System::EventHandler(this, &Profile::label3_Click);
			// 
			// feedsPanel
			// 
			this->feedsPanel->BackColor = System::Drawing::Color::LightGray;
			this->feedsPanel->Controls->Add(this->panel1);
			this->feedsPanel->Location = System::Drawing::Point(0, 275);
			this->feedsPanel->Name = L"feedsPanel";
			this->feedsPanel->Size = System::Drawing::Size(360, 179);
			this->feedsPanel->TabIndex = 7;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Controls->Add(this->editBtn);
			this->panel1->Controls->Add(this->pictureBox4);
			this->panel1->Controls->Add(this->bunifuTileButton1);
			this->panel1->Controls->Add(this->liveLbl);
			this->panel1->Controls->Add(this->bunifuTileButton3);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->bunifuTileButton4);
			this->panel1->Controls->Add(this->workLbl);
			this->panel1->Controls->Add(this->pictureBox5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->pictureBox7);
			this->panel1->Controls->Add(this->pictureBox6);
			this->panel1->Controls->Add(this->eduLbl);
			this->panel1->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->panel1->Location = System::Drawing::Point(0, 3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(360, 171);
			this->panel1->TabIndex = 16;
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(133, 127);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(94, 94);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox8->TabIndex = 14;
			this->pictureBox8->TabStop = false;
			// 
			// backBtn
			// 
			this->backBtn->BackColor = System::Drawing::Color::Transparent;
			this->backBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->backBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"backBtn.Image")));
			this->backBtn->ImageActive = nullptr;
			this->backBtn->Location = System::Drawing::Point(0, -1);
			this->backBtn->Name = L"backBtn";
			this->backBtn->Size = System::Drawing::Size(55, 60);
			this->backBtn->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->backBtn->TabIndex = 13;
			this->backBtn->TabStop = false;
			this->backBtn->Zoom = 10;
			this->backBtn->Click += gcnew System::EventHandler(this, &Profile::backBtn_Click);
			// 
			// pictureBox11
			// 
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(33, 201);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(0, 0);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox11->TabIndex = 4;
			this->pictureBox11->TabStop = false;
			// 
			// pictureBox10
			// 
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(33, 201);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(0, 0);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox10->TabIndex = 4;
			this->pictureBox10->TabStop = false;
			// 
			// pictureBox9
			// 
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(33, 201);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(0, 0);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox9->TabIndex = 4;
			this->pictureBox9->TabStop = false;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->panel2->Location = System::Drawing::Point(0, 127);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(360, 171);
			this->panel2->TabIndex = 17;
			// 
			// Profile
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::Color::LightGray;
			this->ClientSize = System::Drawing::Size(360, 640);
			this->Controls->Add(this->backBtn);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->feedsPanel);
			this->Controls->Add(this->userLbl);
			this->Controls->Add(this->pictureBox10);
			this->Controls->Add(this->pictureBox11);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->panel2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Profile";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Facebook";
			this->Load += gcnew System::EventHandler(this, &Profile::Profile_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			this->feedsPanel->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->backBtn))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Profile_Load(System::Object^  sender, System::EventArgs^  e);
			 
	private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}

	private: System::Void editBtn_Click(System::Object^  sender, System::EventArgs^  e);

	private: System::Void bunifuTileButton3_Click(System::Object^  sender, System::EventArgs^  e);

	private: System::Void backBtn_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void label3_Click_1(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void bunifuTileButton1_Click(System::Object^  sender, System::EventArgs^  e);

		 private: System::Void postPanel_Click(System::Object^  sender, System::EventArgs^  e);

};

}
