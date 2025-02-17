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
	/// Summary for NotFriend
	/// </summary>
	public ref class NotFriend : public System::Windows::Forms::Form
	{
		Facebook^ F;
		User^ U1, ^ U2;
	private: System::Windows::Forms::PictureBox^  addPic;
	private: System::Windows::Forms::PictureBox^  pendingPic;

	public:
		NotFriend(void);
		NotFriend(Facebook^ f, User^ u1, User^ u2);

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~NotFriend()
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

	private: Bunifu::Framework::UI::BunifuTileButton^  bunifuTileButton2;
	private: Bunifu::Framework::UI::BunifuTileButton^  bunifuTileButton1;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(NotFriend::typeid));
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
			this->bunifuTileButton2 = (gcnew Bunifu::Framework::UI::BunifuTileButton());
			this->bunifuTileButton1 = (gcnew Bunifu::Framework::UI::BunifuTileButton());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->addPic = (gcnew System::Windows::Forms::PictureBox());
			this->pendingPic = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->addPic))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pendingPic))->BeginInit();
			this->SuspendLayout();
			// 
			// feedsPanel
			// 
			this->feedsPanel->BackColor = System::Drawing::Color::LightGray;
			this->feedsPanel->Location = System::Drawing::Point(0, 444);
			this->feedsPanel->Name = L"feedsPanel";
			this->feedsPanel->Size = System::Drawing::Size(360, 535);
			this->feedsPanel->TabIndex = 45;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(139)), static_cast<System::Int32>(static_cast<System::Byte>(157)),
				static_cast<System::Int32>(static_cast<System::Byte>(195)));
			this->label7->Location = System::Drawing::Point(102, 385);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(84, 15);
			this->label7->TabIndex = 43;
			this->label7->Text = L"Cairo, Egypt";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label6->Location = System::Drawing::Point(45, 385);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(48, 15);
			this->label6->TabIndex = 42;
			this->label6->Text = L"Lives in";
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(139)), static_cast<System::Int32>(static_cast<System::Byte>(157)),
				static_cast<System::Int32>(static_cast<System::Byte>(195)));
			this->label5->Location = System::Drawing::Point(104, 408);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(245, 33);
			this->label5->TabIndex = 41;
			this->label5->Text = L"Facebok";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label4->Location = System::Drawing::Point(44, 411);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(54, 15);
			this->label4->TabIndex = 40;
			this->label4->Text = L"Works at";
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(21, 384);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(16, 16);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox7->TabIndex = 38;
			this->pictureBox7->TabStop = false;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(139)), static_cast<System::Int32>(static_cast<System::Byte>(157)),
				static_cast<System::Int32>(static_cast<System::Byte>(195)));
			this->label3->Location = System::Drawing::Point(103, 348);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(245, 33);
			this->label3->TabIndex = 39;
			this->label3->Text = L"Faculty of Computer and Information\r\nScience Ain Shams University\r\n";
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(21, 409);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(18, 18);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox6->TabIndex = 37;
			this->pictureBox6->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label2->Location = System::Drawing::Point(43, 349);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(62, 15);
			this->label2->TabIndex = 44;
			this->label2->Text = L"Studied at";
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(20, 345);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(20, 20);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox5->TabIndex = 36;
			this->pictureBox5->TabStop = false;
			// 
			// bunifuTileButton4
			// 
			this->bunifuTileButton4->BackColor = System::Drawing::Color::Transparent;
			this->bunifuTileButton4->color = System::Drawing::Color::Transparent;
			this->bunifuTileButton4->colorActive = System::Drawing::Color::Transparent;
			this->bunifuTileButton4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuTileButton4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuTileButton4->ForeColor = System::Drawing::Color::DarkGray;
			this->bunifuTileButton4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuTileButton4.Image")));
			this->bunifuTileButton4->ImagePosition = 10;
			this->bunifuTileButton4->ImageZoom = 25;
			this->bunifuTileButton4->LabelPosition = 16;
			this->bunifuTileButton4->LabelText = L"More";
			this->bunifuTileButton4->Location = System::Drawing::Point(265, 283);
			this->bunifuTileButton4->Margin = System::Windows::Forms::Padding(5);
			this->bunifuTileButton4->Name = L"bunifuTileButton4";
			this->bunifuTileButton4->Size = System::Drawing::Size(75, 45);
			this->bunifuTileButton4->TabIndex = 35;
			// 
			// bunifuTileButton2
			// 
			this->bunifuTileButton2->BackColor = System::Drawing::Color::Transparent;
			this->bunifuTileButton2->color = System::Drawing::Color::Transparent;
			this->bunifuTileButton2->colorActive = System::Drawing::Color::Transparent;
			this->bunifuTileButton2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuTileButton2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuTileButton2->ForeColor = System::Drawing::Color::DarkGray;
			this->bunifuTileButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuTileButton2.Image")));
			this->bunifuTileButton2->ImagePosition = 6;
			this->bunifuTileButton2->ImageZoom = 32;
			this->bunifuTileButton2->LabelPosition = 16;
			this->bunifuTileButton2->LabelText = L"Message";
			this->bunifuTileButton2->Location = System::Drawing::Point(143, 283);
			this->bunifuTileButton2->Margin = System::Windows::Forms::Padding(5);
			this->bunifuTileButton2->Name = L"bunifuTileButton2";
			this->bunifuTileButton2->Size = System::Drawing::Size(75, 45);
			this->bunifuTileButton2->TabIndex = 33;
			// 
			// bunifuTileButton1
			// 
			this->bunifuTileButton1->BackColor = System::Drawing::Color::Transparent;
			this->bunifuTileButton1->color = System::Drawing::Color::Transparent;
			this->bunifuTileButton1->colorActive = System::Drawing::Color::Transparent;
			this->bunifuTileButton1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuTileButton1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuTileButton1->ForeColor = System::Drawing::Color::DarkGray;
			this->bunifuTileButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuTileButton1.Image")));
			this->bunifuTileButton1->ImagePosition = 6;
			this->bunifuTileButton1->ImageZoom = 30;
			this->bunifuTileButton1->LabelPosition = 16;
			this->bunifuTileButton1->LabelText = L"Add Friend";
			this->bunifuTileButton1->Location = System::Drawing::Point(20, 283);
			this->bunifuTileButton1->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
			this->bunifuTileButton1->Name = L"bunifuTileButton1";
			this->bunifuTileButton1->Size = System::Drawing::Size(75, 45);
			this->bunifuTileButton1->TabIndex = 32;
			this->bunifuTileButton1->Click += gcnew System::EventHandler(this, &NotFriend::bunifuTileButton1_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::LightGray;
			this->pictureBox4->Location = System::Drawing::Point(0, 330);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(360, 3);
			this->pictureBox4->TabIndex = 31;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::LightGray;
			this->pictureBox3->Location = System::Drawing::Point(0, 280);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(360, 3);
			this->pictureBox3->TabIndex = 30;
			this->pictureBox3->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(109, 239);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(143, 30);
			this->label1->TabIndex = 29;
			this->label1->Text = L"User Name";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(130, 125);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(100, 100);
			this->pictureBox2->TabIndex = 28;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-57, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(473, 176);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 27;
			this->pictureBox1->TabStop = false;
			// 
			// addPic
			// 
			this->addPic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"addPic.Image")));
			this->addPic->Location = System::Drawing::Point(37, 197);
			this->addPic->Name = L"addPic";
			this->addPic->Size = System::Drawing::Size(0, 0);
			this->addPic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->addPic->TabIndex = 46;
			this->addPic->TabStop = false;
			// 
			// pendingPic
			// 
			this->pendingPic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pendingPic.Image")));
			this->pendingPic->Location = System::Drawing::Point(46, 219);
			this->pendingPic->Name = L"pendingPic";
			this->pendingPic->Size = System::Drawing::Size(0, 0);
			this->pendingPic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pendingPic->TabIndex = 46;
			this->pendingPic->TabStop = false;
			// 
			// NotFriend
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(360, 640);
			this->Controls->Add(this->pendingPic);
			this->Controls->Add(this->addPic);
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
			this->Controls->Add(this->bunifuTileButton2);
			this->Controls->Add(this->bunifuTileButton1);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"NotFriend";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Facebook";
			this->Load += gcnew System::EventHandler(this, &NotFriend::NotFriend_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->addPic))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pendingPic))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
	private: System::Void bunifuTileButton1_Click(System::Object^  sender, System::EventArgs^  e);

	private: System::Void NotFriend_Load(System::Object^  sender, System::EventArgs^  e);
};
}
