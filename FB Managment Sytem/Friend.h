#pragma once
#include "Facebook.h"

namespace FBManagmentSytem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Friend
	/// </summary>
	public ref class Friend : public System::Windows::Forms::Form
	{
		Facebook^ F;
		User^ U1,^ U2;
	private: Bunifu::Framework::UI::BunifuImageButton^  backBtn;
	private: System::Windows::Forms::Panel^  panel1;
	private: Bunifu::Framework::UI::BunifuFlatButton^  bunifuFlatButton1;
	private: Bunifu::Framework::UI::BunifuFlatButton^  unfriBtn;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
	public:
		Friend(void);
		Friend(Facebook^ f, User^ u1, User^ u2);

	protected:

		/// <summary>
		/// Clean up any resources being used.
		/// </summary>

		~Friend()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Panel^  feedsPanel;
	protected:
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: Bunifu::Framework::UI::BunifuTileButton^  bunifuTileButton4;
	private: Bunifu::Framework::UI::BunifuTileButton^  bunifuTileButton3;
	private: Bunifu::Framework::UI::BunifuTileButton^  bunifuTileButton2;
	private: Bunifu::Framework::UI::BunifuTileButton^  friendBtn;

	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Friend::typeid));
			this->feedsPanel = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->bunifuTileButton4 = (gcnew Bunifu::Framework::UI::BunifuTileButton());
			this->bunifuTileButton3 = (gcnew Bunifu::Framework::UI::BunifuTileButton());
			this->bunifuTileButton2 = (gcnew Bunifu::Framework::UI::BunifuTileButton());
			this->friendBtn = (gcnew Bunifu::Framework::UI::BunifuTileButton());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->backBtn = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->unfriBtn = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->bunifuFlatButton1 = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->backBtn))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// feedsPanel
			// 
			this->feedsPanel->BackColor = System::Drawing::Color::LightGray;
			this->feedsPanel->Location = System::Drawing::Point(0, 443);
			this->feedsPanel->Name = L"feedsPanel";
			this->feedsPanel->Size = System::Drawing::Size(360, 535);
			this->feedsPanel->TabIndex = 26;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(139)), static_cast<System::Int32>(static_cast<System::Byte>(157)),
				static_cast<System::Int32>(static_cast<System::Byte>(195)));
			this->label7->Location = System::Drawing::Point(102, 384);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(72, 15);
			this->label7->TabIndex = 24;
			this->label7->Text = L"Cairo, Egypt";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label6->Location = System::Drawing::Point(45, 384);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(46, 15);
			this->label6->TabIndex = 23;
			this->label6->Text = L"Lives in";
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(139)), static_cast<System::Int32>(static_cast<System::Byte>(157)),
				static_cast<System::Int32>(static_cast<System::Byte>(195)));
			this->label5->Location = System::Drawing::Point(104, 407);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(245, 33);
			this->label5->TabIndex = 22;
			this->label5->Text = L"Facebok";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label4->Location = System::Drawing::Point(44, 410);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(53, 15);
			this->label4->TabIndex = 21;
			this->label4->Text = L"Works at";
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(21, 383);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(16, 16);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox7->TabIndex = 19;
			this->pictureBox7->TabStop = false;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(139)), static_cast<System::Int32>(static_cast<System::Byte>(157)),
				static_cast<System::Int32>(static_cast<System::Byte>(195)));
			this->label3->Location = System::Drawing::Point(103, 347);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(245, 33);
			this->label3->TabIndex = 20;
			this->label3->Text = L"Faculty of Computer and Information\r\nScience Ain Shams University\r\n";
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(21, 408);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(18, 18);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox6->TabIndex = 18;
			this->pictureBox6->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label2->Location = System::Drawing::Point(43, 348);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(60, 15);
			this->label2->TabIndex = 25;
			this->label2->Text = L"Studied at";
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(20, 344);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(20, 20);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox5->TabIndex = 17;
			this->pictureBox5->TabStop = false;
			// 
			// bunifuTileButton4
			// 
			this->bunifuTileButton4->BackColor = System::Drawing::Color::Transparent;
			this->bunifuTileButton4->color = System::Drawing::Color::Transparent;
			this->bunifuTileButton4->colorActive = System::Drawing::Color::LightGray;
			this->bunifuTileButton4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuTileButton4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuTileButton4->ForeColor = System::Drawing::Color::DarkGray;
			this->bunifuTileButton4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuTileButton4.Image")));
			this->bunifuTileButton4->ImagePosition = 9;
			this->bunifuTileButton4->ImageZoom = 25;
			this->bunifuTileButton4->LabelPosition = 14;
			this->bunifuTileButton4->LabelText = L"More";
			this->bunifuTileButton4->Location = System::Drawing::Point(267, 282);
			this->bunifuTileButton4->Margin = System::Windows::Forms::Padding(5);
			this->bunifuTileButton4->Name = L"bunifuTileButton4";
			this->bunifuTileButton4->Size = System::Drawing::Size(75, 45);
			this->bunifuTileButton4->TabIndex = 16;
			// 
			// bunifuTileButton3
			// 
			this->bunifuTileButton3->BackColor = System::Drawing::Color::Transparent;
			this->bunifuTileButton3->color = System::Drawing::Color::Transparent;
			this->bunifuTileButton3->colorActive = System::Drawing::Color::LightGray;
			this->bunifuTileButton3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuTileButton3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuTileButton3->ForeColor = System::Drawing::Color::DarkGray;
			this->bunifuTileButton3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuTileButton3.Image")));
			this->bunifuTileButton3->ImagePosition = 9;
			this->bunifuTileButton3->ImageZoom = 35;
			this->bunifuTileButton3->LabelPosition = 14;
			this->bunifuTileButton3->LabelText = L"Friends";
			this->bunifuTileButton3->Location = System::Drawing::Point(182, 282);
			this->bunifuTileButton3->Margin = System::Windows::Forms::Padding(5);
			this->bunifuTileButton3->Name = L"bunifuTileButton3";
			this->bunifuTileButton3->Size = System::Drawing::Size(75, 45);
			this->bunifuTileButton3->TabIndex = 15;
			// 
			// bunifuTileButton2
			// 
			this->bunifuTileButton2->BackColor = System::Drawing::Color::Transparent;
			this->bunifuTileButton2->color = System::Drawing::Color::Transparent;
			this->bunifuTileButton2->colorActive = System::Drawing::Color::LightGray;
			this->bunifuTileButton2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuTileButton2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuTileButton2->ForeColor = System::Drawing::Color::DarkGray;
			this->bunifuTileButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuTileButton2.Image")));
			this->bunifuTileButton2->ImagePosition = 5;
			this->bunifuTileButton2->ImageZoom = 32;
			this->bunifuTileButton2->LabelPosition = 14;
			this->bunifuTileButton2->LabelText = L"Message";
			this->bunifuTileButton2->Location = System::Drawing::Point(95, 282);
			this->bunifuTileButton2->Margin = System::Windows::Forms::Padding(5);
			this->bunifuTileButton2->Name = L"bunifuTileButton2";
			this->bunifuTileButton2->Size = System::Drawing::Size(75, 45);
			this->bunifuTileButton2->TabIndex = 14;
			// 
			// friendBtn
			// 
			this->friendBtn->BackColor = System::Drawing::Color::Transparent;
			this->friendBtn->color = System::Drawing::Color::Transparent;
			this->friendBtn->colorActive = System::Drawing::Color::LightGray;
			this->friendBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->friendBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->friendBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(89)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->friendBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"friendBtn.Image")));
			this->friendBtn->ImagePosition = 5;
			this->friendBtn->ImageZoom = 32;
			this->friendBtn->LabelPosition = 14;
			this->friendBtn->LabelText = L"Friends";
			this->friendBtn->Location = System::Drawing::Point(10, 282);
			this->friendBtn->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
			this->friendBtn->Name = L"friendBtn";
			this->friendBtn->Size = System::Drawing::Size(75, 45);
			this->friendBtn->TabIndex = 13;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::LightGray;
			this->pictureBox4->Location = System::Drawing::Point(0, 329);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(360, 3);
			this->pictureBox4->TabIndex = 12;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::LightGray;
			this->pictureBox3->Location = System::Drawing::Point(0, 279);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(360, 3);
			this->pictureBox3->TabIndex = 11;
			this->pictureBox3->TabStop = false;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(10, 238);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(339, 30);
			this->label1->TabIndex = 10;
			this->label1->Text = L"User Name";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(130, 124);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(100, 100);
			this->pictureBox2->TabIndex = 9;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-57, -1);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(473, 176);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(133, 127);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(94, 94);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox8->TabIndex = 27;
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
			this->backBtn->TabIndex = 28;
			this->backBtn->TabStop = false;
			this->backBtn->Zoom = 10;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(247)), static_cast<System::Int32>(static_cast<System::Byte>(247)),
				static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->panel1->Controls->Add(this->bunifuFlatButton1);
			this->panel1->Controls->Add(this->unfriBtn);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel1->Location = System::Drawing::Point(0, 532);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(360, 108);
			this->panel1->TabIndex = 29;
			// 
			// unfriBtn
			// 
			this->unfriBtn->Activecolor = System::Drawing::Color::DarkGray;
			this->unfriBtn->BackColor = System::Drawing::Color::White;
			this->unfriBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->unfriBtn->BorderRadius = 0;
			this->unfriBtn->ButtonText = L"Unfriend";
			this->unfriBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->unfriBtn->DisabledColor = System::Drawing::Color::Gray;
			this->unfriBtn->ForeColor = System::Drawing::Color::Black;
			this->unfriBtn->Iconcolor = System::Drawing::Color::Transparent;
			this->unfriBtn->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"unfriBtn.Iconimage")));
			this->unfriBtn->Iconimage_right = nullptr;
			this->unfriBtn->Iconimage_right_Selected = nullptr;
			this->unfriBtn->Iconimage_Selected = nullptr;
			this->unfriBtn->IconMarginLeft = 15;
			this->unfriBtn->IconMarginRight = 0;
			this->unfriBtn->IconRightVisible = true;
			this->unfriBtn->IconRightZoom = 55;
			this->unfriBtn->IconVisible = true;
			this->unfriBtn->IconZoom = 60;
			this->unfriBtn->IsTab = false;
			this->unfriBtn->Location = System::Drawing::Point(0, 54);
			this->unfriBtn->Margin = System::Windows::Forms::Padding(4);
			this->unfriBtn->Name = L"unfriBtn";
			this->unfriBtn->Normalcolor = System::Drawing::Color::White;
			this->unfriBtn->OnHovercolor = System::Drawing::Color::DarkGray;
			this->unfriBtn->OnHoverTextColor = System::Drawing::Color::Black;
			this->unfriBtn->selected = false;
			this->unfriBtn->Size = System::Drawing::Size(360, 50);
			this->unfriBtn->TabIndex = 1;
			this->unfriBtn->Text = L"Unfriend";
			this->unfriBtn->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->unfriBtn->Textcolor = System::Drawing::Color::Black;
			this->unfriBtn->TextFont = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			// 
			// bunifuFlatButton1
			// 
			this->bunifuFlatButton1->Activecolor = System::Drawing::Color::DarkGray;
			this->bunifuFlatButton1->BackColor = System::Drawing::Color::White;
			this->bunifuFlatButton1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuFlatButton1->BorderRadius = 0;
			this->bunifuFlatButton1->ButtonText = L"Ristrected";
			this->bunifuFlatButton1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuFlatButton1->DisabledColor = System::Drawing::Color::Gray;
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
			this->bunifuFlatButton1->IconZoom = 60;
			this->bunifuFlatButton1->IsTab = false;
			this->bunifuFlatButton1->Location = System::Drawing::Point(0, 4);
			this->bunifuFlatButton1->Margin = System::Windows::Forms::Padding(4);
			this->bunifuFlatButton1->Name = L"bunifuFlatButton1";
			this->bunifuFlatButton1->Normalcolor = System::Drawing::Color::White;
			this->bunifuFlatButton1->OnHovercolor = System::Drawing::Color::DarkGray;
			this->bunifuFlatButton1->OnHoverTextColor = System::Drawing::Color::Black;
			this->bunifuFlatButton1->selected = false;
			this->bunifuFlatButton1->Size = System::Drawing::Size(360, 50);
			this->bunifuFlatButton1->TabIndex = 1;
			this->bunifuFlatButton1->Text = L"Ristrected";
			this->bunifuFlatButton1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bunifuFlatButton1->Textcolor = System::Drawing::Color::Black;
			this->bunifuFlatButton1->TextFont = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			// 
			// Friend
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(247)), static_cast<System::Int32>(static_cast<System::Byte>(247)),
				static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->ClientSize = System::Drawing::Size(360, 640);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->backBtn);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->feedsPanel);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->bunifuTileButton4);
			this->Controls->Add(this->bunifuTileButton3);
			this->Controls->Add(this->bunifuTileButton2);
			this->Controls->Add(this->friendBtn);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Friend";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Facebook";
			this->Load += gcnew System::EventHandler(this, &Friend::Friend_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->backBtn))->EndInit();
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Friend_Load(System::Object^  sender, System::EventArgs^  e);
	
};
}
