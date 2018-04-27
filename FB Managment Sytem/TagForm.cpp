#include "TagForm.h"
#include <string>

FBManagmentSytem::TagForm::TagForm(void)
{
	InitializeComponent();
}

FBManagmentSytem::TagForm::TagForm(Facebook ^ f, User ^ u)
{
	InitializeComponent();
	F = f;
	U = u;
}

System::Void FBManagmentSytem::TagForm::TagForm_Load(System::Object ^ sender, System::EventArgs ^ e)
{
	List<Friends^>^ friendlist = F->f[Int32::Parse(U->id)-1];
	int x = 0;
	for (int i = 1; i < (F->f[0]->Count)+1 ; i++)
	{
		if (friendlist[i]->fri__req = "1")
		{
			Panel^ pnl = gcnew Panel();
			pnl->Size = System::Drawing::Size(360, 60);
			pnl->Location = Point(0, x);
			pnl->BackColor = Color::LightGray;

			Bunifu::Framework::UI::BunifuCheckbox^ chckBox = gcnew Bunifu::Framework::UI::BunifuCheckbox();
			pnl->Controls->Add(chckBox);
			chckBox->BackColor = Color::FromArgb(59, 89, 152);
			chckBox->CheckedOnColor = Color::FromArgb(59, 89, 152);
			chckBox->ChechedOffColor = Color::FromArgb(139, 157, 195);
			chckBox->Checked = false;
			chckBox->Location = Point(12, 20);

			PictureBox^ img = gcnew PictureBox();
			pnl->Controls->Add(img);
			img->Location = Point(50,5);
			img->Size = System::Drawing::Size(50, 50);
			img->SizeMode = PictureBoxSizeMode::StretchImage;

			Label^ nameLbl = gcnew Label();
			nameLbl->Font = gcnew System::Drawing::Font("Segoe UI", 14 , FontStyle::Regular);
			nameLbl->Text = friendlist[i]->usr->username();
			nameLbl->Location = Point(108, 15);
			nameLbl->BackColor = Color::LightGray;

		}
	}

	return System::Void();
}
