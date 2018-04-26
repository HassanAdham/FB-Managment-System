#include "Mainapp.h"
#include "Login.h"
#include "Profile.h"

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
	}



	FBManagmentSytem::Mainapp::~Mainapp()
	{
		if (components)
		{
			delete components;
		}
	}

	System::Void Mainapp::logoutBtn_Click(System::Object ^ sender, System::EventArgs ^ e)
	{
		Login^ s = gcnew Login();
		this->Hide();
		s->Show();
		return System::Void();
	}

	System::Void Mainapp::profileClkPnl_Click(System::Object ^ sender, System::EventArgs ^ e)
	{
		Profile^ s = gcnew Profile(F, U);
		this->Hide();
		s->Show();
		return System::Void();
	}

	System::Void Mainapp::userLbl_Click(System::Object ^ sender, System::EventArgs ^ e)
	{
		Profile^ s = gcnew Profile(F, U);
		this->Hide();
		s->Show();
		return System::Void();
	}

	System::Void Mainapp::label1_Click(System::Object ^ sender, System::EventArgs ^ e)
	{
		Profile^ s = gcnew Profile(F, U);
		this->Hide();
		s->Show();
		return System::Void();
	}

	System::Void Mainapp::userPic_Click(System::Object ^ sender, System::EventArgs ^ e)
	{
		Profile^ s = gcnew Profile(F, U);
		this->Hide();
		s->Show();
		return System::Void();
	}

}