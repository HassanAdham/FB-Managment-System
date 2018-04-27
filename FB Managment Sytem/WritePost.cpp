#include "WritePost.h"
#include "TagForm.h"

FBManagmentSytem::WritePost::WritePost(void)
{
	InitializeComponent();
}

FBManagmentSytem::WritePost::WritePost(Facebook ^ f, User ^ u)
{
	InitializeComponent();
	F = f;
	U = u;
}

System::Void FBManagmentSytem::WritePost::postTxt_TextChanged(System::Object ^ sender, System::EventArgs ^ e)
{
	if (postTxt->Text->Length == 0)
	{
		pictureBox1->Visible = true;
		postBtn->Enabled = false;
	}
	else
	{
		pictureBox1->Visible = false;
		postBtn->Enabled = true;
	}
	return System::Void();
}

System::Void FBManagmentSytem::WritePost::unfriBtn_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	TagForm^ s = gcnew TagForm(F, U);
	this->Hide();
	s->Show();
	return System::Void();
}
