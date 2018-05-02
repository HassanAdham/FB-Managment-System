#include "Friend.h"
#include "FriendsOP.h"
#include "NotFriend.h"

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
	List<Friends^>^y = F->f[Int32::Parse(U2->id) - 1];
	for (int i = 1; i < y->Count; i++)
	{
		if (y[i]->usr->id == U1->id) {
			if (y[i]->fri_stat == "0") {
				bunifuFlatButton1->Iconimage = yPic->Image;
				bunifuFlatButton1->Text = " Regular Friend";
			}
			if (y[i]->fri_stat == "1") {
				bunifuFlatButton1->Iconimage = xPic->Image;
				bunifuFlatButton1->Text = " Ristrected";
			}
			break;
		}
	}
	F->serStruct();
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
		List<Friends^>^x = F->f[Int32::Parse(U2->id) - 1];
		for (int i = 0; i < x->Count; i++)
		{
			if (x[i]->usr->id == U1->id) {
				x[i]->fri_stat = "0";
				break;
			}
		}
		List<Friends^>^y = F->f[Int32::Parse(U1->id) - 1];
		for (int i = 0; i < y->Count; i++)
		{
			if (y[i]->usr->id == U2->id) {
				y[i]->fri_stat = "0";
				break;
			}
		}
		List<PostInfo^>^ postlist1 = F->AllPosts[Int32::Parse(U2->id) - 1];
		for (int i = 0; i < postlist1->Count; i++)
		{
			if (postlist1[i]->post->userr->id == U1->id&&postlist1[i]->post->isPub == "0") {
				postlist1[i]->PostStat = "2";

			}
		}
	}
	else
	{
		bunifuFlatButton1->Iconimage = xPic->Image;
		bunifuFlatButton1->Text = " Ristrected";
		List<Friends^>^x = F->f[Int32::Parse(U2->id) - 1];
		for (int i = 0; i < x->Count; i++)
		{
			if (x[i]->usr->id == U1->id) {
				x[i]->fri_stat = "1";
				break;
			}
		}
		List<Friends^>^y = F->f[Int32::Parse(U1->id) - 1];
		for (int i = 0; i < y->Count; i++)
		{
			if (y[i]->usr->id == U2->id) {
				y[i]->fri_stat = "1";
				break;
			}
		}
		List<PostInfo^>^ postlist1 = F->AllPosts[Int32::Parse(U2->id) - 1];
		for (int i = 0; i < postlist1->Count; i++)
		{
			if (postlist1[i]->post->userr->id == U1->id&&postlist1[i]->post->isPub == "0") {
				postlist1[i]->PostStat = "0";

			}
		}
	}
	F->serStruct();
	return System::Void();
}

System::Void FBManagmentSytem::Friend::bunifuTileButton3_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	FriendsOP^ s = gcnew FriendsOP(F,U1,U2);
	this->Hide();
	s->Show();
	return System::Void();
}

System::Void FBManagmentSytem::Friend::unfriBtn_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	List<Friends^>^x = F->f[Int32::Parse(U1->id) - 1];
	for (int i = 0; i < x->Count; i++)
	{
		if (x[i]->usr->id == U2->id) {
			x[i]->fri__req = "0";
			break;
		}
	}
	List<Friends^>^y = F->f[Int32::Parse(U2->id) - 1];
	for (int i = 0; i < y->Count; i++)
	{
		if (y[i]->usr->id == U1->id) {
			y[i]->fri__req = "0";
			break;
		}
	}
	List<PostInfo^>^ postlist1 = F->AllPosts[Int32::Parse(U1->id) - 1];
	for (int i = 0; i < postlist1->Count; i++)
	{
		if (postlist1[i]->post->userr->id == U2->id) {
			postlist1[i]->PostStat = "0";

		}
	}
	List<PostInfo^>^ postlist2 = F->AllPosts[Int32::Parse(U2->id) - 1];
	for (int i = 0; i < postlist2->Count; i++)
	{
		if (postlist2[i]->post->userr->id == U1->id) {
			postlist2[i]->PostStat = "0";

		}
	}
	F->serStruct();
	NotFriend^ s = gcnew NotFriend(F, U1, U2);
	this->Hide();
	s->Show();
	return System::Void();
}
