#include "WritePost.h"

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
