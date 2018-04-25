#include "Login.h"
#include "Mainapp.h"
#include "Signup.h"

namespace FBManagmentSytem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	[STAThreadAttribute]
	int Main(array<System::String ^> ^args)
	{
		Application::EnableVisualStyles();
		Application::SetCompatibleTextRenderingDefault(false);
		FBManagmentSytem::Login mainForm;
		Application::Run(%mainForm);

		return 0;
	}

	Login::Login(void)
	{
		InitializeComponent();
		obj = gcnew Facebook();
	}

	System::Void Login::Login_Load(System::Object ^ sender, System::EventArgs ^ e)
	{
		obj = obj->getStruct();
		return System::Void();
	}

	System::Void FBManagmentSytem::Login::loginBtn_Click(System::Object ^ sender, System::EventArgs ^ e)
	{
		User^ u = gcnew User(usernameTxt->Text, pwTxt->Text);
		try
		{
			u->Login();
			this->Hide();
			Mainapp ^main = gcnew Mainapp(obj,u);
			main->Show();
		}
		catch (Exception^ex)
		{
			MessageBox::Show("The e-mail or password you entered doesn't match any account.");
		}
	}

	System::Void FBManagmentSytem::Login::SignupLbl_Click(System::Object ^ sender, System::EventArgs ^ e)
	{
		this->Hide();
		Signup^ s = gcnew Signup();
		s->Show();
	}

	System::Void FBManagmentSytem::Login::usernameTxt_Enter(System::Object ^ sender, System::EventArgs ^ e)
	{
		if (usernameTxt->Text == "  Email or phone number")
		{
			usernameTxt->Text = "";
			usernameTxt->ForeColor = Color::Black;
		}
		return System::Void();
	}

	System::Void FBManagmentSytem::Login::usernameTxt_Leave(System::Object ^ sender, System::EventArgs ^ e)
	{
		if (usernameTxt->Text == "")
		{
			usernameTxt->Text = "  Email or phone number";
			usernameTxt->ForeColor = Color::DarkGray;
		}
		return System::Void();
	}

	System::Void FBManagmentSytem::Login::pwTxt_Enter(System::Object ^ sender, System::EventArgs ^ e)
	{
		if (pwTxt->Text == "  Password")
		{
			pwTxt->Text = "";
			pwTxt->ForeColor = Color::Black;
			pwTxt->isPassword = true;
		}
		return System::Void();
	}

	System::Void FBManagmentSytem::Login::pwTxt_Leave(System::Object ^ sender, System::EventArgs ^ e)
	{
		if (pwTxt->Text == "")
		{
			pwTxt->Text = "  Password";
			pwTxt->ForeColor = Color::DarkGray;
			pwTxt->isPassword = false;
		}
		return System::Void();
	}
}