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
		/// Summary for FriendsOP
		/// </summary>
		public ref class FriendsOP : public System::Windows::Forms::Form
		{
			Facebook^ F;
			User^ U1 ,^ U2;
		public:
			FriendsOP(void);
			FriendsOP(Facebook^ f, User ^ u1, User ^ u2);

		protected:
			/// <summary>
			/// Clean up any resources being used.
			/// </summary>
			~FriendsOP()
			{
				if (components)
				{
					delete components;
				}
			}

		private: Bunifu::Framework::UI::BunifuImageButton^  backBtn;
		private: System::Windows::Forms::Label^  label2;
		private: System::Windows::Forms::Panel^  panel1;
		private: Bunifu::Framework::UI::BunifuImageButton^  bunifuImageButton1;
		private: System::Windows::Forms::Panel^  panel3;


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
				System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(FriendsOP::typeid));
				this->backBtn = (gcnew Bunifu::Framework::UI::BunifuImageButton());
				this->label2 = (gcnew System::Windows::Forms::Label());
				this->panel1 = (gcnew System::Windows::Forms::Panel());
				this->bunifuImageButton1 = (gcnew Bunifu::Framework::UI::BunifuImageButton());
				this->panel3 = (gcnew System::Windows::Forms::Panel());
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->backBtn))->BeginInit();
				this->panel1->SuspendLayout();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton1))->BeginInit();
				this->SuspendLayout();
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
				this->backBtn->TabIndex = 4;
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
				this->label2->Size = System::Drawing::Size(95, 30);
				this->label2->TabIndex = 11;
				this->label2->Text = L"Friends";
				this->label2->Click += gcnew System::EventHandler(this, &FriendsOP::label2_Click);
				// 
				// panel1
				// 
				this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(89)),
					static_cast<System::Int32>(static_cast<System::Byte>(152)));
				this->panel1->Controls->Add(this->bunifuImageButton1);
				this->panel1->Controls->Add(this->label2);
				this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
				this->panel1->Location = System::Drawing::Point(0, 0);
				this->panel1->Name = L"panel1";
				this->panel1->Size = System::Drawing::Size(360, 60);
				this->panel1->TabIndex = 12;
				// 
				// bunifuImageButton1
				// 
				this->bunifuImageButton1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)),
					static_cast<System::Int32>(static_cast<System::Byte>(89)), static_cast<System::Int32>(static_cast<System::Byte>(152)));
				this->bunifuImageButton1->Cursor = System::Windows::Forms::Cursors::Hand;
				this->bunifuImageButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton1.Image")));
				this->bunifuImageButton1->ImageActive = nullptr;
				this->bunifuImageButton1->Location = System::Drawing::Point(0, 0);
				this->bunifuImageButton1->Name = L"bunifuImageButton1";
				this->bunifuImageButton1->Size = System::Drawing::Size(55, 60);
				this->bunifuImageButton1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
				this->bunifuImageButton1->TabIndex = 12;
				this->bunifuImageButton1->TabStop = false;
				this->bunifuImageButton1->Zoom = 10;
				// 
				// panel3
				// 
				this->panel3->Dock = System::Windows::Forms::DockStyle::Top;
				this->panel3->Location = System::Drawing::Point(0, 60);
				this->panel3->Name = L"panel3";
				this->panel3->Size = System::Drawing::Size(360, 500);
				this->panel3->TabIndex = 30;
				// 
				// FriendsOP
				// 
				this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				this->ClientSize = System::Drawing::Size(360, 640);
				this->Controls->Add(this->panel3);
				this->Controls->Add(this->panel1);
				this->Controls->Add(this->backBtn);
				this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
				this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
				this->Name = L"FriendsOP";
				this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
				this->Text = L"Facebook";
				this->Load += gcnew System::EventHandler(this, &FriendsOP::FriendsOP_Load);
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->backBtn))->EndInit();
				this->panel1->ResumeLayout(false);
				this->panel1->PerformLayout();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton1))->EndInit();
				this->ResumeLayout(false);

			}
	#pragma endregion
		private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
		}
		private: System::Void FriendsOP_Load(System::Object^  sender, System::EventArgs^  e);
		private: System::Void lblClk_Click(System::Object ^ sender, System::EventArgs ^ e);
	};
}
