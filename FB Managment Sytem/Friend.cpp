#include "Friend.h"

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
