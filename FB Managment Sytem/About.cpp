#include "About.h"

FBManagmentSytem::About::About(void)
{
	InitializeComponent();
}

FBManagmentSytem::About::About(Facebook ^ f, User ^ u)
{
	InitializeComponent();
	F = f;
	U = u;
}

System::Void FBManagmentSytem::About::About_Load(System::Object ^ sender, System::EventArgs ^ e)
{
	this->Size = System::Drawing::Size(360, 640);

	if (U->work == "")
		label5->Text = "Not work added";
	else
		label5->Text = U->work;

	if (U->edu == "")
		label11->Text = "No School/College added";
	else
		label11->Text = U->edu;

	if (U->address == "")
		label12->Text = "No place added";
	else
		label12->Text = U->address;

	if (U->phone == "")
		label13->Text = "No mobile no. added";
	else
		label13->Text = U->phone;

	label15->Text = U->mail;
	label20->Text = U->gender;
	
	if (U->month == "1")
		label22->Text = "January " + U->day + " ," + U->year;
	else if (U->month == "2")
		label22->Text = "February " + U->day + " ," + U->year;
	else if (U->month == "3")
		label22->Text = "March " + U->day + " ," + U->year;
	else if (U->month == "4")
		label22->Text = "April " + U->day + " ," + U->year;
	else if (U->month == "5")
		label22->Text = "May " + U->day + " ," + U->year;
	else if (U->month == "6")
		label22->Text = "June " + U->day + " ," + U->year;
	else if (U->month == "7")
		label22->Text = "July " + U->day + " ," + U->year;
	else if (U->month == "8")
		label22->Text = "August " + U->day + " ," + U->year;
	else if (U->month == "9")
		label22->Text = "September " + U->day + " ," + U->year;
	else if (U->month == "10")
		label22->Text = "October " + U->day + " ," + U->year;
	else if (U->month == "11")
		label22->Text = "November " + U->day + " ," + U->year;
	else if (U->month == "12")
		label22->Text = "December " + U->day + " ," + U->year;

	return System::Void();
}

System::Void FBManagmentSytem::About::backBtn_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	Profile^ s = gcnew Profile(F,U);
	this->Hide();
	s->Show();
	return System::Void();
}

