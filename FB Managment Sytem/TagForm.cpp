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
	List<Friends^>^ friendlist = F->f[Int32::Parse(U->id) - 1];
	int x = 0;
	for (int i = 1; i < (F->f[0]->Count) ; i++)
	{
		if (friendlist[i]->fri__req = "1")
		{
			Panel^ pnl = gcnew Panel();
			panel3->Controls->Add(pnl);
			pnl->Size = System::Drawing::Size(360, 60);
			pnl->Location = Point(0, x);
			pnl->BackColor = Color::LightGray;

			PictureBox^ img = gcnew PictureBox();
			pnl->Controls->Add(img);
			img->Location = Point(50,5);
			img->Size = System::Drawing::Size(50, 50);
			img->SizeMode = PictureBoxSizeMode::StretchImage;
			MemoryStream^ ms = gcnew MemoryStream(friendlist[i]->usr->profilephoto);
			img->Image = Image::FromStream(ms);

			Label^ nameLbl = gcnew Label();
			pnl->Controls->Add(nameLbl);
			nameLbl->Font = gcnew System::Drawing::Font("Segoe UI", 14 , FontStyle::Regular);
			nameLbl->AutoSize = false;
			nameLbl->Size = System::Drawing::Size(250, 25);
			nameLbl->Text = friendlist[i]->usr->username();
			nameLbl->Location = Point(108, 15);
			nameLbl->BackColor = Color::LightGray;

			CheckBox^ chckbox = gcnew CheckBox();
			pnl->Controls->Add(chckbox);
			chckbox->Appearance = Appearance::Button;
			chckbox->Cursor = Cursors::Hand;
			chckbox->AutoSize = false;
			chckbox->Location = Point(12, 20);
			chckbox->ForeColor = Color::FromArgb(139, 157, 195);
			chckbox->Text = friendlist[i]->usr->username();
			chckbox->Image = uncheckedPic->Image;
			chckbox->Font = gcnew System::Drawing::Font("Segoe UI", 1, FontStyle::Regular);
			chckbox->FlatStyle = FlatStyle::Flat;
			chckbox->FlatAppearance->BorderSize = 0;
			chckbox->Size = System::Drawing::Size(24, 24);
			
			chckbox->Click += gcnew EventHandler(this, &TagForm::TagChecked_CheckedChanged);
			x += 63;
		}
	}

	return System::Void();
}

System::Void FBManagmentSytem::TagForm::TagChecked_CheckedChanged(System::Object ^ sender, System::EventArgs ^ e)
{
	panel4->Controls->Clear();
	CheckBox^ checkedd = safe_cast<CheckBox^>(sender);
	if (checkedd->Checked == true)
	{
		checkedd->Image = checkedPic->Image;
		tagged_users->Add(checkedd->Text);
		int x = 7;
		for (int i = 0; i < tagged_users->Count; i++)
		{
			Label^ tagged = gcnew Label();
			panel4->Controls->Add(tagged);
			tagged->Font = gcnew System::Drawing::Font("Segoe UI", 14, FontStyle::Regular);
			tagged->BackColor = Color::FromArgb(139, 157, 195);
			tagged->ForeColor = Color::Black;
			tagged->AutoSize = true;
			tagged->Text = tagged_users[i];
			tagged->Location = Point(10, x);
			x += 31;
		}
	}
	else
	{
		checkedd->Image = uncheckedPic->Image;
		for (int i = 0; i < tagged_users->Count; i++)
		{
			if (tagged_users[i] == checkedd->Text)
			{
				tagged_users->RemoveAt(i);
			}
		}
		int x = 7;
		for (int i = 0; i < tagged_users->Count; i++)
		{
			Label^ tagged = gcnew Label();
			panel4->Controls->Add(tagged);
			tagged->Font = gcnew System::Drawing::Font("Segoe UI", 14, FontStyle::Regular);
			tagged->BackColor = Color::FromArgb(139, 157, 195);
			tagged->ForeColor = Color::Black;
			tagged->Text = tagged_users[i];
			tagged->AutoSize = true;
			tagged->Location = Point(10, x);
			x += 31;
		}
	}
	return System::Void();
}
