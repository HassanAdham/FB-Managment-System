#include "Profile.h"
#include "EditPro.h"
#include "FriendsOP.h"
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
	MemoryStream^ ms = gcnew MemoryStream(U->profilephoto);
	pictureBox8->Image = Image::FromStream(ms);
	MemoryStream^ ns = gcnew MemoryStream(U->coverphoto);
	pictureBox1->Image = Image::FromStream(ns);
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

System::Void FBManagmentSytem::Profile::bunifuTileButton3_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	FriendsOP^ s = gcnew FriendsOP(F,U, U);
	this->Hide();
	s->Show();
	return System::Void();
}
