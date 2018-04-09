#pragma once

namespace FBManagmentSytem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Signup
	/// </summary>
	public ref class Signup : public System::Windows::Forms::Form
	{
	public:
		Signup(void)
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
		~Signup()
		{
			if (components)
			{
				delete components;
			}
		}
	private: Bunifu::Framework::UI::BunifuMetroTextbox^  lnTxt;
	protected: 

	protected: 

	private: Bunifu::Framework::UI::BunifuMetroTextbox^  mailTxt;
	private: Bunifu::Framework::UI::BunifuMetroTextbox^  remailTxt;





	private: Bunifu::Framework::UI::BunifuMetroTextbox^  pwTxt;

	private: System::Windows::Forms::Label^  bdLbl;
	private: Bunifu::Framework::UI::BunifuMetroTextbox^  fnTxt;


	private: System::Windows::Forms::ComboBox^  dComboBox;

	private: System::Windows::Forms::ComboBox^  mComboBox;
	private: System::Windows::Forms::ComboBox^  yComboBox;



	private: System::Windows::Forms::RadioButton^  maleRadio;
	private: System::Windows::Forms::RadioButton^  fmaleRadio;


	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  signupBtn;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Signup::typeid));
			this->lnTxt = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->mailTxt = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->remailTxt = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->pwTxt = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->bdLbl = (gcnew System::Windows::Forms::Label());
			this->fnTxt = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->dComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->mComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->yComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->maleRadio = (gcnew System::Windows::Forms::RadioButton());
			this->fmaleRadio = (gcnew System::Windows::Forms::RadioButton());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->signupBtn = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// lnTxt
			// 
			this->lnTxt->BackColor = System::Drawing::Color::White;
			this->lnTxt->BorderColorFocused = System::Drawing::Color::Transparent;
			this->lnTxt->BorderColorIdle = System::Drawing::Color::Transparent;
			this->lnTxt->BorderColorMouseHover = System::Drawing::Color::Transparent;
			this->lnTxt->BorderThickness = 1;
			this->lnTxt->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->lnTxt->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lnTxt->ForeColor = System::Drawing::Color::DarkGray;
			this->lnTxt->isPassword = false;
			this->lnTxt->Location = System::Drawing::Point(188, 188);
			this->lnTxt->Margin = System::Windows::Forms::Padding(6, 5, 6, 5);
			this->lnTxt->Name = L"lnTxt";
			this->lnTxt->Size = System::Drawing::Size(157, 35);
			this->lnTxt->TabIndex = 6;
			this->lnTxt->Text = L"  Last name";
			this->lnTxt->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->lnTxt->Enter += gcnew System::EventHandler(this, &Signup::lnTxt_Enter);
			this->lnTxt->Leave += gcnew System::EventHandler(this, &Signup::lnTxt_Leave);
			// 
			// mailTxt
			// 
			this->mailTxt->BackColor = System::Drawing::Color::White;
			this->mailTxt->BorderColorFocused = System::Drawing::Color::Transparent;
			this->mailTxt->BorderColorIdle = System::Drawing::Color::Transparent;
			this->mailTxt->BorderColorMouseHover = System::Drawing::Color::Transparent;
			this->mailTxt->BorderThickness = 1;
			this->mailTxt->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->mailTxt->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->mailTxt->ForeColor = System::Drawing::Color::DarkGray;
			this->mailTxt->isPassword = false;
			this->mailTxt->Location = System::Drawing::Point(15, 233);
			this->mailTxt->Margin = System::Windows::Forms::Padding(6, 5, 6, 5);
			this->mailTxt->Name = L"mailTxt";
			this->mailTxt->Size = System::Drawing::Size(330, 35);
			this->mailTxt->TabIndex = 6;
			this->mailTxt->Text = L"  Mobile number or email address";
			this->mailTxt->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->mailTxt->Enter += gcnew System::EventHandler(this, &Signup::mailTxt_Enter);
			this->mailTxt->Leave += gcnew System::EventHandler(this, &Signup::mailTxt_Leave);
			// 
			// remailTxt
			// 
			this->remailTxt->BackColor = System::Drawing::Color::White;
			this->remailTxt->BorderColorFocused = System::Drawing::Color::Transparent;
			this->remailTxt->BorderColorIdle = System::Drawing::Color::Transparent;
			this->remailTxt->BorderColorMouseHover = System::Drawing::Color::Transparent;
			this->remailTxt->BorderThickness = 1;
			this->remailTxt->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->remailTxt->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->remailTxt->ForeColor = System::Drawing::Color::DarkGray;
			this->remailTxt->isPassword = false;
			this->remailTxt->Location = System::Drawing::Point(15, 278);
			this->remailTxt->Margin = System::Windows::Forms::Padding(6, 5, 6, 5);
			this->remailTxt->Name = L"remailTxt";
			this->remailTxt->Size = System::Drawing::Size(330, 35);
			this->remailTxt->TabIndex = 6;
			this->remailTxt->Text = L"  Re-enter mobile number or email address";
			this->remailTxt->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->remailTxt->Enter += gcnew System::EventHandler(this, &Signup::remailTxt_Enter);
			this->remailTxt->Leave += gcnew System::EventHandler(this, &Signup::remailTxt_Leave);
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
			this->pwTxt->Location = System::Drawing::Point(15, 323);
			this->pwTxt->Margin = System::Windows::Forms::Padding(6, 5, 6, 5);
			this->pwTxt->Name = L"pwTxt";
			this->pwTxt->Size = System::Drawing::Size(330, 35);
			this->pwTxt->TabIndex = 6;
			this->pwTxt->Text = L"  New Password";
			this->pwTxt->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->pwTxt->Enter += gcnew System::EventHandler(this, &Signup::pwTxt_Enter);
			this->pwTxt->Leave += gcnew System::EventHandler(this, &Signup::pwTxt_Leave);
			// 
			// bdLbl
			// 
			this->bdLbl->AutoSize = true;
			this->bdLbl->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->bdLbl->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->bdLbl->ForeColor = System::Drawing::Color::White;
			this->bdLbl->Location = System::Drawing::Point(129, 371);
			this->bdLbl->Name = L"bdLbl";
			this->bdLbl->Size = System::Drawing::Size(95, 25);
			this->bdLbl->TabIndex = 7;
			this->bdLbl->Text = L"Birthday";
			// 
			// fnTxt
			// 
			this->fnTxt->BackColor = System::Drawing::Color::White;
			this->fnTxt->BorderColorFocused = System::Drawing::Color::Transparent;
			this->fnTxt->BorderColorIdle = System::Drawing::Color::Transparent;
			this->fnTxt->BorderColorMouseHover = System::Drawing::Color::Transparent;
			this->fnTxt->BorderThickness = 1;
			this->fnTxt->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->fnTxt->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->fnTxt->ForeColor = System::Drawing::Color::DarkGray;
			this->fnTxt->isPassword = false;
			this->fnTxt->Location = System::Drawing::Point(15, 188);
			this->fnTxt->Margin = System::Windows::Forms::Padding(6, 5, 6, 5);
			this->fnTxt->Name = L"fnTxt";
			this->fnTxt->Size = System::Drawing::Size(157, 35);
			this->fnTxt->TabIndex = 6;
			this->fnTxt->Text = L"  First name";
			this->fnTxt->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->fnTxt->Enter += gcnew System::EventHandler(this, &Signup::fnTxt_Enter);
			this->fnTxt->Leave += gcnew System::EventHandler(this, &Signup::fnTxt_Leave);
			// 
			// dComboBox
			// 
			this->dComboBox->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->dComboBox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->dComboBox->FormattingEnabled = true;
			this->dComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(31) {L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8", 
				L"9", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25", L"26", 
				L"27", L"28", L"29", L"30", L"31"});
			this->dComboBox->Location = System::Drawing::Point(77, 409);
			this->dComboBox->Name = L"dComboBox";
			this->dComboBox->Size = System::Drawing::Size(53, 27);
			this->dComboBox->TabIndex = 8;
			this->dComboBox->Text = L"Day";
			// 
			// mComboBox
			// 
			this->mComboBox->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->mComboBox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->mComboBox->FormattingEnabled = true;
			this->mComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(12) {L"Jan", L"Feb", L"Mar", L"Apr", L"May", L"Jun", 
				L"Jul", L"Aug", L"Sep", L"Oct", L"Nov", L"Dec"});
			this->mComboBox->Location = System::Drawing::Point(141, 409);
			this->mComboBox->Name = L"mComboBox";
			this->mComboBox->Size = System::Drawing::Size(70, 27);
			this->mComboBox->TabIndex = 8;
			this->mComboBox->Text = L"Month";
			// 
			// yComboBox
			// 
			this->yComboBox->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->yComboBox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->yComboBox->FormattingEnabled = true;
			this->yComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(114) {L"2018", L"2017", L"2016", L"2015", L"2014", L"2013", 
				L"2012", L"2011", L"2010", L"2009", L"2008", L"2007", L"2006", L"2005", L"2004", L"2003", L"2002", L"2001", L"2000", L"1999", 
				L"1998", L"1997", L"1996", L"1995", L"1994", L"1993", L"1992", L"1991", L"1990", L"1989", L"1988", L"1987", L"1986", L"1985", 
				L"1984", L"1983", L"1982", L"1981", L"1980", L"1979", L"1978", L"1977", L"1976", L"1975", L"1974", L"1973", L"1972", L"1971", 
				L"1970", L"1969", L"1968", L"1967", L"1966", L"1965", L"1964", L"1963", L"1962", L"1961", L"1960", L"1959", L"1958", L"1957", 
				L"1956", L"1955", L"1954", L"1953", L"1952", L"1951", L"1950", L"1949", L"1948", L"1947", L"1946", L"1945", L"1944", L"1943", 
				L"1942", L"1941", L"1940", L"1939", L"1938", L"1937", L"1936", L"1935", L"1934", L"1933", L"1932", L"1931", L"1930", L"1929", 
				L"1928", L"1927", L"1926", L"1925", L"1924", L"1923", L"1922", L"1921", L"1920", L"1919", L"1918", L"1917", L"1916", L"1915", 
				L"1914", L"1913", L"1912", L"1911", L"1910", L"1909", L"1908", L"1907", L"1906", L"1905"});
			this->yComboBox->Location = System::Drawing::Point(222, 409);
			this->yComboBox->Name = L"yComboBox";
			this->yComboBox->Size = System::Drawing::Size(61, 27);
			this->yComboBox->TabIndex = 8;
			this->yComboBox->Text = L"Year";
			// 
			// maleRadio
			// 
			this->maleRadio->AutoSize = true;
			this->maleRadio->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->maleRadio->ForeColor = System::Drawing::Color::White;
			this->maleRadio->Location = System::Drawing::Point(208, 448);
			this->maleRadio->Name = L"maleRadio";
			this->maleRadio->Size = System::Drawing::Size(75, 27);
			this->maleRadio->TabIndex = 9;
			this->maleRadio->TabStop = true;
			this->maleRadio->Text = L"Male";
			this->maleRadio->UseVisualStyleBackColor = true;
			this->maleRadio->CheckedChanged += gcnew System::EventHandler(this, &Signup::radioButton1_CheckedChanged);
			// 
			// fmaleRadio
			// 
			this->fmaleRadio->AutoSize = true;
			this->fmaleRadio->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->fmaleRadio->ForeColor = System::Drawing::Color::White;
			this->fmaleRadio->Location = System::Drawing::Point(75, 448);
			this->fmaleRadio->Name = L"fmaleRadio";
			this->fmaleRadio->Size = System::Drawing::Size(97, 27);
			this->fmaleRadio->TabIndex = 9;
			this->fmaleRadio->TabStop = true;
			this->fmaleRadio->Text = L"Female";
			this->fmaleRadio->UseVisualStyleBackColor = true;
			this->fmaleRadio->CheckedChanged += gcnew System::EventHandler(this, &Signup::radioButton1_CheckedChanged);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Location = System::Drawing::Point(57, 43);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(242, 46);
			this->pictureBox1->TabIndex = 10;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(87, 120);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(185, 23);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Create an account";
			this->label1->Click += gcnew System::EventHandler(this, &Signup::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(78, 143);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(214, 21);
			this->label2->TabIndex = 7;
			this->label2->Text = L"It\'s free and always will be.";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(42, 497);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(282, 48);
			this->label3->TabIndex = 7;
			this->label3->Text = L"By clicking Create Account, you agree to our Terms \r\nand confirm that you have re" 
				L"ad our \r\nData Policy, including our Cookie Use Policy. ";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// signupBtn
			// 
			this->signupBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(104)), 
				static_cast<System::Int32>(static_cast<System::Byte>(164)));
			this->signupBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->signupBtn->FlatAppearance->BorderSize = 0;
			this->signupBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->signupBtn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->signupBtn->ForeColor = System::Drawing::Color::White;
			this->signupBtn->Location = System::Drawing::Point(12, 562);
			this->signupBtn->Name = L"signupBtn";
			this->signupBtn->Size = System::Drawing::Size(330, 50);
			this->signupBtn->TabIndex = 11;
			this->signupBtn->Text = L"Sign Up";
			this->signupBtn->UseVisualStyleBackColor = false;
			// 
			// Signup
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(89)), 
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->ClientSize = System::Drawing::Size(360, 640);
			this->Controls->Add(this->signupBtn);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->fmaleRadio);
			this->Controls->Add(this->maleRadio);
			this->Controls->Add(this->yComboBox);
			this->Controls->Add(this->mComboBox);
			this->Controls->Add(this->dComboBox);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->bdLbl);
			this->Controls->Add(this->pwTxt);
			this->Controls->Add(this->remailTxt);
			this->Controls->Add(this->mailTxt);
			this->Controls->Add(this->fnTxt);
			this->Controls->Add(this->lnTxt);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Signup";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Signup";
			this->Load += gcnew System::EventHandler(this, &Signup::Signup_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void Signup_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void fnTxt_Enter(System::Object^  sender, System::EventArgs^  e) {
	if (fnTxt->Text == "  First name") {
		fnTxt->Text = "";
		fnTxt->ForeColor = Color::Black;
	}
}
private: System::Void fnTxt_Leave(System::Object^  sender, System::EventArgs^  e) {
	if (fnTxt->Text == "") {
		fnTxt->Text = "  First name";
		fnTxt->ForeColor = Color::DarkGray;
	}
}
private: System::Void lnTxt_Enter(System::Object^  sender, System::EventArgs^  e) {
	if (lnTxt->Text == "  Last name") {
		lnTxt->Text = "";
		lnTxt->ForeColor = Color::Black;
	}
}
private: System::Void lnTxt_Leave(System::Object^  sender, System::EventArgs^  e) {
	if (lnTxt->Text == "") {
		lnTxt->Text = "  Last name";
		lnTxt->ForeColor = Color::DarkGray;
	}
}
private: System::Void mailTxt_Enter(System::Object^  sender, System::EventArgs^  e) {
	if (mailTxt->Text == "  Mobile number or email address") {
		mailTxt->Text = "";
		mailTxt->ForeColor = Color::Black;
	}
}
private: System::Void mailTxt_Leave(System::Object^  sender, System::EventArgs^  e) {
	if (mailTxt->Text == "") {
		mailTxt->Text = "  Mobile number or email address";
		mailTxt->ForeColor = Color::DarkGray;
	}
}
private: System::Void remailTxt_Enter(System::Object^  sender, System::EventArgs^  e) {
	if (remailTxt->Text == "  Re-enter mobile number or email address") {
		remailTxt->Text = "";
		remailTxt->ForeColor = Color::Black;
	}
}
private: System::Void remailTxt_Leave(System::Object^  sender, System::EventArgs^  e) {
	if (remailTxt->Text == "") {
		remailTxt->Text = "  Re-enter mobile number or email address";
		remailTxt->ForeColor = Color::DarkGray;
	}
}
private: System::Void pwTxt_Enter(System::Object^  sender, System::EventArgs^  e) {
	if (pwTxt->Text == "  New Password") {
		pwTxt->Text = "";
		pwTxt->ForeColor = Color::Black;
		pwTxt->isPassword = true;
	}
}
private: System::Void pwTxt_Leave(System::Object^  sender, System::EventArgs^  e) {
	if (pwTxt->Text == "") {
		pwTxt->Text = "  New Password";
		pwTxt->ForeColor = Color::DarkGray;
		pwTxt->isPassword = false;
	}
}
};
}
