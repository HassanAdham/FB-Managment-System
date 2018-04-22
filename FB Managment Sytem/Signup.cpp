#include "Signup.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace MySql::Data::MySqlClient;


System::Void FBManagmentSytem::Signup::SignupLbl_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	Login^ s = gcnew Login();
	this->Hide();
	s->Show();
	return System::Void();
}


System::Void FBManagmentSytem::Signup::signupBtn_Click(System::Object^  sender, System::EventArgs^  e) {
	
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
			Mainapp ^main = gcnew Mainapp();
			this->Hide();
			main->Show();
		}
		////check email 
		//String^ constring = L"datasource=localhost; port=3306; username=root; password=admin";
		//MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);
		//conDatabase->Open();
		//MySqlCommand^ cmdDatabase = gcnew MySqlCommand("facebook.Check_mail", conDatabase);
		//cmdDatabase->CommandType = CommandType::StoredProcedure;
		//cmdDatabase->Parameters->Add(gcnew MySqlParameter("Email", mailTxt->Text));
		//String^ emailaddress = (String^)cmdDatabase->ExecuteScalar();
		//conDatabase->Close();
		//if (emailaddress == mailTxt->Text)
		//{
		//	MessageBox::Show("The Email or phone you entered is already exist please login.", "Sign up", MessageBoxButtons::OK, MessageBoxIcon::Information);
		//}
		//else
		//{
		//	//set gender
		//	String^ Gender;
		//	if (maleRadio->Checked)
		//	{
		//		Gender = "male";
		//	}
		//	else
		//	{
		//		Gender = "female";
		//	}

		//	//convert comboboxes to date data type
		//	String^ month;
		//	if (mComboBox->Text == "Jan")
		//		month = "01";
		//	else if (mComboBox->Text == "Feb")
		//		month = "02";
		//	else if (mComboBox->Text == "Mar")
		//		month = "03";
		//	else if (mComboBox->Text == "Apr")
		//		month = "04";
		//	else if (mComboBox->Text == "May")
		//		month = "05";
		//	else if (mComboBox->Text == "Jun")
		//		month = "06";
		//	else if (mComboBox->Text == "Jul")
		//		month = "07";
		//	else if (mComboBox->Text == "Aug")
		//		month = "08";
		//	else if (mComboBox->Text == "Sep")
		//		month = "09";
		//	else if (mComboBox->Text == "Oct")
		//		month = "10";
		//	else if (mComboBox->Text == "Nov")
		//		month = "11";
		//	else if (mComboBox->Text == "Dec")
		//		month = "12";
		//	String^ bDate = yComboBox->Text + "-" + month + "-" + dComboBox->Text;

		//	//sign up insert info
		//	String^ constring = L"datasource=localhost; port=3306; username=root; password=admin";
		//	MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);
		//	conDatabase->Open();
		//	MySqlCommand^ cmdDatabase = gcnew MySqlCommand("facebook.Insert", conDatabase);
		//	cmdDatabase->CommandType = CommandType::StoredProcedure;
		//	cmdDatabase->Parameters->Add(gcnew MySqlParameter("Fname", fnTxt->Text));
		//	cmdDatabase->Parameters->Add(gcnew MySqlParameter("Lname", lnTxt->Text));
		//	cmdDatabase->Parameters->Add(gcnew MySqlParameter("Email", mailTxt->Text));
		//	cmdDatabase->Parameters->Add(gcnew MySqlParameter("PW", pwTxt->Text));
		//	cmdDatabase->Parameters->Add(gcnew MySqlParameter("Birth", bDate));
		//	cmdDatabase->Parameters->Add(gcnew MySqlParameter("Gend", Gender));
		//	cmdDatabase->ExecuteNonQuery();
		//	conDatabase->Close();
		//	Mainapp ^main = gcnew Mainapp();
		//	this->Hide();
		//	main->Show();
		//	MessageBox::Show("Welcome to Facebook.", "Sign up");
		//}
	}
}

