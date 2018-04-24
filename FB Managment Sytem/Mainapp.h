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
	/// Summary for Mainapp
	/// </summary>
	public ref class Mainapp : public System::Windows::Forms::Form
	{
	public:
		User ^ U;
		Facebook ^ F;
		Mainapp(void);
		Mainapp(User^ u, Facebook^ fb);
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Mainapp();

	private: System::Windows::Forms::Splitter^  splitter1;
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
	private: Bunifu::Framework::UI::BunifuMaterialTextbox^  searchTxt;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Panel^  profileClkPnl;
	private: System::Windows::Forms::PictureBox^  userPic;
	private: System::Windows::Forms::Label^  userLbl;
	private: System::Windows::Forms::Label^  label1;
	private: Bunifu::Framework::UI::BunifuFlatButton^  logoutBtn;
	private: Bunifu::Framework::UI::BunifuFlatButton^  payBtn;
	private: Bunifu::Framework::UI::BunifuFlatButton^  accBtn;
	private: Bunifu::Framework::UI::BunifuFlatButton^  reportBtn;
	private: Bunifu::Framework::UI::BunifuFlatButton^  termsBtn;
	private: System::Windows::Forms::PictureBox^  pictureBox3;

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
		void InitializeComponent(void);
#pragma endregion
		private: System::Void Mainapp_Load(System::Object^  sender, System::EventArgs^  e)
		{
			
		}

		private: System::Void splitter1_SplitterMoved(System::Object^  sender, System::Windows::Forms::SplitterEventArgs^  e) 
		{

		}

		private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) 
		{

		}

		private: System::Void pictureBox7_Click(System::Object^  sender, System::EventArgs^  e) 
		{

		}

		private: System::Void feedsBtn_CheckedChanged(System::Object^  sender, System::EventArgs^  e);

		private: System::Void pplBtn_CheckedChanged(System::Object^  sender, System::EventArgs^  e);

		private: System::Void noti_CheckedChanged(System::Object^  sender, System::EventArgs^  e);

		private: System::Void setBtn_CheckedChanged(System::Object^  sender, System::EventArgs^  e);

		private: System::Void searchTxt_OnTextChange(System::Object^  sender, System::EventArgs^  e) 
		{

		}

		private: System::Void searchTxt_Enter(System::Object^  sender, System::EventArgs^  e);

		private: System::Void searchTxt_Leave(System::Object^  sender, System::EventArgs^  e);

	};
}
