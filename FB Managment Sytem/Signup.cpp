#include "Signup.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace MySql::Data::MySqlClient;


System::Void FBManagmentSytem::Signup::SignupLbl_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	Login^ s = gcnew Login();
	this->Hide();
	s->Show();
	return System::Void();
}


System::Void FBManagmentSytem::Signup::signupBtn_Click(System::Object^  sender, System::EventArgs^  e) {

	if (fnTxt->Text == "  First name" || lnTxt->Text == "  Last name" || mailTxt->Text == "  Mobile number or email address" || remailTxt->Text == "  Re-enter mobile number or email address" || pwTxt->Text == "  New Password")
	{
		MessageBox::Show("Please complete all fields.", "Sign up", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else if (mailTxt->Text != remailTxt->Text)
	{
		MessageBox::Show("Please enter the same email or phone.", "Sign up", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else
	{
		User^ u = gcnew User(mailTxt->Text, pwTxt->Text, fnTxt->Text, lnTxt->Text, dComboBox->Text, yComboBox->Text);
		bool b = u->SignUp(maleRadio, mComboBox);
		if (b) {
			MessageBox::Show("Welcome to Facebook.", "Sign up");
			Mainapp ^main = gcnew Mainapp(u);
			this->Hide();
			main->Show();
		}
	}
}

