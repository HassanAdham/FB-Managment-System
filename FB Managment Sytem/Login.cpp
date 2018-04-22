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
	try
	{
		u->Login();
		this->Hide();
		Mainapp ^main = gcnew Mainapp(u);
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
