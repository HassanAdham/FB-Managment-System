#include "Mainapp.h"
#include "Login.h"
#include "Profile.h"
#include "WritePost.h"

namespace FBManagmentSytem {
	FBManagmentSytem::Mainapp::Mainapp(void)
	{
		InitializeComponent();
	}

	Mainapp::Mainapp(Facebook ^ f, User ^ u)
	{
		F = f;
		U = u;
		InitializeComponent();
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

	System::Void Mainapp::panel1_Click(System::Object ^ sender, System::EventArgs ^ e)
	{
		WritePost^ s = gcnew WritePost(F,U);
		this->Hide();
		s->Show();
		return System::Void();
	}

}