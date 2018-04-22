#include "Signup.h"

System::Void FBManagmentSytem::Signup::button1_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	Login^ l = gcnew Login();
	l->Show();
}
