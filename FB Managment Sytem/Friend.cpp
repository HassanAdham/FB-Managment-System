#include "Friend.h"
#include "FriendsOP.h"

FBManagmentSytem::Friend::Friend(void)
{
	InitializeComponent();
}

FBManagmentSytem::Friend::Friend(Facebook ^ f, User ^ u1, User ^ u2)
{
	InitializeComponent();
	F = f;
	U1 = u1;
	U2 = u2;
}

System::Void FBManagmentSytem::Friend::Friend_Load(System::Object ^ sender, System::EventArgs ^ e)
{
	pictureBox1->Controls->Add(backBtn);
	backBtn->BackColor = Color::Transparent;
	backBtn->Location = Point(57, -1);
	return System::Void();
}

System::Void FBManagmentSytem::Friend::friendBtn_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	if(panel1->Visible == false)
		panel1->Visible = true;
	else
		panel1->Visible = false;
	return System::Void();
}

System::Void FBManagmentSytem::Friend::bunifuFlatButton1_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	if (bunifuFlatButton1->Text == " Ristrected")
	{
		bunifuFlatButton1->Iconimage = yPic->Image;
		bunifuFlatButton1->Text = " Regular Friend";
	}
	else
	{
		bunifuFlatButton1->Iconimage = xPic->Image;
		bunifuFlatButton1->Text = " Ristrected";
	}
	return System::Void();
}

System::Void FBManagmentSytem::Friend::bunifuTileButton3_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	FriendsOP^ s = gcnew FriendsOP(F,U1,U2);
	this->Hide();
	s->Show();
	return System::Void();
}
