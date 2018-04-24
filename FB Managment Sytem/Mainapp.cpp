#include "Mainapp.h"


namespace FBManagmentSytem {
	FBManagmentSytem::Mainapp::Mainapp(void)
	{
		InitializeComponent();
		//
		//TODO: Add the constructor code here
		//
	}

	Mainapp::Mainapp(User ^ u)
	{
		U = u;
		throw gcnew System::NotImplementedException();
	}





	FBManagmentSytem::Mainapp::~Mainapp()
	{
		if (components)
		{
			delete components;
		}
	}

	void FBManagmentSytem::Mainapp::InitializeComponent(void)
	{
		System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Mainapp::typeid));
		this->splitter1 = (gcnew System::Windows::Forms::Splitter());
		this->bunifuImageButton1 = (gcnew Bunifu::Framework::UI::BunifuImageButton());
		this->feedsBtn = (gcnew System::Windows::Forms::RadioButton());
		this->pplBtn = (gcnew System::Windows::Forms::RadioButton());
		this->noti = (gcnew System::Windows::Forms::RadioButton());
		this->setBtn = (gcnew System::Windows::Forms::RadioButton());
		this->feedsPanel = (gcnew System::Windows::Forms::Panel());
		this->pplPanel = (gcnew System::Windows::Forms::Panel());
		this->stngsPanel = (gcnew System::Windows::Forms::Panel());
		this->logoutBtn = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
		this->payBtn = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
		this->accBtn = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
		this->reportBtn = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
		this->termsBtn = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
		this->profileClkPnl = (gcnew System::Windows::Forms::Panel());
		this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
		this->label1 = (gcnew System::Windows::Forms::Label());
		this->userLbl = (gcnew System::Windows::Forms::Label());
		this->userPic = (gcnew System::Windows::Forms::PictureBox());
		this->notiPanel = (gcnew System::Windows::Forms::Panel());
		this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
		this->feedsAct = (gcnew System::Windows::Forms::PictureBox());
		this->pplAct = (gcnew System::Windows::Forms::PictureBox());
		this->notiAct = (gcnew System::Windows::Forms::PictureBox());
		this->setAct = (gcnew System::Windows::Forms::PictureBox());
		this->feedsNotAct = (gcnew System::Windows::Forms::PictureBox());
		this->pplNotAct = (gcnew System::Windows::Forms::PictureBox());
		this->notiNotAct = (gcnew System::Windows::Forms::PictureBox());
		this->setNotAct = (gcnew System::Windows::Forms::PictureBox());
		this->searchTxt = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
		this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton1))->BeginInit();
		this->stngsPanel->SuspendLayout();
		this->profileClkPnl->SuspendLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->userPic))->BeginInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->feedsAct))->BeginInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pplAct))->BeginInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->notiAct))->BeginInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->setAct))->BeginInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->feedsNotAct))->BeginInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pplNotAct))->BeginInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->notiNotAct))->BeginInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->setNotAct))->BeginInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
		this->SuspendLayout();
		// 
		// splitter1
		// 
		this->splitter1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(89)),
			static_cast<System::Int32>(static_cast<System::Byte>(152)));
		this->splitter1->Cursor = System::Windows::Forms::Cursors::Arrow;
		this->splitter1->Dock = System::Windows::Forms::DockStyle::Top;
		this->splitter1->Location = System::Drawing::Point(0, 0);
		this->splitter1->Name = L"splitter1";
		this->splitter1->Size = System::Drawing::Size(1386, 60);
		this->splitter1->TabIndex = 0;
		this->splitter1->TabStop = false;
		this->splitter1->SplitterMoved += gcnew System::Windows::Forms::SplitterEventHandler(this, &Mainapp::splitter1_SplitterMoved);
		// 
		// bunifuImageButton1
		// 
		this->bunifuImageButton1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)),
			static_cast<System::Int32>(static_cast<System::Byte>(89)), static_cast<System::Int32>(static_cast<System::Byte>(152)));
		this->bunifuImageButton1->Cursor = System::Windows::Forms::Cursors::Hand;
		this->bunifuImageButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton1.Image")));
		this->bunifuImageButton1->ImageActive = nullptr;
		this->bunifuImageButton1->Location = System::Drawing::Point(315, 17);
		this->bunifuImageButton1->Name = L"bunifuImageButton1";
		this->bunifuImageButton1->Size = System::Drawing::Size(30, 30);
		this->bunifuImageButton1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
		this->bunifuImageButton1->TabIndex = 2;
		this->bunifuImageButton1->TabStop = false;
		this->bunifuImageButton1->Zoom = 10;
		// 
		// feedsBtn
		// 
		this->feedsBtn->Appearance = System::Windows::Forms::Appearance::Button;
		this->feedsBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"feedsBtn.BackgroundImage")));
		this->feedsBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
		this->feedsBtn->Cursor = System::Windows::Forms::Cursors::Hand;
		this->feedsBtn->FlatAppearance->BorderSize = 0;
		this->feedsBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->feedsBtn->Location = System::Drawing::Point(0, 60);
		this->feedsBtn->Name = L"feedsBtn";
		this->feedsBtn->Size = System::Drawing::Size(90, 40);
		this->feedsBtn->TabIndex = 3;
		this->feedsBtn->TabStop = true;
		this->feedsBtn->UseVisualStyleBackColor = true;
		this->feedsBtn->CheckedChanged += gcnew System::EventHandler(this, &Mainapp::feedsBtn_CheckedChanged);
		// 
		// pplBtn
		// 
		this->pplBtn->Appearance = System::Windows::Forms::Appearance::Button;
		this->pplBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pplBtn.BackgroundImage")));
		this->pplBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
		this->pplBtn->Cursor = System::Windows::Forms::Cursors::Hand;
		this->pplBtn->FlatAppearance->BorderSize = 0;
		this->pplBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->pplBtn->Location = System::Drawing::Point(90, 60);
		this->pplBtn->Name = L"pplBtn";
		this->pplBtn->Size = System::Drawing::Size(90, 40);
		this->pplBtn->TabIndex = 3;
		this->pplBtn->TabStop = true;
		this->pplBtn->UseVisualStyleBackColor = true;
		this->pplBtn->CheckedChanged += gcnew System::EventHandler(this, &Mainapp::pplBtn_CheckedChanged);
		// 
		// noti
		// 
		this->noti->Appearance = System::Windows::Forms::Appearance::Button;
		this->noti->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"noti.BackgroundImage")));
		this->noti->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
		this->noti->Cursor = System::Windows::Forms::Cursors::Hand;
		this->noti->FlatAppearance->BorderSize = 0;
		this->noti->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->noti->Location = System::Drawing::Point(180, 60);
		this->noti->Name = L"noti";
		this->noti->Size = System::Drawing::Size(90, 40);
		this->noti->TabIndex = 3;
		this->noti->TabStop = true;
		this->noti->UseVisualStyleBackColor = true;
		this->noti->CheckedChanged += gcnew System::EventHandler(this, &Mainapp::noti_CheckedChanged);
		// 
		// setBtn
		// 
		this->setBtn->Appearance = System::Windows::Forms::Appearance::Button;
		this->setBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"setBtn.BackgroundImage")));
		this->setBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
		this->setBtn->Cursor = System::Windows::Forms::Cursors::Hand;
		this->setBtn->FlatAppearance->BorderSize = 0;
		this->setBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->setBtn->Location = System::Drawing::Point(270, 60);
		this->setBtn->Name = L"setBtn";
		this->setBtn->Size = System::Drawing::Size(90, 40);
		this->setBtn->TabIndex = 3;
		this->setBtn->TabStop = true;
		this->setBtn->UseVisualStyleBackColor = true;
		this->setBtn->CheckedChanged += gcnew System::EventHandler(this, &Mainapp::setBtn_CheckedChanged);
		// 
		// feedsPanel
		// 
		this->feedsPanel->BackColor = System::Drawing::Color::LightGray;
		this->feedsPanel->Location = System::Drawing::Point(0, 105);
		this->feedsPanel->Name = L"feedsPanel";
		this->feedsPanel->Size = System::Drawing::Size(360, 535);
		this->feedsPanel->TabIndex = 4;
		// 
		// pplPanel
		// 
		this->pplPanel->Location = System::Drawing::Point(366, 105);
		this->pplPanel->Name = L"pplPanel";
		this->pplPanel->Size = System::Drawing::Size(360, 535);
		this->pplPanel->TabIndex = 5;
		// 
		// stngsPanel
		// 
		this->stngsPanel->Controls->Add(this->logoutBtn);
		this->stngsPanel->Controls->Add(this->payBtn);
		this->stngsPanel->Controls->Add(this->accBtn);
		this->stngsPanel->Controls->Add(this->reportBtn);
		this->stngsPanel->Controls->Add(this->termsBtn);
		this->stngsPanel->Controls->Add(this->profileClkPnl);
		this->stngsPanel->Location = System::Drawing::Point(1098, 105);
		this->stngsPanel->Name = L"stngsPanel";
		this->stngsPanel->Size = System::Drawing::Size(360, 535);
		this->stngsPanel->TabIndex = 5;
		// 
		// logoutBtn
		// 
		this->logoutBtn->Activecolor = System::Drawing::Color::DarkGray;
		this->logoutBtn->BackColor = System::Drawing::Color::White;
		this->logoutBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
		this->logoutBtn->BorderRadius = 0;
		this->logoutBtn->ButtonText = L"Log Out";
		this->logoutBtn->Cursor = System::Windows::Forms::Cursors::Hand;
		this->logoutBtn->DisabledColor = System::Drawing::Color::Gray;
		this->logoutBtn->ForeColor = System::Drawing::Color::Black;
		this->logoutBtn->Iconcolor = System::Drawing::Color::Transparent;
		this->logoutBtn->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"logoutBtn.Iconimage")));
		this->logoutBtn->Iconimage_right = nullptr;
		this->logoutBtn->Iconimage_right_Selected = nullptr;
		this->logoutBtn->Iconimage_Selected = nullptr;
		this->logoutBtn->IconMarginLeft = 0;
		this->logoutBtn->IconMarginRight = 0;
		this->logoutBtn->IconRightVisible = true;
		this->logoutBtn->IconRightZoom = 0;
		this->logoutBtn->IconVisible = true;
		this->logoutBtn->IconZoom = 90;
		this->logoutBtn->IsTab = false;
		this->logoutBtn->Location = System::Drawing::Point(0, 484);
		this->logoutBtn->Margin = System::Windows::Forms::Padding(4);
		this->logoutBtn->Name = L"logoutBtn";
		this->logoutBtn->Normalcolor = System::Drawing::Color::White;
		this->logoutBtn->OnHovercolor = System::Drawing::Color::DarkGray;
		this->logoutBtn->OnHoverTextColor = System::Drawing::Color::Black;
		this->logoutBtn->selected = false;
		this->logoutBtn->Size = System::Drawing::Size(360, 50);
		this->logoutBtn->TabIndex = 0;
		this->logoutBtn->Text = L"Log Out";
		this->logoutBtn->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->logoutBtn->Textcolor = System::Drawing::Color::Black;
		this->logoutBtn->TextFont = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		// 
		// payBtn
		// 
		this->payBtn->Activecolor = System::Drawing::Color::DarkGray;
		this->payBtn->BackColor = System::Drawing::Color::White;
		this->payBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
		this->payBtn->BorderRadius = 0;
		this->payBtn->ButtonText = L"Payment Settings";
		this->payBtn->Cursor = System::Windows::Forms::Cursors::Hand;
		this->payBtn->DisabledColor = System::Drawing::Color::Gray;
		this->payBtn->ForeColor = System::Drawing::Color::Black;
		this->payBtn->Iconcolor = System::Drawing::Color::Transparent;
		this->payBtn->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"payBtn.Iconimage")));
		this->payBtn->Iconimage_right = nullptr;
		this->payBtn->Iconimage_right_Selected = nullptr;
		this->payBtn->Iconimage_Selected = nullptr;
		this->payBtn->IconMarginLeft = 0;
		this->payBtn->IconMarginRight = 0;
		this->payBtn->IconRightVisible = true;
		this->payBtn->IconRightZoom = 0;
		this->payBtn->IconVisible = true;
		this->payBtn->IconZoom = 90;
		this->payBtn->IsTab = false;
		this->payBtn->Location = System::Drawing::Point(0, 236);
		this->payBtn->Margin = System::Windows::Forms::Padding(4);
		this->payBtn->Name = L"payBtn";
		this->payBtn->Normalcolor = System::Drawing::Color::White;
		this->payBtn->OnHovercolor = System::Drawing::Color::DarkGray;
		this->payBtn->OnHoverTextColor = System::Drawing::Color::Black;
		this->payBtn->selected = false;
		this->payBtn->Size = System::Drawing::Size(360, 50);
		this->payBtn->TabIndex = 0;
		this->payBtn->Text = L"Payment Settings";
		this->payBtn->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->payBtn->Textcolor = System::Drawing::Color::Black;
		this->payBtn->TextFont = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		// 
		// accBtn
		// 
		this->accBtn->Activecolor = System::Drawing::Color::DarkGray;
		this->accBtn->BackColor = System::Drawing::Color::White;
		this->accBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
		this->accBtn->BorderRadius = 0;
		this->accBtn->ButtonText = L"Account Settings";
		this->accBtn->Cursor = System::Windows::Forms::Cursors::Hand;
		this->accBtn->DisabledColor = System::Drawing::Color::Gray;
		this->accBtn->ForeColor = System::Drawing::Color::Black;
		this->accBtn->Iconcolor = System::Drawing::Color::Transparent;
		this->accBtn->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"accBtn.Iconimage")));
		this->accBtn->Iconimage_right = nullptr;
		this->accBtn->Iconimage_right_Selected = nullptr;
		this->accBtn->Iconimage_Selected = nullptr;
		this->accBtn->IconMarginLeft = 0;
		this->accBtn->IconMarginRight = 0;
		this->accBtn->IconRightVisible = true;
		this->accBtn->IconRightZoom = 0;
		this->accBtn->IconVisible = true;
		this->accBtn->IconZoom = 90;
		this->accBtn->IsTab = false;
		this->accBtn->Location = System::Drawing::Point(0, 186);
		this->accBtn->Margin = System::Windows::Forms::Padding(4);
		this->accBtn->Name = L"accBtn";
		this->accBtn->Normalcolor = System::Drawing::Color::White;
		this->accBtn->OnHovercolor = System::Drawing::Color::DarkGray;
		this->accBtn->OnHoverTextColor = System::Drawing::Color::Black;
		this->accBtn->selected = false;
		this->accBtn->Size = System::Drawing::Size(360, 50);
		this->accBtn->TabIndex = 0;
		this->accBtn->Text = L"Account Settings";
		this->accBtn->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->accBtn->Textcolor = System::Drawing::Color::Black;
		this->accBtn->TextFont = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		// 
		// reportBtn
		// 
		this->reportBtn->Activecolor = System::Drawing::Color::DarkGray;
		this->reportBtn->BackColor = System::Drawing::Color::White;
		this->reportBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
		this->reportBtn->BorderRadius = 0;
		this->reportBtn->ButtonText = L"Report a Problem";
		this->reportBtn->Cursor = System::Windows::Forms::Cursors::Hand;
		this->reportBtn->DisabledColor = System::Drawing::Color::Gray;
		this->reportBtn->ForeColor = System::Drawing::Color::Black;
		this->reportBtn->Iconcolor = System::Drawing::Color::Transparent;
		this->reportBtn->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"reportBtn.Iconimage")));
		this->reportBtn->Iconimage_right = nullptr;
		this->reportBtn->Iconimage_right_Selected = nullptr;
		this->reportBtn->Iconimage_Selected = nullptr;
		this->reportBtn->IconMarginLeft = 0;
		this->reportBtn->IconMarginRight = 0;
		this->reportBtn->IconRightVisible = true;
		this->reportBtn->IconRightZoom = 0;
		this->reportBtn->IconVisible = true;
		this->reportBtn->IconZoom = 90;
		this->reportBtn->IsTab = false;
		this->reportBtn->Location = System::Drawing::Point(0, 136);
		this->reportBtn->Margin = System::Windows::Forms::Padding(4);
		this->reportBtn->Name = L"reportBtn";
		this->reportBtn->Normalcolor = System::Drawing::Color::White;
		this->reportBtn->OnHovercolor = System::Drawing::Color::DarkGray;
		this->reportBtn->OnHoverTextColor = System::Drawing::Color::Black;
		this->reportBtn->selected = false;
		this->reportBtn->Size = System::Drawing::Size(360, 50);
		this->reportBtn->TabIndex = 0;
		this->reportBtn->Text = L"Report a Problem";
		this->reportBtn->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->reportBtn->Textcolor = System::Drawing::Color::Black;
		this->reportBtn->TextFont = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		// 
		// termsBtn
		// 
		this->termsBtn->Activecolor = System::Drawing::Color::DarkGray;
		this->termsBtn->BackColor = System::Drawing::Color::White;
		this->termsBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
		this->termsBtn->BorderRadius = 0;
		this->termsBtn->ButtonText = L"Terms && Policies";
		this->termsBtn->Cursor = System::Windows::Forms::Cursors::Hand;
		this->termsBtn->DisabledColor = System::Drawing::Color::Gray;
		this->termsBtn->ForeColor = System::Drawing::Color::Black;
		this->termsBtn->Iconcolor = System::Drawing::Color::Transparent;
		this->termsBtn->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"termsBtn.Iconimage")));
		this->termsBtn->Iconimage_right = nullptr;
		this->termsBtn->Iconimage_right_Selected = nullptr;
		this->termsBtn->Iconimage_Selected = nullptr;
		this->termsBtn->IconMarginLeft = 0;
		this->termsBtn->IconMarginRight = 0;
		this->termsBtn->IconRightVisible = true;
		this->termsBtn->IconRightZoom = 0;
		this->termsBtn->IconVisible = true;
		this->termsBtn->IconZoom = 90;
		this->termsBtn->IsTab = false;
		this->termsBtn->Location = System::Drawing::Point(0, 86);
		this->termsBtn->Margin = System::Windows::Forms::Padding(4);
		this->termsBtn->Name = L"termsBtn";
		this->termsBtn->Normalcolor = System::Drawing::Color::White;
		this->termsBtn->OnHovercolor = System::Drawing::Color::DarkGray;
		this->termsBtn->OnHoverTextColor = System::Drawing::Color::Black;
		this->termsBtn->selected = false;
		this->termsBtn->Size = System::Drawing::Size(360, 50);
		this->termsBtn->TabIndex = 0;
		this->termsBtn->Text = L"Terms && Policies";
		this->termsBtn->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->termsBtn->Textcolor = System::Drawing::Color::Black;
		this->termsBtn->TextFont = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		// 
		// profileClkPnl
		// 
		this->profileClkPnl->Controls->Add(this->pictureBox3);
		this->profileClkPnl->Controls->Add(this->label1);
		this->profileClkPnl->Controls->Add(this->userLbl);
		this->profileClkPnl->Controls->Add(this->userPic);
		this->profileClkPnl->Cursor = System::Windows::Forms::Cursors::Hand;
		this->profileClkPnl->Location = System::Drawing::Point(3, 3);
		this->profileClkPnl->Name = L"profileClkPnl";
		this->profileClkPnl->Size = System::Drawing::Size(354, 77);
		this->profileClkPnl->TabIndex = 0;
		// 
		// pictureBox3
		// 
		this->pictureBox3->BackColor = System::Drawing::Color::LightGray;
		this->pictureBox3->Location = System::Drawing::Point(-3, 74);
		this->pictureBox3->Name = L"pictureBox3";
		this->pictureBox3->Size = System::Drawing::Size(360, 3);
		this->pictureBox3->TabIndex = 16;
		this->pictureBox3->TabStop = false;
		// 
		// label1
		// 
		this->label1->AutoSize = true;
		this->label1->BackColor = System::Drawing::Color::Transparent;
		this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->label1->ForeColor = System::Drawing::Color::DimGray;
		this->label1->Location = System::Drawing::Point(75, 42);
		this->label1->Name = L"label1";
		this->label1->Size = System::Drawing::Size(115, 17);
		this->label1->TabIndex = 3;
		this->label1->Text = L"View your profile";
		// 
		// userLbl
		// 
		this->userLbl->AutoSize = true;
		this->userLbl->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->userLbl->Location = System::Drawing::Point(72, 21);
		this->userLbl->Name = L"userLbl";
		this->userLbl->Size = System::Drawing::Size(108, 22);
		this->userLbl->TabIndex = 3;
		this->userLbl->Text = L"User Name";
		// 
		// userPic
		// 
		this->userPic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"userPic.Image")));
		this->userPic->Location = System::Drawing::Point(16, 15);
		this->userPic->Name = L"userPic";
		this->userPic->Size = System::Drawing::Size(50, 50);
		this->userPic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
		this->userPic->TabIndex = 0;
		this->userPic->TabStop = false;
		// 
		// notiPanel
		// 
		this->notiPanel->Location = System::Drawing::Point(732, 105);
		this->notiPanel->Name = L"notiPanel";
		this->notiPanel->Size = System::Drawing::Size(360, 535);
		this->notiPanel->TabIndex = 5;
		// 
		// pictureBox1
		// 
		this->pictureBox1->BackColor = System::Drawing::Color::LightGray;
		this->pictureBox1->Location = System::Drawing::Point(0, 105);
		this->pictureBox1->Name = L"pictureBox1";
		this->pictureBox1->Size = System::Drawing::Size(360, 3);
		this->pictureBox1->TabIndex = 0;
		this->pictureBox1->TabStop = false;
		// 
		// feedsAct
		// 
		this->feedsAct->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"feedsAct.BackgroundImage")));
		this->feedsAct->Location = System::Drawing::Point(13, 4);
		this->feedsAct->Name = L"feedsAct";
		this->feedsAct->Size = System::Drawing::Size(0, 0);
		this->feedsAct->TabIndex = 6;
		this->feedsAct->TabStop = false;
		// 
		// pplAct
		// 
		this->pplAct->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pplAct.BackgroundImage")));
		this->pplAct->Location = System::Drawing::Point(119, 4);
		this->pplAct->Name = L"pplAct";
		this->pplAct->Size = System::Drawing::Size(0, 0);
		this->pplAct->TabIndex = 7;
		this->pplAct->TabStop = false;
		// 
		// notiAct
		// 
		this->notiAct->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"notiAct.BackgroundImage")));
		this->notiAct->Location = System::Drawing::Point(225, 4);
		this->notiAct->Name = L"notiAct";
		this->notiAct->Size = System::Drawing::Size(0, 0);
		this->notiAct->TabIndex = 8;
		this->notiAct->TabStop = false;
		// 
		// setAct
		// 
		this->setAct->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"setAct.BackgroundImage")));
		this->setAct->Location = System::Drawing::Point(331, 4);
		this->setAct->Name = L"setAct";
		this->setAct->Size = System::Drawing::Size(0, 0);
		this->setAct->TabIndex = 9;
		this->setAct->TabStop = false;
		// 
		// feedsNotAct
		// 
		this->feedsNotAct->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"feedsNotAct.BackgroundImage")));
		this->feedsNotAct->Location = System::Drawing::Point(0, 66);
		this->feedsNotAct->Name = L"feedsNotAct";
		this->feedsNotAct->Size = System::Drawing::Size(0, 0);
		this->feedsNotAct->TabIndex = 10;
		this->feedsNotAct->TabStop = false;
		// 
		// pplNotAct
		// 
		this->pplNotAct->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pplNotAct.BackgroundImage")));
		this->pplNotAct->Location = System::Drawing::Point(97, 60);
		this->pplNotAct->Name = L"pplNotAct";
		this->pplNotAct->Size = System::Drawing::Size(0, 0);
		this->pplNotAct->TabIndex = 11;
		this->pplNotAct->TabStop = false;
		this->pplNotAct->Click += gcnew System::EventHandler(this, &Mainapp::pictureBox7_Click);
		// 
		// notiNotAct
		// 
		this->notiNotAct->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"notiNotAct.BackgroundImage")));
		this->notiNotAct->Location = System::Drawing::Point(225, 66);
		this->notiNotAct->Name = L"notiNotAct";
		this->notiNotAct->Size = System::Drawing::Size(0, 0);
		this->notiNotAct->TabIndex = 12;
		this->notiNotAct->TabStop = false;
		// 
		// setNotAct
		// 
		this->setNotAct->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"setNotAct.BackgroundImage")));
		this->setNotAct->Location = System::Drawing::Point(345, 58);
		this->setNotAct->Name = L"setNotAct";
		this->setNotAct->Size = System::Drawing::Size(0, 0);
		this->setNotAct->TabIndex = 13;
		this->setNotAct->TabStop = false;
		// 
		// searchTxt
		// 
		this->searchTxt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(89)),
			static_cast<System::Int32>(static_cast<System::Byte>(152)));
		this->searchTxt->Cursor = System::Windows::Forms::Cursors::IBeam;
		this->searchTxt->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->searchTxt->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(139)), static_cast<System::Int32>(static_cast<System::Byte>(157)),
			static_cast<System::Int32>(static_cast<System::Byte>(195)));
		this->searchTxt->HintForeColor = System::Drawing::Color::Empty;
		this->searchTxt->HintText = L"";
		this->searchTxt->isPassword = false;
		this->searchTxt->LineFocusedColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(139)),
			static_cast<System::Int32>(static_cast<System::Byte>(157)), static_cast<System::Int32>(static_cast<System::Byte>(195)));
		this->searchTxt->LineIdleColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(139)), static_cast<System::Int32>(static_cast<System::Byte>(157)),
			static_cast<System::Int32>(static_cast<System::Byte>(195)));
		this->searchTxt->LineMouseHoverColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(139)),
			static_cast<System::Int32>(static_cast<System::Byte>(157)), static_cast<System::Int32>(static_cast<System::Byte>(195)));
		this->searchTxt->LineThickness = 4;
		this->searchTxt->Location = System::Drawing::Point(13, 10);
		this->searchTxt->Margin = System::Windows::Forms::Padding(5, 5, 5, 5);
		this->searchTxt->Name = L"searchTxt";
		this->searchTxt->Size = System::Drawing::Size(294, 40);
		this->searchTxt->TabIndex = 14;
		this->searchTxt->Text = L"      Search";
		this->searchTxt->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
		// 
		// pictureBox2
		// 
		this->pictureBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(89)),
			static_cast<System::Int32>(static_cast<System::Byte>(152)));
		this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
		this->pictureBox2->Location = System::Drawing::Point(16, 21);
		this->pictureBox2->Name = L"pictureBox2";
		this->pictureBox2->Size = System::Drawing::Size(20, 20);
		this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
		this->pictureBox2->TabIndex = 15;
		this->pictureBox2->TabStop = false;
		// 
		// Mainapp
		// 
		this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
		this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		this->ClientSize = System::Drawing::Size(1386, 640);
		this->Controls->Add(this->pictureBox2);
		this->Controls->Add(this->searchTxt);
		this->Controls->Add(this->pplNotAct);
		this->Controls->Add(this->setNotAct);
		this->Controls->Add(this->notiNotAct);
		this->Controls->Add(this->feedsNotAct);
		this->Controls->Add(this->setAct);
		this->Controls->Add(this->notiAct);
		this->Controls->Add(this->pplAct);
		this->Controls->Add(this->feedsAct);
		this->Controls->Add(this->pictureBox1);
		this->Controls->Add(this->pplPanel);
		this->Controls->Add(this->stngsPanel);
		this->Controls->Add(this->notiPanel);
		this->Controls->Add(this->feedsPanel);
		this->Controls->Add(this->setBtn);
		this->Controls->Add(this->noti);
		this->Controls->Add(this->pplBtn);
		this->Controls->Add(this->feedsBtn);
		this->Controls->Add(this->bunifuImageButton1);
		this->Controls->Add(this->splitter1);
		this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
		this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
		this->Name = L"Mainapp";
		this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
		this->Text = L"Facebook";
		this->Load += gcnew System::EventHandler(this, &Mainapp::Mainapp_Load);
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton1))->EndInit();
		this->stngsPanel->ResumeLayout(false);
		this->profileClkPnl->ResumeLayout(false);
		this->profileClkPnl->PerformLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->userPic))->EndInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->feedsAct))->EndInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pplAct))->EndInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->notiAct))->EndInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->setAct))->EndInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->feedsNotAct))->EndInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pplNotAct))->EndInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->notiNotAct))->EndInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->setNotAct))->EndInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
		this->ResumeLayout(false);
	}

	System::Void FBManagmentSytem::Mainapp::feedsBtn_CheckedChanged(System::Object ^ sender, System::EventArgs ^ e)
	{
		feedsBtn->BackgroundImage = feedsAct->BackgroundImage;
		pplBtn->BackgroundImage = pplNotAct->BackgroundImage;
		noti->BackgroundImage = notiNotAct->BackgroundImage;
		setBtn->BackgroundImage = setNotAct->BackgroundImage;
	}

	System::Void FBManagmentSytem::Mainapp::pplBtn_CheckedChanged(System::Object ^ sender, System::EventArgs ^ e)
	{
		feedsBtn->BackgroundImage = feedsNotAct->BackgroundImage;
		pplBtn->BackgroundImage = pplAct->BackgroundImage;
		noti->BackgroundImage = notiNotAct->BackgroundImage;
		setBtn->BackgroundImage = setNotAct->BackgroundImage;
	}

	System::Void FBManagmentSytem::Mainapp::noti_CheckedChanged(System::Object ^ sender, System::EventArgs ^ e)
	{
		feedsBtn->BackgroundImage = feedsNotAct->BackgroundImage;
		pplBtn->BackgroundImage = pplNotAct->BackgroundImage;
		noti->BackgroundImage = notiAct->BackgroundImage;
		setBtn->BackgroundImage = setNotAct->BackgroundImage;
	}

	System::Void FBManagmentSytem::Mainapp::setBtn_CheckedChanged(System::Object ^ sender, System::EventArgs ^ e)
	{
		feedsBtn->BackgroundImage = feedsNotAct->BackgroundImage;
		pplBtn->BackgroundImage = pplNotAct->BackgroundImage;
		noti->BackgroundImage = notiNotAct->BackgroundImage;
		setBtn->BackgroundImage = setAct->BackgroundImage;
	}

	System::Void FBManagmentSytem::Mainapp::searchTxt_Enter(System::Object ^ sender, System::EventArgs ^ e)
	{
		if (searchTxt->Text == "      Search") {
			searchTxt->Text = "";
			searchTxt->ForeColor = Color::White;
		}
	}

	System::Void FBManagmentSytem::Mainapp::searchTxt_Leave(System::Object ^ sender, System::EventArgs ^ e)
	{
		if (searchTxt->Text == "") {
			searchTxt->Text = "      Search";
			searchTxt->ForeColor = Color::FromArgb(59, 89, 152);
		}
	}
}