#include "Signup.h"

System::Void FBManagmentSytem::Signup::SignupLbl_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	Login^ s = gcnew Login();
	this->Hide();
	s->Show();
	return System::Void();
}
