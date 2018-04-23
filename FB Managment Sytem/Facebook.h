#pragma once
#include "Signup.h"
#include "Mainapp.h"
#include "Login.h"
#include "Messenger.h"
#include "Profile.h"
#include "Search.h"
#include <cliext/vector>

namespace FBManagmentSytem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Collections::Generic;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	ref class Facebook
	{
	public:
	};

	ref class User {
	public:
		String ^ work, ^ edu, ^ address, ^ mail, ^ Fname, ^ Lname, ^ gender, ^ day, ^ month, ^ year, ^ passw ,^ id;
		User() {}
		User(String^ em, String^ pw)
		{
			mail = em;
			passw = pw;
		}
		User(String^ em, String^ pw, String^ fn, String^ ln, String^ d, String^ y)
		{
			mail = em;
			passw = pw;
			Fname = fn;
			Lname = ln;
			day = d;
			year = y;
		}
		bool SignUp(RadioButton^ maleRadio, ComboBox^ mComboBox);
		Void Login();
	};
	
	ref  class comment
	{
	public:
		String ^ ID;
		String^ text;
		int react;
		comment() {}
	};
	ref class reply : public comment
	{
	public:
	};

}