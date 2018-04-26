#include "Profile.h"

FBManagmentSytem::Profile::Profile(void)
{
	InitializeComponent();
}

FBManagmentSytem::Profile::Profile(Facebook ^ f, User ^ u)
{
	InitializeComponent();
	F = f;
	U = u;
}

System::Void FBManagmentSytem::Profile::Profile_Load(System::Object ^ sender, System::EventArgs ^ e)
{
	userLbl->Text = U->username();
	return System::Void();
}
