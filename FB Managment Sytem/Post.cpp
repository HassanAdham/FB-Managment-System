#include "Post.h"

FBManagmentSytem::Post::Post(void)
{
	InitializeComponent();
	reactsPic->Controls->Add(likePic);
	reactsPic->Controls->Add(lovePic);
	reactsPic->Controls->Add(hahaPic);
	reactsPic->Controls->Add(sadPic);
	reactsPic->Controls->Add(wowPic);
	reactsPic->Controls->Add(angryPic);
	likePic->Location = Point(3, 3);
	lovePic->Location = Point(49, 3);
	hahaPic->Location = Point(95, 3);
	sadPic->Location = Point(141, 3);
	angryPic->Location = Point(233, 3);
	wowPic->Location = Point(187, 3);
}

System::Void FBManagmentSytem::Post::pictureBox7_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	if (reactsPic->Visible == false)
	{
		reactsPic->Visible = true;
	}
	else
	{
		reactsPic->Visible = false;
	}
	return System::Void();
}
