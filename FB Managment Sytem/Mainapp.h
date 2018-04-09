#pragma once

namespace FBManagmentSytem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Mainapp
	/// </summary>
	public ref class Mainapp : public System::Windows::Forms::Form
	{
	public:
		Mainapp(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Mainapp()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Splitter^  splitter1;
	private: Bunifu::Framework::UI::BunifuTextbox^  bunifuTextbox1;
	private: Bunifu::Framework::UI::BunifuImageButton^  bunifuImageButton1;
	private: System::Windows::Forms::RadioButton^  feedsBtn;

	private: System::Windows::Forms::RadioButton^  pplBtn;
	private: System::Windows::Forms::RadioButton^  noti;
	private: System::Windows::Forms::RadioButton^  setBtn;




	private: System::Windows::Forms::Panel^  feedsPanel;
	private: System::Windows::Forms::Panel^  pplPanel;
	private: System::Windows::Forms::Panel^  stngsPanel;
	private: System::Windows::Forms::Panel^  notiPanel;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  feedsAct;
	private: System::Windows::Forms::PictureBox^  pplAct;
	private: System::Windows::Forms::PictureBox^  notiAct;
	private: System::Windows::Forms::PictureBox^  setAct;



	private: System::Windows::Forms::PictureBox^  feedsNotAct;
	private: System::Windows::Forms::PictureBox^  pplNotAct;
	private: System::Windows::Forms::PictureBox^  notiNotAct;
	private: System::Windows::Forms::PictureBox^  setNotAct;





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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Mainapp::typeid));
			this->splitter1 = (gcnew System::Windows::Forms::Splitter());
			this->bunifuTextbox1 = (gcnew Bunifu::Framework::UI::BunifuTextbox());
			this->bunifuImageButton1 = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->feedsBtn = (gcnew System::Windows::Forms::RadioButton());
			this->pplBtn = (gcnew System::Windows::Forms::RadioButton());
			this->noti = (gcnew System::Windows::Forms::RadioButton());
			this->setBtn = (gcnew System::Windows::Forms::RadioButton());
			this->feedsPanel = (gcnew System::Windows::Forms::Panel());
			this->pplPanel = (gcnew System::Windows::Forms::Panel());
			this->stngsPanel = (gcnew System::Windows::Forms::Panel());
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->feedsAct))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pplAct))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->notiAct))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->setAct))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->feedsNotAct))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pplNotAct))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->notiNotAct))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->setNotAct))->BeginInit();
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
			// bunifuTextbox1
			// 
			this->bunifuTextbox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(56)),
				static_cast<System::Int32>(static_cast<System::Byte>(93)));
			this->bunifuTextbox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuTextbox1.BackgroundImage")));
			this->bunifuTextbox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuTextbox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(89)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->bunifuTextbox1->Icon = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuTextbox1.Icon")));
			this->bunifuTextbox1->Location = System::Drawing::Point(13, 12);
			this->bunifuTextbox1->Name = L"bunifuTextbox1";
			this->bunifuTextbox1->Size = System::Drawing::Size(290, 35);
			this->bunifuTextbox1->TabIndex = 1;
			this->bunifuTextbox1->text = L"Search";
			this->bunifuTextbox1->OnTextChange += gcnew System::EventHandler(this, &Mainapp::bunifuTextbox1_OnTextChange);
			this->bunifuTextbox1->Enter += gcnew System::EventHandler(this, &Mainapp::bunifuTextbox1_Enter);
			this->bunifuTextbox1->Leave += gcnew System::EventHandler(this, &Mainapp::bunifuTextbox1_Leave);
			// 
			// bunifuImageButton1
			// 
			this->bunifuImageButton1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(89)), static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->bunifuImageButton1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuImageButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton1.Image")));
			this->bunifuImageButton1->ImageActive = nullptr;
			this->bunifuImageButton1->Location = System::Drawing::Point(315, 14);
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
			this->feedsPanel->Location = System::Drawing::Point(0, 110);
			this->feedsPanel->Name = L"feedsPanel";
			this->feedsPanel->Size = System::Drawing::Size(360, 530);
			this->feedsPanel->TabIndex = 4;
			// 
			// pplPanel
			// 
			this->pplPanel->Location = System::Drawing::Point(366, 110);
			this->pplPanel->Name = L"pplPanel";
			this->pplPanel->Size = System::Drawing::Size(360, 530);
			this->pplPanel->TabIndex = 5;
			// 
			// stngsPanel
			// 
			this->stngsPanel->Location = System::Drawing::Point(1098, 110);
			this->stngsPanel->Name = L"stngsPanel";
			this->stngsPanel->Size = System::Drawing::Size(360, 530);
			this->stngsPanel->TabIndex = 5;
			// 
			// notiPanel
			// 
			this->notiPanel->Location = System::Drawing::Point(732, 110);
			this->notiPanel->Name = L"notiPanel";
			this->notiPanel->Size = System::Drawing::Size(360, 530);
			this->notiPanel->TabIndex = 5;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ControlDark;
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
			// Mainapp
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1386, 640);
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
			this->Controls->Add(this->bunifuTextbox1);
			this->Controls->Add(this->splitter1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Mainapp";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Mainapp";
			this->Load += gcnew System::EventHandler(this, &Mainapp::Mainapp_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->feedsAct))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pplAct))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->notiAct))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->setAct))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->feedsNotAct))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pplNotAct))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->notiNotAct))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->setNotAct))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Mainapp_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void splitter1_SplitterMoved(System::Object^  sender, System::Windows::Forms::SplitterEventArgs^  e) {
			 }
	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void pictureBox7_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void feedsBtn_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	feedsBtn->BackgroundImage = feedsAct->BackgroundImage;
	pplBtn->BackgroundImage = pplNotAct->BackgroundImage;
	noti->BackgroundImage = notiNotAct->BackgroundImage;
	setBtn->BackgroundImage = setNotAct->BackgroundImage;
}
private: System::Void pplBtn_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	feedsBtn->BackgroundImage = feedsNotAct->BackgroundImage;
	pplBtn->BackgroundImage = pplAct->BackgroundImage;
	noti->BackgroundImage = notiNotAct->BackgroundImage;
	setBtn->BackgroundImage = setNotAct->BackgroundImage;
}
private: System::Void noti_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	feedsBtn->BackgroundImage = feedsNotAct->BackgroundImage;
	pplBtn->BackgroundImage = pplNotAct->BackgroundImage;
	noti->BackgroundImage = notiAct->BackgroundImage;
	setBtn->BackgroundImage = setNotAct->BackgroundImage;
}
private: System::Void setBtn_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	feedsBtn->BackgroundImage = feedsNotAct->BackgroundImage;
	pplBtn->BackgroundImage = pplNotAct->BackgroundImage;
	noti->BackgroundImage = notiNotAct->BackgroundImage;
	setBtn->BackgroundImage = setAct->BackgroundImage;
}
private: System::Void bunifuTextbox1_OnTextChange(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void bunifuTextbox1_Enter(System::Object^  sender, System::EventArgs^  e) {
	if (bunifuTextbox1->text == "Search") {
		bunifuTextbox1->text = "";
		bunifuTextbox1->ForeColor = Color::White;
	}
}
private: System::Void bunifuTextbox1_Leave(System::Object^  sender, System::EventArgs^  e) {
	if (bunifuTextbox1->text == "") {
		bunifuTextbox1->text = "Search";
		bunifuTextbox1->ForeColor = Color::FromArgb(59,89,152);
	}
}
};
}
