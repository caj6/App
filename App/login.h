#pragma once
#include <iostream>
using namespace System::IO;
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Windows::Forms;


namespace NS_Comp_login
{
	ref class CLlogin
	{
	private:
		System::String^ id;
		System::String^ mdp;
	public:
		void connexion(System::String^,System::String^);
		bool cree_cpt(System::String^, System::String^, System::String^, System::String^, System::String^,
			System::DateTime^);
	};
}
