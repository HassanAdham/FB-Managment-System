#include "Signup.h"
#include "Login.h"
#include "Mainapp.h"

namespace FBManagmentSytem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	Signup::Signup(void)
	{
		obj = gcnew Facebook();
		InitializeComponent();
	}

	System::Void Signup::Signup_Load(System::Object ^ sender, System::EventArgs ^ e)
	{
		obj = obj->getStruct();
		return System::Void();
	}

	System::Void FBManagmentSytem::Signup::fnTxt_Enter(System::Object ^ sender, System::EventArgs ^ e)
	{
		if (fnTxt->Text == "  First name")
		{
			fnTxt->Text = "";
			fnTxt->ForeColor = Color::Black;
		}
		return System::Void();
	}

	System::Void FBManagmentSytem::Signup::fnTxt_Leave(System::Object ^ sender, System::EventArgs ^ e)
	{
		if (fnTxt->Text == "")
		{
			fnTxt->Text = "  First name";
			fnTxt->ForeColor = Color::DarkGray;
		}
		return System::Void();
	}

	System::Void FBManagmentSytem::Signup::lnTxt_Enter(System::Object ^ sender, System::EventArgs ^ e)
	{
		if (lnTxt->Text == "  Last name")
		{
			lnTxt->Text = "";
			lnTxt->ForeColor = Color::Black;
		}
		return System::Void();
	}

	System::Void FBManagmentSytem::Signup::lnTxt_Leave(System::Object ^ sender, System::EventArgs ^ e)
	{
		if (lnTxt->Text == "")
		{
			lnTxt->Text = "  Last name";
			lnTxt->ForeColor = Color::DarkGray;
		}
		return System::Void();
	}

	System::Void FBManagmentSytem::Signup::mailTxt_Enter(System::Object ^ sender, System::EventArgs ^ e)
	{
		if (mailTxt->Text == "  Mobile number or email address")
		{
			mailTxt->Text = "";
			mailTxt->ForeColor = Color::Black;
		}
		return System::Void();
	}

	System::Void FBManagmentSytem::Signup::mailTxt_Leave(System::Object ^ sender, System::EventArgs ^ e)
	{
		if (mailTxt->Text == "")
		{
			mailTxt->Text = "  Mobile number or email address";
			mailTxt->ForeColor = Color::DarkGray;
		}
		return System::Void();
	}

	System::Void FBManagmentSytem::Signup::remailTxt_Enter(System::Object ^ sender, System::EventArgs ^ e)
	{
		if (remailTxt->Text == "  Re-enter mobile number or email address")
		{
			remailTxt->Text = "";
			remailTxt->ForeColor = Color::Black;
		}
		return System::Void();
	}

	System::Void FBManagmentSytem::Signup::remailTxt_Leave(System::Object ^ sender, System::EventArgs ^ e)
	{
		if (remailTxt->Text == "")
		{
			remailTxt->Text = "  Re-enter mobile number or email address";
			remailTxt->ForeColor = Color::DarkGray;
		}
		return System::Void();
	}

	System::Void FBManagmentSytem::Signup::pwTxt_Enter(System::Object ^ sender, System::EventArgs ^ e)
	{
		if (pwTxt->Text == "  New Password")
		{
			pwTxt->Text = "";
			pwTxt->ForeColor = Color::Black;
			pwTxt->isPassword = true;
		}
		return System::Void();
	}

	System::Void FBManagmentSytem::Signup::pwTxt_Leave(System::Object ^ sender, System::EventArgs ^ e)
	{
		if (pwTxt->Text == "")
		{
			pwTxt->Text = "  New Password";
			pwTxt->ForeColor = Color::DarkGray;
			pwTxt->isPassword = false;
		}
		return System::Void();
	}

	System::Void FBManagmentSytem::Signup::SignupLbl_Click(System::Object ^ sender, System::EventArgs ^ e)
	{
		Login^ s = gcnew Login();
		this->Hide();
		s->Show();
		return System::Void();
	}

	System::Void FBManagmentSytem::Signup::signupBtn_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		if (fnTxt->Text == "  First name" || lnTxt->Text == "  Last name" || mailTxt->Text == "  Mobile number or email address" || remailTxt->Text == "  Re-enter mobile number or email address" || pwTxt->Text == "  New Password")
		{
			MessageBox::Show("Please complete all fields.", "Sign up", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else if (mailTxt->Text != remailTxt->Text)
		{
			MessageBox::Show("Please enter the same email or phone.", "Sign up", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else
		{
			User^ u = gcnew User(mailTxt->Text, pwTxt->Text, fnTxt->Text, lnTxt->Text, dComboBox->Text, yComboBox->Text);
			bool b = u->SignUp(maleRadio, mComboBox);
			if (b) {
				MessageBox::Show("Welcome to Facebook.", "Sign up");
				

				Friends^ fri = gcnew Friends();
				fri->usr = u;
				int^ ids = obj->f->Count +1;
				fri->usr->id = ids->ToString();
				if (obj->f->Count == 0) {
					List<Friends^>^ y = gcnew List<Friends^>();
					fri->usr->id = "1";
					y->Add(fri);
					obj->f->Add(y);
				}

				else {
					for (int i = 0; i < obj->f->Count; i++)
					{
						obj->f[i]->Add(fri);
					}

					List<Friends^>^ x = gcnew List<Friends^>(obj->f[0]);
					Friends^ tmp = x[0];
					x[0] = x[(obj->f[0]->Count) - 1];
					x[(obj->f[0]->Count) - 1] = tmp;
					for (int i = 0; i < x->Count; i++)
					{
						x[i]->fri_stat = "0";
						x[i]->fri__req = "0";
					}
					obj->f->Add(x);
				}

				if (obj->AllPosts->Count != 0)
				{
					List<PostInfo^>^z = gcnew List<PostInfo^>(obj->AllPosts[0]);
					for (int i = 0; i < z->Count; i++)
					{
						z[i]->PosrStat = "0";
					}
					obj->AllPosts->Add(z);
				}

				obj->serStruct();
				Mainapp ^main = gcnew Mainapp(obj, u);
				this->Hide();
				main->Show();
			}
		}
	}

}