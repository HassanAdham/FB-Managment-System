#include "NotFriend.h"

FBManagmentSytem::NotFriend::NotFriend(void)
{
	InitializeComponent();
	//
	//TODO: Add the constructor code here
	//
	throw gcnew System::NotImplementedException();
}

FBManagmentSytem::NotFriend::NotFriend(Facebook ^ f, User ^ u1, User ^ u2)
{
	F = f;
	U1 = u1;
	U2 = u2;
	InitializeComponent();
}

System::Void FBManagmentSytem::NotFriend::bunifuTileButton1_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	if (bunifuTileButton1->LabelText == "Add Friend")
	{
		bunifuTileButton1->Image = pendingPic->Image;
		bunifuTileButton1->LabelText = "Pending Request";
		List<Friends^>^x = F->f[Int32::Parse(U2->id) - 1];
		for (int i = 0; i < x->Count; i++)
		{
			if (x[i]->usr->id == U1->id) {
				x[i]->fri__req = "2";
				break;
			}
		}
		F->serStruct();
	}
	else
	{
		bunifuTileButton1->Image = addPic->Image;
		bunifuTileButton1->Text = "Add Friend";
		List<Friends^>^x = F->f[Int32::Parse(U1->id) - 1];
		for (int i = 0; i < x->Count; i++)
		{
			if (x[i]->usr->id == U2->id) {
				x[i]->fri__req = "0";
				break;
			}
		}
		F->serStruct();
	}
	return System::Void();
}

System::Void FBManagmentSytem::NotFriend::NotFriend_Load(System::Object ^ sender, System::EventArgs ^ e)
{
	
	return System::Void();
}
