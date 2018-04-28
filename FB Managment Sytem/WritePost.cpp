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

System::Void FBManagmentSytem::WritePost::postBtn_Click(System::Object ^ sender, System::EventArgs ^ e)
{

	Posts^ p = gcnew Posts();
	List<String^>^Tag = gcnew List<String^>();
	List<String^>^TagSeen = gcnew List<String^>();


	PostInfo^ pi = gcnew PostInfo();
	pi->post = p;
	pi->Tag = Tag;
	pi->TagSeen = TagSeen;

	if (F->AllPosts->Count == 0) {
		for (int i = 0; i < F->f->Count; i++) {
			List<PostInfo^>^Lpi = gcnew List<PostInfo^>();
			PostInfo^ PI = gcnew PostInfo();
			PI = pi;
			if (i + 1 == Int32::Parse(U->id))
				PI->PostStat = "1";
			else {
				String^ req, ^ stat;
				List<Friends^>^x = F->f[i];
				for (int j = 0;j < x->Count;j++) {
					if (U->id == x[j]->usr->id) {
						req = x[j]->fri__req;
						stat = x[j]->fri_stat;
						break;
					}
				}
				if (req == "0" || req == "2")
					PI->PostStat = "0";
				else {
					if (stat == "1"&&PI->post->isPub == "0")
						PI->PostStat = "0";
					else
						PI->PostStat = "2";
				}
			}
			Lpi->Add(PI);
			F->AllPosts->Add(Lpi);
		}
	}
	else {
		for (int i = 0; i < F->f->Count; i++) {
			PostInfo^ PI = gcnew PostInfo();
			PI = pi;
			if (i + 1 == Int32::Parse(U->id))
				PI->PostStat = "1";
			else {
				String^ req, ^ stat;
				List<Friends^>^x = F->f[i];
				for (int j = 0;j < x->Count;j++) {
					if (U->id == x[j]->usr->id) {
						req = x[j]->fri__req;
						stat = x[j]->fri_stat;
						break;
					}
				}
				if (req == "0" || req == "2")
					PI->PostStat = "0";
				else {
					if (stat == "1"&&PI->post->isPub == "0")
						PI->PostStat = "0";
					else
						PI->PostStat = "2";
				}
			}
			F->AllPosts[i]->Add(PI);
		}
	}
	F->serStruct();
	return System::Void();
}
