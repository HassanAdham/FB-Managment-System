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



	private: System::Windows::Forms::RadioButton^  radioButton4;
	private: System::Windows::Forms::Panel^  feedsPanel;
	private: System::Windows::Forms::Panel^  pplPanel;
	private: System::Windows::Forms::Panel^  stngsPanel;
	private: System::Windows::Forms::Panel^  notiPanel;
	private: System::Windows::Forms::PictureBox^  pictureBox1;


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
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->feedsPanel = (gcnew System::Windows::Forms::Panel());
			this->pplPanel = (gcnew System::Windows::Forms::Panel());
			this->stngsPanel = (gcnew System::Windows::Forms::Panel());
			this->notiPanel = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->bunifuImageButton1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
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
			this->splitter1->Size = System::Drawing::Size(1477, 60);
			this->splitter1->TabIndex = 0;
			this->splitter1->TabStop = false;
			this->splitter1->SplitterMoved += gcnew System::Windows::Forms::SplitterEventHandler(this, &Mainapp::splitter1_SplitterMoved);
			// 
			// bunifuTextbox1
			// 
			this->bunifuTextbox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(56)), 
				static_cast<System::Int32>(static_cast<System::Byte>(93)));
			this->bunifuTextbox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuTextbox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(89)), 
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->bunifuTextbox1->Icon = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"bunifuTextbox1.Icon")));
			this->bunifuTextbox1->Location = System::Drawing::Point(13, 12);
			this->bunifuTextbox1->Name = L"bunifuTextbox1";
			this->bunifuTextbox1->Size = System::Drawing::Size(290, 35);
			this->bunifuTextbox1->TabIndex = 1;
			this->bunifuTextbox1->text = L"Search";
			// 
			// bunifuImageButton1
			// 
			this->bunifuImageButton1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), 
				static_cast<System::Int32>(static_cast<System::Byte>(89)), static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->bunifuImageButton1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuImageButton1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"bunifuImageButton1.Image")));
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
			this->feedsBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"feedsBtn.BackgroundImage")));
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
			// 
			// pplBtn
			// 
			this->pplBtn->Appearance = System::Windows::Forms::Appearance::Button;
			this->pplBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pplBtn.BackgroundImage")));
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
			// 
			// noti
			// 
			this->noti->Appearance = System::Windows::Forms::Appearance::Button;
			this->noti->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"noti.BackgroundImage")));
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
			// 
			// radioButton4
			// 
			this->radioButton4->Appearance = System::Windows::Forms::Appearance::Button;
			this->radioButton4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"radioButton4.BackgroundImage")));
			this->radioButton4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->radioButton4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->radioButton4->FlatAppearance->BorderSize = 0;
			this->radioButton4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->radioButton4->Location = System::Drawing::Point(270, 60);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(90, 40);
			this->radioButton4->TabIndex = 3;
			this->radioButton4->TabStop = true;
			this->radioButton4->UseVisualStyleBackColor = true;
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
			// Mainapp
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1477, 640);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pplPanel);
			this->Controls->Add(this->stngsPanel);
			this->Controls->Add(this->notiPanel);
			this->Controls->Add(this->feedsPanel);
			this->Controls->Add(this->radioButton4);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->bunifuImageButton1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Mainapp_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void splitter1_SplitterMoved(System::Object^  sender, System::Windows::Forms::SplitterEventArgs^  e) {
			 }
	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	};
}
