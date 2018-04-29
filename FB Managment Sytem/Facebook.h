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

	[Serializable]
	public ref class User {
	public:
		String ^ work, ^ edu, ^ address, ^ mail, ^ Fname, ^ Lname, ^ gender, ^ day, ^ month, ^ year, ^ passw, ^ id, ^ phone;
		array<Byte>^ coverphoto, ^profilephoto;
		User();
		User(User^ U);
		User(String^ em, String^ pw);
		User(String^ em, String^ pw, String^ fn, String^ ln, String^ d, String^ y, array<Byte>^ profPic, array<Byte>^ covePic);
		bool SignUp(RadioButton^ maleRadio, ComboBox^ mComboBox, array<Byte>^ proPic, array<Byte>^ coverPic);
		bool Login();
		String^ username();
	};

	[Serializable]
	public ref class Friends
	{
	public:
		User ^ usr;
		String^ fri_stat;
		String^ fri__req;
		Friends();
	};

	[Serializable]
	public ref class reply
	{
	public:
		List<String^>^ Tag;
		List<String^>^ TagSeen;
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

	[Serializable]
	public ref  class comment
	{
	public:
		List<String^>^ Tag;
		List<String^>^ TagSeen;
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

	[Serializable]
	public ref  class Posts
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
		[XmlIgnore]
		PictureBox^ img;
		String^ isPub;
		List<comment^>^ comm;
		Posts();
	};

	[Serializable]
	public ref  class PostInfo
	{
	public:
		Posts ^ post;
		String^ PostStat;
		List<String^>^ Tag;
		List<String^>^ TagSeen;
		PostInfo();
	};

	[Serializable]
	public ref class Facebook
	{
	public:
		List<List<Friends^>^>^ f;
		List<List<PostInfo^>^>^	AllPosts;
		Facebook();
		Facebook^ getStruct();
		void serStruct();
	};

}
#endif pp