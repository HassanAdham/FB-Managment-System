#pragma once
#include <sstream>
#include <string>
#include <iostream>
#include "Facebook.h"

namespace FBManagmentSytem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	// using namespace std;

	/// <summary>
	/// Summary for Login
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		Login(void)
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
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	protected:
	private: System::Windows::Forms::Button^  loginBtn;

	private: System::Windows::Forms::Label^  SignupLbl;


	private: System::Windows::Forms::Label^  NeedLbl;
	private: Bunifu::Framework::UI::BunifuMetroTextbox^  usernameTxt;
	private: Bunifu::Framework::UI::BunifuMetroTextbox^  pwTxt;



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Login::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->loginBtn = (gcnew System::Windows::Forms::Button());
			this->SignupLbl = (gcnew System::Windows::Forms::Label());
			this->NeedLbl = (gcnew System::Windows::Forms::Label());
			this->usernameTxt = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->pwTxt = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Location = System::Drawing::Point(80, 89);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(200, 100);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// loginBtn
			// 
			this->loginBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(104)),
				static_cast<System::Int32>(static_cast<System::Byte>(164)));
			this->loginBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->loginBtn->FlatAppearance->BorderSize = 0;
			this->loginBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->loginBtn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->loginBtn->ForeColor = System::Drawing::Color::White;
			this->loginBtn->Location = System::Drawing::Point(17, 333);
			this->loginBtn->Name = L"loginBtn";
			this->loginBtn->Size = System::Drawing::Size(330, 50);
			this->loginBtn->TabIndex = 4;
			this->loginBtn->Text = L"Log In";
			this->loginBtn->UseVisualStyleBackColor = false;
			this->loginBtn->Click += gcnew System::EventHandler(this, &Login::loginBtn_Click);
			// 
			// SignupLbl
			// 
			this->SignupLbl->AutoSize = true;
			this->SignupLbl->Cursor = System::Windows::Forms::Cursors::Hand;
			this->SignupLbl->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->SignupLbl->ForeColor = System::Drawing::Color::White;
			this->SignupLbl->Location = System::Drawing::Point(105, 557);
			this->SignupLbl->Name = L"SignupLbl";
			this->SignupLbl->Size = System::Drawing::Size(148, 16);
			this->SignupLbl->TabIndex = 6;
			this->SignupLbl->Text = L"Sign Up For Facebook";
			this->SignupLbl->Click += gcnew System::EventHandler(this, &Login::SignupLbl_Click);
			// 
			// NeedLbl
			// 
			this->NeedLbl->AutoSize = true;
			this->NeedLbl->Cursor = System::Windows::Forms::Cursors::Hand;
			this->NeedLbl->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NeedLbl->ForeColor = System::Drawing::Color::White;
			this->NeedLbl->Location = System::Drawing::Point(138, 590);
			this->NeedLbl->Name = L"NeedLbl";
			this->NeedLbl->Size = System::Drawing::Size(84, 16);
			this->NeedLbl->TabIndex = 6;
			this->NeedLbl->Text = L"Need Help\?";
			// 
			// usernameTxt
			// 
			this->usernameTxt->BackColor = System::Drawing::Color::White;
			this->usernameTxt->BorderColorFocused = System::Drawing::Color::Transparent;
			this->usernameTxt->BorderColorIdle = System::Drawing::Color::Transparent;
			this->usernameTxt->BorderColorMouseHover = System::Drawing::Color::Transparent;
			this->usernameTxt->BorderThickness = 1;
			this->usernameTxt->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->usernameTxt->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->usernameTxt->ForeColor = System::Drawing::Color::DarkGray;
			this->usernameTxt->isPassword = false;
			this->usernameTxt->Location = System::Drawing::Point(17, 216);
			this->usernameTxt->Margin = System::Windows::Forms::Padding(6, 5, 6, 5);
			this->usernameTxt->Name = L"usernameTxt";
			this->usernameTxt->Size = System::Drawing::Size(330, 48);
			this->usernameTxt->TabIndex = 5;
			this->usernameTxt->Text = L"  Email or phone number";
			this->usernameTxt->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->usernameTxt->Enter += gcnew System::EventHandler(this, &Login::usernameTxt_Enter);
			this->usernameTxt->Leave += gcnew System::EventHandler(this, &Login::usernameTxt_Leave);
			// 
			// pwTxt
			// 
			this->pwTxt->BackColor = System::Drawing::Color::White;
			this->pwTxt->BorderColorFocused = System::Drawing::Color::Transparent;
			this->pwTxt->BorderColorIdle = System::Drawing::Color::Transparent;
			this->pwTxt->BorderColorMouseHover = System::Drawing::Color::Transparent;
			this->pwTxt->BorderThickness = 1;
			this->pwTxt->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->pwTxt->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pwTxt->ForeColor = System::Drawing::Color::DarkGray;
			this->pwTxt->isPassword = false;
			this->pwTxt->Location = System::Drawing::Point(17, 274);
			this->pwTxt->Margin = System::Windows::Forms::Padding(6, 5, 6, 5);
			this->pwTxt->Name = L"pwTxt";
			this->pwTxt->Size = System::Drawing::Size(330, 48);
			this->pwTxt->TabIndex = 5;
			this->pwTxt->Text = L"  Password";
			this->pwTxt->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->pwTxt->Enter += gcnew System::EventHandler(this, &Login::pwTxt_Enter);
			this->pwTxt->Leave += gcnew System::EventHandler(this, &Login::pwTxt_Leave);
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(89)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->ClientSize = System::Drawing::Size(360, 640);
			this->Controls->Add(this->NeedLbl);
			this->Controls->Add(this->SignupLbl);
			this->Controls->Add(this->pwTxt);
			this->Controls->Add(this->usernameTxt);
			this->Controls->Add(this->loginBtn);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Login";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Facebook";
			this->Load += gcnew System::EventHandler(this, &Login::Login_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

	#pragma endregion

		private: System::Void Login_Load(System::Object^  sender, System::EventArgs^  e)
		{
	
		}

		private: System::Void loginBtn_Click(System::Object^  sender, System::EventArgs^  e);

		private: System::Void SignupLbl_Click(System::Object^  sender, System::EventArgs^  e);

		private: System::Void usernameTxt_Enter(System::Object^  sender, System::EventArgs^  e)
		{
			if (usernameTxt->Text == "  Email or phone number")
			{
				usernameTxt->Text = "";
				usernameTxt->ForeColor = Color::Black;
			}
		}

		private: System::Void usernameTxt_Leave(System::Object^  sender, System::EventArgs^  e)
		{
			if (usernameTxt->Text == "")
			{
				usernameTxt->Text = "  Email or phone number";
				usernameTxt->ForeColor = Color::DarkGray;
			}
		}

		private: System::Void pwTxt_Enter(System::Object^  sender, System::EventArgs^  e)
		{
			if (pwTxt->Text == "  Password")
			{
				pwTxt->Text = "";
				pwTxt->ForeColor = Color::Black;
				pwTxt->isPassword = true;
			}
		}

		private: System::Void pwTxt_Leave(System::Object^  sender, System::EventArgs^  e)
		{
			if (pwTxt->Text == "")
			{
			pwTxt->Text = "  Password";
			pwTxt->ForeColor = Color::DarkGray;
			pwTxt->isPassword = false;
			}
		}
	};
}
