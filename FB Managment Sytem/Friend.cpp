#include "Friend.h"

FBManagmentSytem::Friend::Friend(void)
{
	InitializeComponent();
	//
	//TODO: Add the constructor code here
	//
	throw gcnew System::NotImplementedException();
}

FBManagmentSytem::Friend::Friend(Facebook ^ f, User ^ u1, User ^ u2)
{
	F = f;
	U1 = u1;
	U2 = u2;
	InitializeComponent();
	//
	//TODO: Add the constructor code here
	//
	throw gcnew System::NotImplementedException();
}

System::Void FBManagmentSytem::Friend::Friend_Load(System::Object ^ sender, System::EventArgs ^ e)
{
	pictureBox1->Controls->Add(backBtn);
	backBtn->BackColor = Color::Transparent;
	backBtn->Location = Point(57, -1);
	return System::Void();
}
