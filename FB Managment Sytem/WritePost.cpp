#include "WritePost.h"

FBManagmentSytem::WritePost::WritePost(void)
{
	InitializeComponent();
}

FBManagmentSytem::WritePost::WritePost(Facebook ^ f, User ^ u)
{
	InitializeComponent();
	F = f;
	U = u;
	postText = "";
	postImage = nullptr;
	privacySelect = "";
	tagged_userss = gcnew List<String^>();
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
	if (postIMG->Image != nullptr)
	{
		MemoryStream^ ms = gcnew MemoryStream();
		postIMG->Image->Save(ms, postIMG->Image->RawFormat);
		postImage = ms->ToArray();
	}
	TagForm^ s = gcnew TagForm(F, U, postTxt->Text, postImage, privacyCmbo->Text, tagged_userss);
	this->Hide();
	s->Show();
	return System::Void();
}

System::Void FBManagmentSytem::WritePost::postBtn_Click(System::Object ^ sender, System::EventArgs ^ e)
{

	Posts^ p = gcnew Posts();

	List<String^>^TagSeen = gcnew List<String^>();
	for (int i = 0; i < tagged_userss->Count; i++)
	{
		TagSeen[i] = "0";
	}

	p->text = postTxt->Text;

	if (postIMG->Image != nullptr)
	{
		MemoryStream^ ms = gcnew MemoryStream();
		postIMG->Image->Save(ms, postIMG->Image->RawFormat);
		p->img = ms->ToArray();
	}

	if (privacyCmbo->Text == "Public")
		p->isPub = "1";
	else
		p->isPub = "0";

	p->UserID = U->id;
	p->userr = U;
	String^ x = DateTime::Now.ToString();
	array<String^>^ arr = x->Split(':','/',' ');
	String^ day = arr[1];
	String^ month;
	if (arr[0] == "1")
		month = "Jan";
	else if (arr[0] == "2")
		month = "Feb";
	else if (arr[0] == "3")
		month = "Mar";
	else if (arr[0] == "4")
		month = "Apr";
	else if (arr[0] == "5")
		month = "May";
	else if (arr[0] == "6")
		month = "Jun";
	else if (arr[0] == "7")
		month = "Jul";
	else if (arr[0] == "8")
		month = "Aug";
	else if (arr[0] == "9")
		month = "Sep";
	else if (arr[0] == "10")
		month = "Oct";
	else if (arr[0] == "11")
		month = "Nov";
	else if (arr[0] == "12")
		month = "Dec";
	String^ h = arr[3];
	String^ m = arr[4];
	String^ M = arr[6];
	p->date = day + " " + month + " at " + h + ":" + m + " " + M;

	PostInfo^ pi = gcnew PostInfo();
	pi->post = p;
	/*p->Insert_post(p);*/
	pi->Tag = tagged_userss;
	pi->TagSeen = TagSeen;

	if (F->AllPosts->Count == 0) {
		for (int i = 0; i < F->f->Count; i++) {
			List<PostInfo^>^Lpi = gcnew List<PostInfo^>();
			if (i + 1 == Int32::Parse(U->id))
				pi->PostStat = "1";
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
					pi->PostStat = "0";
				else {
					if (stat == "1"&&pi->post->isPub == "0")
						pi->PostStat = "0";
					else
						pi->PostStat = "2";
				}
			}
			Lpi->Add(pi);
			F->AllPosts->Add(Lpi);
		}
	}
	else {
		for (int i = 0; i < F->f->Count; i++) {

			if (i + 1 == Int32::Parse(U->id))
				pi->PostStat = "1";
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
					pi->PostStat = "0";
				else {
					if (stat == "1"&&pi->post->isPub == "0")
						pi->PostStat = "0";
					else
						pi->PostStat = "2";
				}
			}
			F->AllPosts[i]->Add(pi);
		}
	}
	F->serStruct();

	Mainapp ^main = gcnew Mainapp(F, U);
	this->Hide();
	main->Show();

	return System::Void();
}

System::Void FBManagmentSytem::WritePost::bunifuFlatButton1_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	OpenFileDialog^ dlg = gcnew OpenFileDialog();
	dlg->Filter = "Choose Image(.jpg; *.png; *.gif)|.jpg; *.png; *.gif";
	if (dlg->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		postIMG->Image = Image::FromFile(dlg->FileName);
		postIMG->BackgroundImageLayout = ImageLayout::Stretch;
	}
	return System::Void();
}

System::Void FBManagmentSytem::WritePost::WritePost_Load(System::Object ^ sender, System::EventArgs ^ e)
{
	userLbl->Text = U->username();
	userLbl->AutoSize = true;
	MemoryStream^ ms = gcnew MemoryStream(U->profilephoto);
	pictureBox3->Image = Image::FromStream(ms);
	return System::Void();
}

System::Void FBManagmentSytem::WritePost::backBtn_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	Mainapp ^main = gcnew Mainapp(F, U);
	this->Hide();
	main->Show();
	return System::Void();
}
