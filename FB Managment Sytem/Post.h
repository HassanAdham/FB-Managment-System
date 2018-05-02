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
	/// Summary for Post
	/// </summary>
	public ref class Post : public System::Windows::Forms::Form
	{
	public:
		Facebook ^ F;
		User^ U;
	private: System::Windows::Forms::PictureBox^  sendBtn;
	public:
		Posts ^ P;
		Post(void);
		Post(Facebook^ f, User^ u, Posts^ p);

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Post()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	private: Bunifu::Framework::UI::BunifuImageButton^  backBtn;
	protected:

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
	private: System::Windows::Forms::PictureBox^  pictureBox7;

	private: System::Windows::Forms::PictureBox^  pictureBox6;


	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  angryPic;
	private: System::Windows::Forms::PictureBox^  sadPic;
	private: System::Windows::Forms::PictureBox^  wowPic;
	private: System::Windows::Forms::PictureBox^  hahaPic;
	private: System::Windows::Forms::PictureBox^  lovePic;
	private: System::Windows::Forms::PictureBox^  likePic;
	private: System::Windows::Forms::PictureBox^  reactsPic;
	private: System::Windows::Forms::Label^  likesCount;
	private: System::Windows::Forms::PictureBox^  pictureBox9;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Post::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->backBtn = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->angryPic = (gcnew System::Windows::Forms::PictureBox());
			this->sadPic = (gcnew System::Windows::Forms::PictureBox());
			this->wowPic = (gcnew System::Windows::Forms::PictureBox());
			this->hahaPic = (gcnew System::Windows::Forms::PictureBox());
			this->lovePic = (gcnew System::Windows::Forms::PictureBox());
			this->likePic = (gcnew System::Windows::Forms::PictureBox());
			this->reactsPic = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->likesCount = (gcnew System::Windows::Forms::Label());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->sendBtn = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->backBtn))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->angryPic))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sadPic))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->wowPic))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->hahaPic))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->lovePic))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->likePic))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->reactsPic))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sendBtn))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(89)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->panel1->Controls->Add(this->backBtn);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(360, 60);
			this->panel1->TabIndex = 14;
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
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(89)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(66, 15);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(71, 30);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Posts";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(10, 10);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(40, 40);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 15;
			this->pictureBox1->TabStop = false;
			// 
			// panel2
			// 
			this->panel2->AutoScroll = true;
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->Controls->Add(this->sendBtn);
			this->panel2->Controls->Add(this->pictureBox6);
			this->panel2->Controls->Add(this->pictureBox8);
			this->panel2->Controls->Add(this->pictureBox5);
			this->panel2->Controls->Add(this->angryPic);
			this->panel2->Controls->Add(this->sadPic);
			this->panel2->Controls->Add(this->wowPic);
			this->panel2->Controls->Add(this->hahaPic);
			this->panel2->Controls->Add(this->lovePic);
			this->panel2->Controls->Add(this->likePic);
			this->panel2->Controls->Add(this->reactsPic);
			this->panel2->Controls->Add(this->pictureBox7);
			this->panel2->Controls->Add(this->pictureBox4);
			this->panel2->Controls->Add(this->pictureBox2);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Controls->Add(this->likesCount);
			this->panel2->Controls->Add(this->pictureBox9);
			this->panel2->Location = System::Drawing::Point(0, 65);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(360, 577);
			this->panel2->TabIndex = 16;
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::Color::LightGray;
			this->pictureBox6->Location = System::Drawing::Point(10, 477);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(340, 3);
			this->pictureBox6->TabIndex = 19;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(207, 487);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(100, 25);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox8->TabIndex = 21;
			this->pictureBox8->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(0, 518);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(360, 56);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox5->TabIndex = 20;
			this->pictureBox5->TabStop = false;
			// 
			// angryPic
			// 
			this->angryPic->BackColor = System::Drawing::Color::Transparent;
			this->angryPic->Cursor = System::Windows::Forms::Cursors::Hand;
			this->angryPic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"angryPic.Image")));
			this->angryPic->Location = System::Drawing::Point(276, 431);
			this->angryPic->Name = L"angryPic";
			this->angryPic->Size = System::Drawing::Size(45, 45);
			this->angryPic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->angryPic->TabIndex = 20;
			this->angryPic->TabStop = false;
			// 
			// sadPic
			// 
			this->sadPic->BackColor = System::Drawing::Color::Transparent;
			this->sadPic->Cursor = System::Windows::Forms::Cursors::Hand;
			this->sadPic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"sadPic.Image")));
			this->sadPic->Location = System::Drawing::Point(230, 431);
			this->sadPic->Name = L"sadPic";
			this->sadPic->Size = System::Drawing::Size(45, 45);
			this->sadPic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->sadPic->TabIndex = 20;
			this->sadPic->TabStop = false;
			// 
			// wowPic
			// 
			this->wowPic->BackColor = System::Drawing::Color::Transparent;
			this->wowPic->Cursor = System::Windows::Forms::Cursors::Hand;
			this->wowPic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"wowPic.Image")));
			this->wowPic->Location = System::Drawing::Point(184, 431);
			this->wowPic->Name = L"wowPic";
			this->wowPic->Size = System::Drawing::Size(45, 45);
			this->wowPic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->wowPic->TabIndex = 20;
			this->wowPic->TabStop = false;
			// 
			// hahaPic
			// 
			this->hahaPic->BackColor = System::Drawing::Color::Transparent;
			this->hahaPic->Cursor = System::Windows::Forms::Cursors::Hand;
			this->hahaPic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"hahaPic.Image")));
			this->hahaPic->Location = System::Drawing::Point(138, 431);
			this->hahaPic->Name = L"hahaPic";
			this->hahaPic->Size = System::Drawing::Size(45, 45);
			this->hahaPic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->hahaPic->TabIndex = 20;
			this->hahaPic->TabStop = false;
			// 
			// lovePic
			// 
			this->lovePic->BackColor = System::Drawing::Color::Transparent;
			this->lovePic->Cursor = System::Windows::Forms::Cursors::Hand;
			this->lovePic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"lovePic.Image")));
			this->lovePic->Location = System::Drawing::Point(92, 431);
			this->lovePic->Name = L"lovePic";
			this->lovePic->Size = System::Drawing::Size(45, 45);
			this->lovePic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->lovePic->TabIndex = 20;
			this->lovePic->TabStop = false;
			// 
			// likePic
			// 
			this->likePic->BackColor = System::Drawing::Color::Transparent;
			this->likePic->Cursor = System::Windows::Forms::Cursors::Hand;
			this->likePic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"likePic.Image")));
			this->likePic->Location = System::Drawing::Point(46, 431);
			this->likePic->Name = L"likePic";
			this->likePic->Size = System::Drawing::Size(45, 45);
			this->likePic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->likePic->TabIndex = 20;
			this->likePic->TabStop = false;
			// 
			// reactsPic
			// 
			this->reactsPic->BackColor = System::Drawing::Color::Transparent;
			this->reactsPic->Cursor = System::Windows::Forms::Cursors::Hand;
			this->reactsPic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"reactsPic.Image")));
			this->reactsPic->Location = System::Drawing::Point(43, 429);
			this->reactsPic->Name = L"reactsPic";
			this->reactsPic->Size = System::Drawing::Size(280, 55);
			this->reactsPic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->reactsPic->TabIndex = 20;
			this->reactsPic->TabStop = false;
			this->reactsPic->Visible = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(46, 487);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(60, 25);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox7->TabIndex = 20;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Click += gcnew System::EventHandler(this, &Post::pictureBox7_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::LightGray;
			this->pictureBox4->Location = System::Drawing::Point(0, 518);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(360, 3);
			this->pictureBox4->TabIndex = 19;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(0, 173);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(360, 248);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 18;
			this->pictureBox2->TabStop = false;
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(7, 53);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(341, 117);
			this->label4->TabIndex = 17;
			this->label4->Text = resources->GetString(L"label4.Text");
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::White;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::DarkGray;
			this->label3->Location = System::Drawing::Point(57, 30);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(43, 16);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Time";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(56, 10);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(98, 20);
			this->label1->TabIndex = 16;
			this->label1->Text = L"User Name";
			// 
			// likesCount
			// 
			this->likesCount->AutoSize = true;
			this->likesCount->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->likesCount->ForeColor = System::Drawing::Color::Black;
			this->likesCount->Location = System::Drawing::Point(63, 443);
			this->likesCount->Name = L"likesCount";
			this->likesCount->Size = System::Drawing::Size(22, 17);
			this->likesCount->TabIndex = 23;
			this->likesCount->Text = L"35";
			// 
			// pictureBox9
			// 
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(12, 439);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(52, 27);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox9->TabIndex = 22;
			this->pictureBox9->TabStop = false;
			// 
			// sendBtn
			// 
			this->sendBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"sendBtn.Image")));
			this->sendBtn->Location = System::Drawing::Point(311, 536);
			this->sendBtn->Name = L"sendBtn";
			this->sendBtn->Size = System::Drawing::Size(25, 25);
			this->sendBtn->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->sendBtn->TabIndex = 28;
			this->sendBtn->TabStop = false;
			// 
			// Post
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightGray;
			this->ClientSize = System::Drawing::Size(360, 640);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Post";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Facebook";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->backBtn))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->angryPic))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sadPic))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->wowPic))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->hahaPic))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->lovePic))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->likePic))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->reactsPic))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sendBtn))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void pictureBox7_Click(System::Object^  sender, System::EventArgs^  e);
};
}
