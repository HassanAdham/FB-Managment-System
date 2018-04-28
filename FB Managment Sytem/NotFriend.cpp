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
	//
	//TODO: Add the constructor code here
	//
	throw gcnew System::NotImplementedException();
}

System::Void FBManagmentSytem::NotFriend::bunifuTileButton1_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	List<Friends^>^x = F->f[Int32::Parse(U1->id)];
	for (int i = 0; i < x->Count; i++)
	{
		if (x[i]->usr->id == U2->id) {
			x[i]->fri__req = "2";
			break;
		}
	}
	F->serStruct();
	return System::Void();
}
