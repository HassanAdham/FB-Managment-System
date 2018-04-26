#include "Profile.h"
#include "EditPro.h"

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
	pictureBox1->Controls->Add(backBtn);
	backBtn->BackColor = Color::Transparent;
	backBtn->Location = Point(57, -1);
	return System::Void();
}

System::Void FBManagmentSytem::Profile::editBtn_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	EditPro^ s = gcnew EditPro(F, U);
	this->Hide();
	s->Show();
	return System::Void();
}
