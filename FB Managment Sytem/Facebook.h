#pragma once

#ifndef pp
#define pp

namespace FBManagmentSytem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Collections::Generic;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	using namespace System::Xml;
	using namespace System::Xml::Serialization;
	using namespace System::IO;
	using namespace System::Text;

	ref class User {
	public:
		String ^ work, ^ edu, ^ address, ^ mail, ^ Fname, ^ Lname, ^ gender, ^ day, ^ month, ^ year, ^ passw, ^ id;
		PictureBox^ coverphoto, ^profilephoto;
		User() {}
		User(String^ em, String^ pw);
		User(String^ em, String^ pw, String^ fn, String^ ln, String^ d, String^ y);
		bool SignUp(RadioButton^ maleRadio, ComboBox^ mComboBox);
		Void Login();
	};

	ref class Friends
	{
	public:
		User ^ u;
		bool^ fri_stat;
		int^ fri__req;
		Friends();
	};

	ref class reply
	{
	public:
		List<String^>^ Tag;
		List<bool>^ TagSeen;
		String ^ ID;
		String^ text;
		List<String^>^ Like;
		List<String^>^ Haha;
		List<String^>^ Wow;
		List<String^>^ Love;
		List<String^>^ Sad;
		List<String^>^ Angry;
		reply();
	};

	ref  class comment
	{
	public:
		List<String^>^ Tag;
		List<bool>^ TagSeen;
		List<String^>^ Like;
		List<String^>^ Haha;
		List<String^>^ Wow;
		List<String^>^ Love;
		List<String^>^ Sad;
		List<String^>^ Angry;
		String ^ ID;
		String^ text;
		List<reply^>^ rep;
		comment();
	};

	ref  class Post
	{
	public:
		List<String^>^ Like;
		List<String^>^ Haha;
		List<String^>^ Wow;
		List<String^>^ Love;
		List<String^>^ Sad;
		List<String^>^ Angry;
		String^ ID;
		String^ UserID;
		String^ text;
		PictureBox^ img;
		bool^ isPub;
		List<comment^>^ comm;
		Post();
	};

	ref  class PostInfo
	{
	public:
		Post ^ post;
		int^ PosrStat;
		List<String^>^ Tag;
		List<bool>^ TagSeen;
		PostInfo();
	};

	[Serializable]
	ref class Facebook
	{
	public:
		List<List<PostInfo^>^>^ AllPosts;
		List<List<Friends^>^>^ f;
		Facebook();
		Facebook^ getStruct();
		void serStruct();
	};

}
#endif pp