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
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::RadioButton^  radioButton4;


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
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->bunifuImageButton1))->BeginInit();
			this->SuspendLayout();
			// 
			// splitter1
			// 
			this->splitter1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(89)), 
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->splitter1->Dock = System::Windows::Forms::DockStyle::Top;
			this->splitter1->Location = System::Drawing::Point(0, 0);
			this->splitter1->Name = L"splitter1";
			this->splitter1->Size = System::Drawing::Size(360, 60);
			this->splitter1->TabIndex = 0;
			this->splitter1->TabStop = false;
			this->splitter1->SplitterMoved += gcnew System::Windows::Forms::SplitterEventHandler(this, &Mainapp::splitter1_SplitterMoved);
			// 
			// bunifuTextbox1
			// 
			this->bunifuTextbox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(56)), 
				static_cast<System::Int32>(static_cast<System::Byte>(93)));
			this->bunifuTextbox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"bunifuTextbox1.BackgroundImage")));
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
			// radioButton1
			// 
			this->radioButton1->Appearance = System::Windows::Forms::Appearance::Button;
			this->radioButton1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"radioButton1.BackgroundImage")));
			this->radioButton1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->radioButton1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->radioButton1->FlatAppearance->BorderSize = 0;
			this->radioButton1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->radioButton1->Location = System::Drawing::Point(0, 60);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(90, 40);
			this->radioButton1->TabIndex = 3;
			this->radioButton1->TabStop = true;
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->Appearance = System::Windows::Forms::Appearance::Button;
			this->radioButton2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"radioButton2.BackgroundImage")));
			this->radioButton2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->radioButton2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->radioButton2->FlatAppearance->BorderSize = 0;
			this->radioButton2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->radioButton2->Location = System::Drawing::Point(90, 60);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(90, 40);
			this->radioButton2->TabIndex = 3;
			this->radioButton2->TabStop = true;
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->Appearance = System::Windows::Forms::Appearance::Button;
			this->radioButton3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"radioButton3.BackgroundImage")));
			this->radioButton3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->radioButton3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->radioButton3->FlatAppearance->BorderSize = 0;
			this->radioButton3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->radioButton3->Location = System::Drawing::Point(180, 60);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(90, 40);
			this->radioButton3->TabIndex = 3;
			this->radioButton3->TabStop = true;
			this->radioButton3->UseVisualStyleBackColor = true;
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
			// Mainapp
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(360, 640);
			this->Controls->Add(this->radioButton4);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->bunifuImageButton1);
			this->Controls->Add(this->bunifuTextbox1);
			this->Controls->Add(this->splitter1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Mainapp";
			this->Text = L"Mainapp";
			this->Load += gcnew System::EventHandler(this, &Mainapp::Mainapp_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->bunifuImageButton1))->EndInit();
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
