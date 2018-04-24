#include "Profile.h"

FBManagmentSytem::Profile::Profile(void)
{
	InitializeComponent();
	//
	//TODO: Add the constructor code here
	//
	throw gcnew System::NotImplementedException();
}

FBManagmentSytem::Profile::Profile(Facebook ^ f, User ^ u)
{
	F = f;
	U = u;
	InitializeComponent();
	//
	//TODO: Add the constructor code here
	//
	throw gcnew System::NotImplementedException();
}
