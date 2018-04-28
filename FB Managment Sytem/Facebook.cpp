#include "Facebook.h"

namespace FBManagmentSytem {

	Friends::Friends()
	{
		usr = gcnew User();
		fri_stat = "1";
		fri__req = "0";
	}


	bool User::Login() {

		String^ constring = L"datasource=localhost; port=3306; username=root; password=admin";
		MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDatabase = gcnew MySqlCommand("facebook.Login_Read", conDatabase);
		cmdDatabase->CommandType = CommandType::StoredProcedure;
		cmdDatabase->Parameters->Add(gcnew MySqlParameter("Email", mail));
		cmdDatabase->Parameters->Add(gcnew MySqlParameter("PW", passw));
		MySqlDataReader^ myreader;
		bool a = false;
		conDatabase->Open();
		myreader = cmdDatabase->ExecuteReader();
		if (myreader->Read()) {
			id = myreader["id"]->ToString();
			Fname = myreader["user_firstname"]->ToString();
			Lname = myreader["user_lastname"]->ToString();
			gender = myreader["user_gender"]->ToString();
			String^ BD = myreader["user_birthdate"]->ToString();
			array<String^>^ arr = BD->Split('/');
			day = arr[0];
			month = arr[1];
			year = arr[2][0].ToString() + arr[2][1].ToString() + arr[2][2].ToString() + arr[2][3].ToString();
			a = true;
		}
		conDatabase->Close();
		return a;
	}

	String^ User::username()
	{
		String^ s;
		s = Fname + " " + Lname;
		return s;
	}

	User::User()
	{
		work = "";
		edu = "";
		address = "";
		mail = "";
		Fname = "";
		Lname = "";
		gender = "";
		day = "";
		month = "";
		year = "";
		passw = "";
		id = "";
	}

	User::User(String ^ em, String ^ pw)
	{
		mail = em;
		passw = pw;
	}

	User::User(String ^ em, String ^ pw, String ^ fn, String ^ ln, String ^ d, String ^ y)
	{
		id = "";
		mail = em;
		passw = pw;
		Fname = fn;
		Lname = ln;
		day = d;
		year = y;
		work = "";
		edu = "";
		address = "";
		gender = "";
	}

	bool User::SignUp(RadioButton^ maleRadio, ComboBox^ mComboBox) {
		//check email 
		String^ constring = L"datasource=localhost; port=3306; username=root; password=admin";
		MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);
		conDatabase->Open();
		MySqlCommand^ cmdDatabase = gcnew MySqlCommand("facebook.Check_mail", conDatabase);
		cmdDatabase->CommandType = CommandType::StoredProcedure;
		cmdDatabase->Parameters->Add(gcnew MySqlParameter("Email", mail));
		String^ emailaddress = (String^)cmdDatabase->ExecuteScalar();
		conDatabase->Close();
		if (emailaddress == mail)
		{
			MessageBox::Show("The Email or phone you entered is already exist please login.", "Sign up", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return false;
		}
		else
		{
			//set gender
			if (maleRadio->Checked)
			{
				gender = "male";
			}
			else
			{
				gender = "female";
			}

			//convert comboboxes to date data type
			if (mComboBox->Text == "Jan")
				month = "01";
			else if (mComboBox->Text == "Feb")
				month = "02";
			else if (mComboBox->Text == "Mar")
				month = "03";
			else if (mComboBox->Text == "Apr")
				month = "04";
			else if (mComboBox->Text == "May")
				month = "05";
			else if (mComboBox->Text == "Jun")
				month = "06";
			else if (mComboBox->Text == "Jul")
				month = "07";
			else if (mComboBox->Text == "Aug")
				month = "08";
			else if (mComboBox->Text == "Sep")
				month = "09";
			else if (mComboBox->Text == "Oct")
				month = "10";
			else if (mComboBox->Text == "Nov")
				month = "11";
			else if (mComboBox->Text == "Dec")
				month = "12";
			String^ bDate = year + "-" + month + "-" + day;

			//sign up insert info
			String^ constring = L"datasource=localhost; port=3306; username=root; password=admin";
			MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);
			conDatabase->Open();
			MySqlCommand^ cmdDatabase = gcnew MySqlCommand("facebook.Insert", conDatabase);
			cmdDatabase->CommandType = CommandType::StoredProcedure;
			cmdDatabase->Parameters->Add(gcnew MySqlParameter("Fname", Fname));
			cmdDatabase->Parameters->Add(gcnew MySqlParameter("Lname", Lname));
			cmdDatabase->Parameters->Add(gcnew MySqlParameter("Email", mail));
			cmdDatabase->Parameters->Add(gcnew MySqlParameter("PW", passw));
			cmdDatabase->Parameters->Add(gcnew MySqlParameter("Birth", bDate));
			cmdDatabase->Parameters->Add(gcnew MySqlParameter("Gend", gender));
			cmdDatabase->ExecuteNonQuery();
			conDatabase->Close();
			return true;
		}
	}

	Facebook::Facebook()
	{
		f = gcnew List<List<Friends^>^>();
		AllPosts = gcnew List<List<PostInfo^>^>();
	}

	Facebook^ Facebook::getStruct()
	{
		Facebook^ fb = gcnew Facebook();
		FileStream^ fs = gcnew FileStream("Friends.xml", FileMode::Open);
		if (fs->Length == 0)
		{
			fs->Close();
			return fb;
		}
		XmlSerializer^ xs = gcnew XmlSerializer(fb->GetType());
		fb = (Facebook^)xs->Deserialize(fs);
		fs->Close();
		return fb;
	}

	void Facebook::serStruct()
	{
		Facebook^ fb = gcnew Facebook();
		fb->f = f;
		fb->AllPosts = AllPosts;
		FileStream^ fs = gcnew FileStream("Friends.xml", FileMode::Append);
		if (fs->Length != 0)
		{
			fs->Close();
			fs = gcnew FileStream("Friends.xml", FileMode::Truncate);
		}
		XmlSerializer^ ser = gcnew XmlSerializer(fb->GetType());
		ser->Serialize(fs, fb);
		fs->Close();
	}

	PostInfo::PostInfo()
	{
		post = gcnew Posts();
		Tag = gcnew List<String^>();
		TagSeen = gcnew List<String^>();
		PosrStat = "3";
	}

	Posts::Posts()
	{
		Like = gcnew List<String^>();
		Haha = gcnew List<String^>();
		Wow = gcnew List<String^>();
		Love = gcnew List<String^>();
		Sad = gcnew List<String^>();
		Angry = gcnew List<String^>();
		comm = gcnew List<comment^>();
		img = gcnew PictureBox();
		isPub == "1";
	}

	comment::comment()
	{
		Like = gcnew List<String^>();
		Haha = gcnew List<String^>();
		Wow = gcnew List<String^>();
		Love = gcnew List<String^>();
		Sad = gcnew List<String^>();
		Angry = gcnew List<String^>();
		Tag = gcnew List<String^>();
		TagSeen = gcnew List<String^>();
		rep = gcnew List<reply^>();
	}

	reply::reply()
	{
		Like = gcnew List<String^>();
		Haha = gcnew List<String^>();
		Wow = gcnew List<String^>();
		Love = gcnew List<String^>();
		Sad = gcnew List<String^>();
		Angry = gcnew List<String^>();
		Tag = gcnew List<String^>();
		TagSeen = gcnew List<String^>();
	}

}