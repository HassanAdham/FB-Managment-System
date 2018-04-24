#include "Mainapp.h"


namespace FBManagmentSytem {
	FBManagmentSytem::Mainapp::Mainapp(void)
	{
		InitializeComponent();
		//
		//TODO: Add the constructor code here
		//
	}

	Mainapp::Mainapp(Facebook ^ f, User ^ u)
	{
		F = f;
		U = u;
		InitializeComponent();
		//
		//TODO: Add the constructor code here
		//
		throw gcnew System::NotImplementedException();
	}



	FBManagmentSytem::Mainapp::~Mainapp()
	{
		if (components)
		{
			delete components;
		}
	}

}