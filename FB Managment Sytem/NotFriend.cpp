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
