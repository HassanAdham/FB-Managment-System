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

	
	public ref class User {
	public:
		String ^ work, ^ edu, ^ address, ^ mail, ^ Fname, ^ Lname, ^ gender, ^ day, ^ month, ^ year, ^ passw, ^ id;
		//PictureBox^ coverphoto, ^profilephoto;
		User() {}
		User(String^ em, String^ pw);
		User(String^ em, String^ pw, String^ fn, String^ ln, String^ d, String^ y);
		bool SignUp(RadioButton^ maleRadio, ComboBox^ mComboBox);
		Void Login();
	};

	[Serializable]
	public ref class Friends
	{
	public:
		[XmlElement("User")]
		User ^ usr;
		[XmlElement("Fri_stat")]
		bool^ fri_stat;
		[XmlElement("Fri_req")]
		int^ fri__req;
		Friends();
	};

	[Serializable]
	public ref class reply
	{
	public:
		[XmlElement("TagR")]
		List<String^>^ Tag;
		[XmlElement("TagSeenR")]
		List<bool>^ TagSeen;
		[XmlElement("replyID")]
		String ^ ID;
		[XmlElement("ReplyText")]
		String^ text;
		[XmlElement("LrLikes")]
		List<String^>^ Like;
		[XmlElement("LrHaha")]
		List<String^>^ Haha;
		[XmlElement("LrWow")]
		List<String^>^ Wow;
		[XmlElement("LrLove")]
		List<String^>^ Love;
		[XmlElement("LrSad")]
		List<String^>^ Sad;
		[XmlElement("LrAngry")]
		List<String^>^ Angry;
		reply();
	};

	[Serializable]
	public ref  class comment
	{
	public:
		[XmlElement("TagC")]
		List<String^>^ Tag;
		[XmlElement("TagSeenC")]
		List<bool>^ TagSeen;
		[XmlElement("LcLikes")]
		List<String^>^ Like;
		[XmlElement("LcHaha")]
		List<String^>^ Haha;
		[XmlElement("LcWow")]
		List<String^>^ Wow;
		[XmlElement("LcLove")]
		List<String^>^ Love;
		[XmlElement("LcSad")]
		List<String^>^ Sad;
		[XmlElement("LcAngry")]
		List<String^>^ Angry;
		[XmlElement("commentID")]
		String ^ ID;
		[XmlElement("CommentText")]
		String^ text;
		[XmlElement("replies")]
		List<reply^>^ rep;
		comment();
	};

	[Serializable]
	public ref  class Posts
	{
	public:
		[XmlElement("LPLikes")]
		List<String^>^ Like;
		[XmlElement("LPHAha")]
		List<String^>^ Haha;
		[XmlElement("LPWow")]
		List<String^>^ Wow;
		[XmlElement("LPLove")]
		List<String^>^ Love;
		[XmlElement("LPSad")]
		List<String^>^ Sad;
		[XmlElement("LPAngry")]
		List<String^>^ Angry;
		[XmlElement("PostID")]
		String^ ID;
		[XmlElement("UserID")]
		String^ UserID;
		[XmlElement("PostText")]
		String^ text;
		//PictureBox^ img;
		[XmlElement("isPub")]
		bool^ isPub;
		[XmlElement("Comments")]
		List<comment^>^ comm;
		Posts();
	};

	[Serializable]
	public ref  class PostInfo
	{
	public:
		[XmlElement("Post")]
		Posts ^ post;
		[XmlElement("PostStat")]
		int^ PosrStat;
		[XmlElement("Tag")]
		List<String^>^ Tag;
		[XmlElement("TagSeen")]
		List<bool>^ TagSeen;
		PostInfo();
	};

	
	public ref class Facebook
	{
	public:
		/*[XmlElement("AllPosts")]
		List<List<PostInfo^>^>^ AllPosts;*/
		
		List<List<Friends^>^>^ f;

		Facebook();
		Facebook^ getStruct();
		void serStruct();
	};

}
#endif pp