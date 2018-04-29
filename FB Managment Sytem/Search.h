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
	/// Summary for Search
	/// </summary>
	public ref class Search : public System::Windows::Forms::Form
	{
		Facebook^ F;
	private: System::Windows::Forms::Panel^  panel3;










			 User^ U;
	public:
		Search(void);
		Search(Facebook^ f, User^ u);

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Search()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Splitter^  splitter1;
	private: Bunifu::Framework::UI::BunifuImageButton^  backBtn;
	private: System::Windows::Forms::TextBox^  searchTxt;



	private: Bunifu::Framework::UI::BunifuMaterialTextbox^  bunifuMaterialTextbox1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Search::typeid));
			this->splitter1 = (gcnew System::Windows::Forms::Splitter());
			this->backBtn = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->bunifuMaterialTextbox1 = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
			this->searchTxt = (gcnew System::Windows::Forms::TextBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->backBtn))->BeginInit();
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
			this->splitter1->Size = System::Drawing::Size(360, 65);
			this->splitter1->TabIndex = 0;
			this->splitter1->TabStop = false;
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
			this->backBtn->TabIndex = 3;
			this->backBtn->TabStop = false;
			this->backBtn->Zoom = 10;
			// 
			// bunifuMaterialTextbox1
			// 
			this->bunifuMaterialTextbox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(89)), static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->bunifuMaterialTextbox1->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->bunifuMaterialTextbox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuMaterialTextbox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(157)), static_cast<System::Int32>(static_cast<System::Byte>(195)));
			this->bunifuMaterialTextbox1->HintForeColor = System::Drawing::Color::Empty;
			this->bunifuMaterialTextbox1->HintText = L"";
			this->bunifuMaterialTextbox1->isPassword = false;
			this->bunifuMaterialTextbox1->LineFocusedColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(157)), static_cast<System::Int32>(static_cast<System::Byte>(195)));
			this->bunifuMaterialTextbox1->LineIdleColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(157)), static_cast<System::Int32>(static_cast<System::Byte>(195)));
			this->bunifuMaterialTextbox1->LineMouseHoverColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(157)), static_cast<System::Int32>(static_cast<System::Byte>(195)));
			this->bunifuMaterialTextbox1->LineThickness = 3;
			this->bunifuMaterialTextbox1->Location = System::Drawing::Point(64, 13);
			this->bunifuMaterialTextbox1->Margin = System::Windows::Forms::Padding(6);
			this->bunifuMaterialTextbox1->Name = L"bunifuMaterialTextbox1";
			this->bunifuMaterialTextbox1->Size = System::Drawing::Size(281, 35);
			this->bunifuMaterialTextbox1->TabIndex = 15;
			this->bunifuMaterialTextbox1->Text = L"Search";
			this->bunifuMaterialTextbox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// searchTxt
			// 
			this->searchTxt->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->searchTxt->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::CustomSource;
			this->searchTxt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(89)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->searchTxt->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->searchTxt->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->searchTxt->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(139)), static_cast<System::Int32>(static_cast<System::Byte>(157)),
				static_cast<System::Int32>(static_cast<System::Byte>(195)));
			this->searchTxt->Location = System::Drawing::Point(69, 19);
			this->searchTxt->Name = L"searchTxt";
			this->searchTxt->Size = System::Drawing::Size(267, 22);
			this->searchTxt->TabIndex = 16;
			this->searchTxt->Text = L"Search";
			this->searchTxt->TextChanged += gcnew System::EventHandler(this, &Search::searchTxt_TextChanged);
			this->searchTxt->Enter += gcnew System::EventHandler(this, &Search::searchTxt_Enter);
			this->searchTxt->Leave += gcnew System::EventHandler(this, &Search::searchTxt_Leave);
			// 
			// panel3
			// 
			this->panel3->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel3->Location = System::Drawing::Point(0, 65);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(360, 500);
			this->panel3->TabIndex = 29;
			// 
			// Search
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(360, 640);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->searchTxt);
			this->Controls->Add(this->bunifuMaterialTextbox1);
			this->Controls->Add(this->backBtn);
			this->Controls->Add(this->splitter1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Search";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Facebook";
			this->Load += gcnew System::EventHandler(this, &Search::Search_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->backBtn))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Search_Load(System::Object^  sender, System::EventArgs^  e);

	private: System::Void searchTxt_Enter(System::Object^  sender, System::EventArgs^  e);

	private: System::Void searchTxt_Leave(System::Object^  sender, System::EventArgs^  e);

	private: System::Void lblClk_Click(System::Object ^ sender, System::EventArgs ^ e);

	public: System::Void searchTxt_TextChanged(System::Object^  sender, System::EventArgs^  e);

};
}
