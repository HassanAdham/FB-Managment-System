#include "Login.h"

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

System::Void FBManagmentSytem::Login::loginBtn_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	User^ u = gcnew User(usernameTxt->Text, pwTxt->Text);

	String^ constring = L"datasource=localhost; port=3306; username=root; password=admin";
	MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDatabase = gcnew MySqlCommand("facebook.Login_Read", conDatabase);
	cmdDatabase->CommandType = CommandType::StoredProcedure;
	cmdDatabase->Parameters->Add(gcnew MySqlParameter("Email", usernameTxt->Text));
	cmdDatabase->Parameters->Add(gcnew MySqlParameter("PW", pwTxt->Text));
	MySqlDataReader^ myreader;

	try
	{
		conDatabase->Open();
		myreader = cmdDatabase->ExecuteReader();

		if (myreader->Read())
		{
			this->Hide();
			Mainapp ^main = gcnew Mainapp();
			main->Show();
		}
		else
		{
			MessageBox::Show("The e-mail or password you entered was incorrect.", "Log in", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}

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
