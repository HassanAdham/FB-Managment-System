#include "Comments.h"

FBManagmentSytem::Comments::Comments(void)
{
	InitializeComponent();
}

FBManagmentSytem::Comments::Comments(Facebook ^ f, User ^ u, Posts ^ p)
{
	InitializeComponent();
	F = f;
	U = u;
	P = p;
}

System::Void FBManagmentSytem::Comments::pictureBox4_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	Post^ s = gcnew Post(F, U, P);
	this->Hide();
	s->Show();
	return System::Void();
}

System::Void FBManagmentSytem::Comments::Comments_Load(System::Object ^ sender, System::EventArgs ^ e)
{

	return System::Void();
}
