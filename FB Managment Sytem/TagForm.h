#pragma once
#include "Facebook.h"
#include "WritePost.h"

namespace FBManagmentSytem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TagForm
	/// </summary>
	public ref class TagForm : public System::Windows::Forms::Form
	{
	public:
		Facebook ^ F;
		User ^ U;
		String^ postText;
		array<Byte>^ postImage;
		String^ privacySelect;
		List<String^>^ tagged_userss;

		TagForm(void);
		TagForm(Facebook ^ f, User ^ u);
		TagForm(Facebook ^ f, User ^ u, String^ pstTxt, array<Byte>^ pstImge, String^ privacySlct, List<String^>^ tagged_usrs)
		{

			InitializeComponent();
			F = f;
			U = u;
			postText = pstTxt;
			postImage = pstImge;
			privacySelect = privacySlct;
			tagged_userss = tagged_usrs;

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~TagForm()
		{
			if (components)
			{
				delete components;
			}
		}
	protected:
	private: System::Windows::Forms::Panel^  panel1;
	private: Bunifu::Framework::UI::BunifuImageButton^  backBtn;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  doneBtn;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::PictureBox^  checkedPic;
	private: System::Windows::Forms::PictureBox^  uncheckedPic;
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::Label^  label3;
	public:  List<String^>^ tagged_users = gcnew List<String^>();
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(TagForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->checkedPic = (gcnew System::Windows::Forms::PictureBox());
			this->uncheckedPic = (gcnew System::Windows::Forms::PictureBox());
			this->doneBtn = (gcnew System::Windows::Forms::Button());
			this->backBtn = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->checkedPic))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->uncheckedPic))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->backBtn))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(89)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->panel1->Controls->Add(this->checkedPic);
			this->panel1->Controls->Add(this->uncheckedPic);
			this->panel1->Controls->Add(this->doneBtn);
			this->panel1->Controls->Add(this->backBtn);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(360, 60);
			this->panel1->TabIndex = 15;
			// 
			// checkedPic
			// 
			this->checkedPic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"checkedPic.Image")));
			this->checkedPic->Location = System::Drawing::Point(244, 19);
			this->checkedPic->Name = L"checkedPic";
			this->checkedPic->Size = System::Drawing::Size(0, 0);
			this->checkedPic->TabIndex = 17;
			this->checkedPic->TabStop = false;
			// 
			// uncheckedPic
			// 
			this->uncheckedPic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"uncheckedPic.Image")));
			this->uncheckedPic->Location = System::Drawing::Point(231, 7);
			this->uncheckedPic->Name = L"uncheckedPic";
			this->uncheckedPic->Size = System::Drawing::Size(0, 0);
			this->uncheckedPic->TabIndex = 17;
			this->uncheckedPic->TabStop = false;
			// 
			// doneBtn
			// 
			this->doneBtn->BackColor = System::Drawing::Color::Transparent;
			this->doneBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->doneBtn->FlatAppearance->BorderSize = 0;
			this->doneBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->doneBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->doneBtn->ForeColor = System::Drawing::Color::White;
			this->doneBtn->Location = System::Drawing::Point(285, 0);
			this->doneBtn->Name = L"doneBtn";
			this->doneBtn->Size = System::Drawing::Size(75, 60);
			this->doneBtn->TabIndex = 16;
			this->doneBtn->Text = L"Done";
			this->doneBtn->UseVisualStyleBackColor = false;
			this->doneBtn->Click += gcnew System::EventHandler(this, &TagForm::doneBtn_Click);
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
			this->label2->Size = System::Drawing::Size(145, 30);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Tag Friends";
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::DarkGray;
			this->pictureBox5->Location = System::Drawing::Point(0, 122);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(360, 3);
			this->pictureBox5->TabIndex = 24;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::DarkGray;
			this->pictureBox2->Location = System::Drawing::Point(0, 145);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(360, 3);
			this->pictureBox2->TabIndex = 24;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Gainsboro;
			this->pictureBox3->Location = System::Drawing::Point(0, 124);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(360, 22);
			this->pictureBox3->TabIndex = 26;
			this->pictureBox3->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Gainsboro;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->label3->Location = System::Drawing::Point(9, 127);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(74, 15);
			this->label3->TabIndex = 27;
			this->label3->Text = L"Suggestions";
			// 
			// panel3
			// 
			this->panel3->AutoScroll = true;
			this->panel3->Location = System::Drawing::Point(0, 147);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(360, 427);
			this->panel3->TabIndex = 28;
			// 
			// panel4
			// 
			this->panel4->AutoScroll = true;
			this->panel4->Location = System::Drawing::Point(0, 60);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(360, 61);
			this->panel4->TabIndex = 29;
			// 
			// TagForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(247)), static_cast<System::Int32>(static_cast<System::Byte>(247)),
				static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->ClientSize = System::Drawing::Size(360, 640);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"TagForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Facebook";
			this->Load += gcnew System::EventHandler(this, &TagForm::TagForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->checkedPic))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->uncheckedPic))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->backBtn))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void TagForm_Load(System::Object^  sender, System::EventArgs^  e);

	private: System::Void TagChecked_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void doneBtn_Click(System::Object^  sender, System::EventArgs^  e);
};
}
