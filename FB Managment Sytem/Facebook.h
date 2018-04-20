#pragma once
#include "Signup.h"
#include "Mainapp.h"
#include "Login.h"
#include "Messenger.h"
#include "Profile.h"
#include "Search.h"
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include <iostream>

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace MySql::Data::MySqlClient;
using namespace std;

ref class Facebook
{
public:
	Facebook();
};

ref class User {
	string work, edu, address, mail, Fname, Lname, gender, day, month, year, passw;
	vector<User>userList;
	map<User, bool>regular;


};
