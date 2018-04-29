#include "EditPro.h"
#include "Profile.h"

FBManagmentSytem::EditPro::EditPro(void)
{
	InitializeComponent();
}

FBManagmentSytem::EditPro::EditPro(Facebook ^ f, User ^ u)
{
	InitializeComponent();
	F = f;
	U = u;
}

System::Void FBManagmentSytem::EditPro::EditPro_Load(System::Object ^ sender, System::EventArgs ^ e)
{
	this->Size = System::Drawing::Size(376, 640);
	pictureBox14->BackgroundImageLayout = ImageLayout::Stretch;
	pictureBox1->BackgroundImageLayout = ImageLayout::Stretch;
	String^ constring = L"datasource=localhost; port=3306; username=root; password=admin";
	MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDatabase = gcnew MySqlCommand("facebook.Login_Read", conDatabase);
	cmdDatabase->CommandType = CommandType::StoredProcedure;
	cmdDatabase->Parameters->Add(gcnew MySqlParameter("Email", U->mail));
	cmdDatabase->Parameters->Add(gcnew MySqlParameter("PW", U->passw));
	MySqlDataReader^ myreader;
	bool a = false;
	conDatabase->Open();
	myreader = cmdDatabase->ExecuteReader();
	if (myreader->Read()) {
		U->id = myreader["id"]->ToString();
		U->Fname = myreader["user_firstname"]->ToString();
		U->Lname = myreader["user_lastname"]->ToString();
		U->gender = myreader["user_gender"]->ToString();
		U->mail = myreader["user_email"]->ToString();
		U->passw = myreader["user_password"]->ToString();
		U->work = myreader["user_work"]->ToString();
		U->edu = myreader["user_education"]->ToString();
		U->address = myreader["user_address"]->ToString();
		U->phone = myreader["user_phone"]->ToString();
		U->profilephoto = safe_cast<array<Byte>^>(myreader["user_profilepic"]);
		U->coverphoto = safe_cast<array<Byte>^>(myreader["user_coverpic"]);
		String^ BD = myreader["user_birthdate"]->ToString();
		array<String^>^ arr = BD->Split('/');
		U->day = arr[0];
		if (arr[1] == "1")
			U->month = "Jan";
		else if (arr[1] == "2")
			U->month = "Feb";
		else if (arr[1] == "3")
			U->month = "Mar";
		else if (arr[1] == "4")
			U->month = "Apr";
		else if (arr[1] == "5")
			U->month = "May";
		else if (arr[1] == "6")
			U->month = "Jun";
		else if (arr[1] == "7")
			U->month = "Ju;";
		else if (arr[1] == "8")
			U->month = "Aug";
		else if (arr[1] == "9")
			U->month = "Sep";
		else if (arr[1] == "10")
			U->month = "Oct";
		else if (arr[1] == "11")
			U->month = "Nov";
		else if (arr[1] == "12")
			U->month = "Dec";
		U->year = arr[2][0].ToString() + arr[2][1].ToString() + arr[2][2].ToString() + arr[2][3].ToString();
		a = true;
	}
	conDatabase->Close();
	textBox1->Text = U->Fname;
	textBox2->Text = U->Lname;
	textBox7->Text = U->mail;
	textBox8->Text = U->passw;
	if (U->gender == "male")
	{
		maleRadio->Checked = true;
	}
	else
	{
		fmaleRadio->Checked = false;
	}
	MemoryStream^ ms = gcnew MemoryStream(U->profilephoto);
	pictureBox14->Image = Image::FromStream(ms);
	pictureBox14->BackgroundImageLayout = ImageLayout::Stretch;
	MemoryStream^ ns = gcnew MemoryStream(U->coverphoto);
	pictureBox1->Image = Image::FromStream(ns);	
	pictureBox1->BackgroundImageLayout = ImageLayout::Stretch;
	dComboBox->Text = U->day;
	mComboBox->Text = U->month;
	yComboBox->Text = U->year;
	if (U->work == "")
	{
		textBox5->Text = "Add your current job";
	}
	if (U->edu == "")
	{
		textBox3->Text = "Add a high school/college";
	}
	if (U->address == "")
	{
		textBox4->Text = "Add your current city";
	}
	if (U->phone == "")
	{
		textBox6->Text = "Add phone number";
	}
	return System::Void();
}

System::Void FBManagmentSytem::EditPro::button2_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	OpenFileDialog^ dlg = gcnew OpenFileDialog();
	dlg->Filter = "Choose Image(.jpg; *.png; *.gif)|.jpg; *.png; *.gif";
	if (dlg->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		pictureBox14->Image = Image::FromFile(dlg->FileName);
		pictureBox14->BackgroundImageLayout = ImageLayout::Stretch;
	}
	return System::Void();
}

System::Void FBManagmentSytem::EditPro::button3_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	OpenFileDialog^ dlg = gcnew OpenFileDialog();
	dlg->Filter = "Choose Image(.jpg; *.png; *.gif)|.jpg; *.png; *.gif";
	if (dlg->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		pictureBox1->Image = Image::FromFile(dlg->FileName);
		pictureBox1->BackgroundImageLayout = ImageLayout::Stretch;
	}
	return System::Void();
}

System::Void FBManagmentSytem::EditPro::textBox3_Enter(System::Object ^ sender, System::EventArgs ^ e)
{
	if (textBox3->Text == "Add a high school/college")
	{
		textBox3->Text = "";
	}
	return System::Void();
}

System::Void FBManagmentSytem::EditPro::textBox3_Leave(System::Object ^ sender, System::EventArgs ^ e)
{
	if (textBox3->Text == "")
	{
		textBox3->Text = "Add a high school/college";
	}
	return System::Void();
}

System::Void FBManagmentSytem::EditPro::textBox4_Enter(System::Object ^ sender, System::EventArgs ^ e)
{
	if (textBox4->Text == "Add your current city")
	{
		textBox4->Text = "";
	}
	return System::Void();
}

System::Void FBManagmentSytem::EditPro::textBox4_Leave(System::Object ^ sender, System::EventArgs ^ e)
{
	if (textBox4->Text == "")
	{
		textBox4->Text = "Add your current city";
	}
	return System::Void();
}

System::Void FBManagmentSytem::EditPro::textBox5_Enter(System::Object ^ sender, System::EventArgs ^ e)
{
	if (textBox5->Text == "Add your current job")
	{
		textBox5->Text = "";
	}
	return System::Void();
}

System::Void FBManagmentSytem::EditPro::textBox5_Leave(System::Object ^ sender, System::EventArgs ^ e)
{
	if (textBox5->Text == "")
	{
		textBox5->Text = "Add your current job";
	}
	return System::Void();
}

System::Void FBManagmentSytem::EditPro::textBox6_Enter(System::Object ^ sender, System::EventArgs ^ e)
{
	if (textBox6->Text == "Add phone number")
	{
		textBox6->Text = "";
	}
	return System::Void();
}

System::Void FBManagmentSytem::EditPro::textBox6_Leave(System::Object ^ sender, System::EventArgs ^ e)
{
	if (textBox6->Text == "")
	{
		textBox6->Text = "Add phone number";
	}
	return System::Void();
}

System::Void FBManagmentSytem::EditPro::button1_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	if (textBox1->Text == "")
	{
		MessageBox::Show("You should enter your firstname", "Info", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	else if (textBox2->Text == "")
	{
		MessageBox::Show("You should enter your lastname", "Info", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	else if (textBox7->Text == "")
	{
		MessageBox::Show("You should enter your email", "Info", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	else if (textBox8->Text == "")
	{
		MessageBox::Show("You should enter your password", "Info", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	else
	{
		U->Fname = textBox1->Text;
		U->Lname = textBox2->Text;
		U->mail = textBox7->Text;
		U->passw = textBox8->Text;

		if (textBox3->Text == "Add a high school/college")
			U->edu = "";
		else
			U->edu = textBox3->Text;

		if (textBox4->Text == "Add your current city")
			U->address = "";
		else
			U->address = textBox4->Text;

		if (textBox5->Text == "Add your current job")
			U->work = "";
		else
			U->work = textBox5->Text;

		if (textBox6->Text == "Add phone number")
			U->phone = "";
		else
			U->phone = textBox6->Text;

		if (maleRadio->Checked)
		{
			U->gender = "male";
		}
		else
		{
			U->gender = "female";
		}

		U->year = yComboBox->Text;
		U->day = dComboBox->Text;
		if (mComboBox->Text == "Jan")
			U->month = "01";
		else if (mComboBox->Text == "Feb")
			U->month = "02";
		else if (mComboBox->Text == "Mar")
			U->month = "03";
		else if (mComboBox->Text == "Apr")
			U->month = "04";
		else if (mComboBox->Text == "May")
			U->month = "05";
		else if (mComboBox->Text == "Jun")
			U->month = "06";
		else if (mComboBox->Text == "Jul")
			U->month = "07";
		else if (mComboBox->Text == "Aug")
			U->month = "08";
		else if (mComboBox->Text == "Sep")
			U->month = "09";
		else if (mComboBox->Text == "Oct")
			U->month = "10";
		else if (mComboBox->Text == "Nov")
			U->month = "11";
		else if (mComboBox->Text == "Dec")
			U->month = "12";
		String^ bDate = U->year + "-" + U->month + "-" + U->day;

		array<Byte>^ covrimg = nullptr;
		MemoryStream^ ms = gcnew MemoryStream();
		pictureBox1->Image->Save(ms, pictureBox1->Image->RawFormat);
		covrimg = ms->ToArray();
		U->coverphoto = covrimg;

		array<Byte>^ proimg = nullptr;
		MemoryStream^ ns = gcnew MemoryStream();
		pictureBox14->Image->Save(ns, pictureBox14->Image->RawFormat);
		proimg = ns->ToArray();
		U->profilephoto = proimg;

		String^ constring = L"datasource=localhost; port=3306; username=root; password=admin";
		MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);
		conDatabase->Open();
		MySqlCommand^ cmdDatabase = gcnew MySqlCommand("facebook.Update_PROFILE", conDatabase);
		cmdDatabase->CommandType = CommandType::StoredProcedure;
		cmdDatabase->Parameters->Add(gcnew MySqlParameter("Fname", U->Fname));
		cmdDatabase->Parameters->Add(gcnew MySqlParameter("Lname", U->Lname));
		cmdDatabase->Parameters->Add(gcnew MySqlParameter("Email", U->mail));
		cmdDatabase->Parameters->Add(gcnew MySqlParameter("PW", U->passw));
		cmdDatabase->Parameters->Add(gcnew MySqlParameter("Birth", bDate));
		cmdDatabase->Parameters->Add(gcnew MySqlParameter("Gend", U->gender));
		cmdDatabase->Parameters->Add(gcnew MySqlParameter("Works", U->work));
		cmdDatabase->Parameters->Add(gcnew MySqlParameter("Edu", U->edu));
		cmdDatabase->Parameters->Add(gcnew MySqlParameter("Address", U->address));
		cmdDatabase->Parameters->Add(gcnew MySqlParameter("PhoneNo", U->phone));
		cmdDatabase->Parameters->Add(gcnew MySqlParameter("proPic", U->profilephoto));
		cmdDatabase->Parameters->Add(gcnew MySqlParameter("coverPic", U->coverphoto));
		cmdDatabase->Parameters->Add(gcnew MySqlParameter("ID", U->id));
		cmdDatabase->ExecuteNonQuery();
		conDatabase->Close();
		MessageBox::Show("Information updated successfully", "Update", MessageBoxButtons::OK, MessageBoxIcon::Information);
		Profile^ s = gcnew Profile(F, U);
		this->Hide();
		s->Show();
	}
	return System::Void();
}
