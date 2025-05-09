#pragma once
#include "login.h"

namespace ProjectPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;



	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			panel_cmpt->Hide();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;

	private: NS_Comp_login::CLlogin^ NcL;
	private: System::Windows::Forms::Panel^ panel_cmpt;
	private: System::Windows::Forms::TextBox^ _mdp;


	private: System::Windows::Forms::TextBox^ prenom;


	private: System::Windows::Forms::TextBox^ nom;

	private: System::Windows::Forms::Button^ confirmer_compte;
	private: System::Windows::Forms::TextBox^ Mdp;
	private: System::Windows::Forms::TextBox^ numero;

	private: System::Windows::Forms::TextBox^ email;
	private: System::Windows::Forms::DateTimePicker^ date_de_naissance;
	private: System::Windows::Forms::Label^ label_nom;
	private: System::Windows::Forms::Label^ label_prenom;
	private: System::Windows::Forms::Label^ label_d_d_n;
	private: System::Windows::Forms::Label^ label_numero;
	private: System::Windows::Forms::Label^ label_email;
	private: System::Windows::Forms::Label^ label_mdp2;

	private: System::Windows::Forms::Label^ label_id;
	private: System::Windows::Forms::Label^ label_mdp1;
	private: System::Drawing::Printing::PrintDocument^ printDocument1;

















	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel_cmpt = (gcnew System::Windows::Forms::Panel());
			this->label_d_d_n = (gcnew System::Windows::Forms::Label());
			this->label_numero = (gcnew System::Windows::Forms::Label());
			this->label_email = (gcnew System::Windows::Forms::Label());
			this->label_mdp2 = (gcnew System::Windows::Forms::Label());
			this->label_prenom = (gcnew System::Windows::Forms::Label());
			this->label_nom = (gcnew System::Windows::Forms::Label());
			this->date_de_naissance = (gcnew System::Windows::Forms::DateTimePicker());
			this->numero = (gcnew System::Windows::Forms::TextBox());
			this->email = (gcnew System::Windows::Forms::TextBox());
			this->nom = (gcnew System::Windows::Forms::TextBox());
			this->confirmer_compte = (gcnew System::Windows::Forms::Button());
			this->prenom = (gcnew System::Windows::Forms::TextBox());
			this->_mdp = (gcnew System::Windows::Forms::TextBox());
			this->Mdp = (gcnew System::Windows::Forms::TextBox());
			this->label_id = (gcnew System::Windows::Forms::Label());
			this->label_mdp1 = (gcnew System::Windows::Forms::Label());
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->panel_cmpt->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(194, 99);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(275, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(209, 226);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(104, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Connexion";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(343, 226);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(104, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Créer un Compte";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// panel_cmpt
			// 
			this->panel_cmpt->Controls->Add(this->label_d_d_n);
			this->panel_cmpt->Controls->Add(this->label_numero);
			this->panel_cmpt->Controls->Add(this->label_email);
			this->panel_cmpt->Controls->Add(this->label_mdp2);
			this->panel_cmpt->Controls->Add(this->label_prenom);
			this->panel_cmpt->Controls->Add(this->label_nom);
			this->panel_cmpt->Controls->Add(this->date_de_naissance);
			this->panel_cmpt->Controls->Add(this->numero);
			this->panel_cmpt->Controls->Add(this->email);
			this->panel_cmpt->Controls->Add(this->nom);
			this->panel_cmpt->Controls->Add(this->confirmer_compte);
			this->panel_cmpt->Controls->Add(this->prenom);
			this->panel_cmpt->Controls->Add(this->_mdp);
			this->panel_cmpt->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel_cmpt->Location = System::Drawing::Point(0, 0);
			this->panel_cmpt->Name = L"panel_cmpt";
			this->panel_cmpt->Size = System::Drawing::Size(706, 372);
			this->panel_cmpt->TabIndex = 4;
			// 
			// label_d_d_n
			// 
			this->label_d_d_n->AutoSize = true;
			this->label_d_d_n->Location = System::Drawing::Point(123, 245);
			this->label_d_d_n->Name = L"label_d_d_n";
			this->label_d_d_n->Size = System::Drawing::Size(96, 13);
			this->label_d_d_n->TabIndex = 13;
			this->label_d_d_n->Text = L"Date de naissance";
			// 
			// label_numero
			// 
			this->label_numero->AutoSize = true;
			this->label_numero->Location = System::Drawing::Point(169, 196);
			this->label_numero->Name = L"label_numero";
			this->label_numero->Size = System::Drawing::Size(44, 13);
			this->label_numero->TabIndex = 12;
			this->label_numero->Text = L"Numéro";
			// 
			// label_email
			// 
			this->label_email->AutoSize = true;
			this->label_email->Location = System::Drawing::Point(169, 157);
			this->label_email->Name = L"label_email";
			this->label_email->Size = System::Drawing::Size(31, 13);
			this->label_email->TabIndex = 11;
			this->label_email->Text = L"email";
			// 
			// label_mdp2
			// 
			this->label_mdp2->AutoSize = true;
			this->label_mdp2->Location = System::Drawing::Point(143, 118);
			this->label_mdp2->Name = L"label_mdp2";
			this->label_mdp2->Size = System::Drawing::Size(76, 13);
			this->label_mdp2->TabIndex = 10;
			this->label_mdp2->Text = L"Mots de passe";
			// 
			// label_prenom
			// 
			this->label_prenom->AutoSize = true;
			this->label_prenom->Location = System::Drawing::Point(166, 80);
			this->label_prenom->Name = L"label_prenom";
			this->label_prenom->Size = System::Drawing::Size(43, 13);
			this->label_prenom->TabIndex = 9;
			this->label_prenom->Text = L"Prénom";
			// 
			// label_nom
			// 
			this->label_nom->AutoSize = true;
			this->label_nom->Location = System::Drawing::Point(173, 36);
			this->label_nom->Name = L"label_nom";
			this->label_nom->Size = System::Drawing::Size(29, 13);
			this->label_nom->TabIndex = 8;
			this->label_nom->Text = L"Nom";
			this->label_nom->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// date_de_naissance
			// 
			this->date_de_naissance->Location = System::Drawing::Point(225, 239);
			this->date_de_naissance->Name = L"date_de_naissance";
			this->date_de_naissance->Size = System::Drawing::Size(200, 20);
			this->date_de_naissance->TabIndex = 7;
			// 
			// numero
			// 
			this->numero->Location = System::Drawing::Point(225, 190);
			this->numero->Name = L"numero";
			this->numero->Size = System::Drawing::Size(186, 20);
			this->numero->TabIndex = 6;
			// 
			// email
			// 
			this->email->Location = System::Drawing::Point(225, 151);
			this->email->Name = L"email";
			this->email->Size = System::Drawing::Size(186, 20);
			this->email->TabIndex = 5;
			this->email->TextChanged += gcnew System::EventHandler(this, &MyForm::email_TextChanged);
			// 
			// nom
			// 
			this->nom->Location = System::Drawing::Point(225, 30);
			this->nom->Name = L"nom";
			this->nom->Size = System::Drawing::Size(186, 20);
			this->nom->TabIndex = 1;
			this->nom->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// confirmer_compte
			// 
			this->confirmer_compte->Location = System::Drawing::Point(274, 286);
			this->confirmer_compte->Name = L"confirmer_compte";
			this->confirmer_compte->Size = System::Drawing::Size(75, 23);
			this->confirmer_compte->TabIndex = 0;
			this->confirmer_compte->Text = L"Confirmer";
			this->confirmer_compte->UseVisualStyleBackColor = true;
			this->confirmer_compte->Click += gcnew System::EventHandler(this, &MyForm::confirmer_compte_Click);
			// 
			// prenom
			// 
			this->prenom->Location = System::Drawing::Point(225, 73);
			this->prenom->Name = L"prenom";
			this->prenom->Size = System::Drawing::Size(186, 20);
			this->prenom->TabIndex = 2;
			// 
			// _mdp
			// 
			this->_mdp->Location = System::Drawing::Point(225, 115);
			this->_mdp->Name = L"_mdp";
			this->_mdp->Size = System::Drawing::Size(186, 20);
			this->_mdp->TabIndex = 3;
			this->_mdp->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			// 
			// Mdp
			// 
			this->Mdp->Location = System::Drawing::Point(194, 190);
			this->Mdp->Name = L"Mdp";
			this->Mdp->Size = System::Drawing::Size(275, 20);
			this->Mdp->TabIndex = 4;
			// 
			// label_id
			// 
			this->label_id->AutoSize = true;
			this->label_id->Location = System::Drawing::Point(135, 105);
			this->label_id->Name = L"label_id";
			this->label_id->Size = System::Drawing::Size(32, 13);
			this->label_id->TabIndex = 14;
			this->label_id->Text = L"Email";
			this->label_id->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_1);
			// 
			// label_mdp1
			// 
			this->label_mdp1->AutoSize = true;
			this->label_mdp1->Location = System::Drawing::Point(112, 193);
			this->label_mdp1->Name = L"label_mdp1";
			this->label_mdp1->Size = System::Drawing::Size(76, 13);
			this->label_mdp1->TabIndex = 15;
			this->label_mdp1->Text = L"Mots de passe";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(706, 372);
			this->Controls->Add(this->panel_cmpt);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label_id);
			this->Controls->Add(this->Mdp);
			this->Controls->Add(this->label_mdp1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->panel_cmpt->ResumeLayout(false);
			this->panel_cmpt->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion






	private: System::Void fontDialog1_Apply(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		this->NcL->connexion(this->textBox1->Text,this->Mdp->Text);
	}
private: System::Void flowLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	panel_cmpt->Show();
}
private: System::Void textBox2_TextChanged_2(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void richTextBox1_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void confirmer_compte_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->NcL->cree_cpt(this->nom->Text, this->prenom->Text, this->email->Text, this->_mdp->Text,
		this->numero->Text, this->date_de_naissance->Value) == true) {
		panel_cmpt->Hide();
		nom->Clear(); prenom->Clear(); email->Clear(); _mdp->Clear(); numero->Clear();
	}
}
private: System::Void email_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
};
}
