#include "login.h"
using namespace System::Data::SqlClient;

void NS_Comp_login::CLlogin::connexion(System::String^ _id, System::String^ _mdp) {
    if (_id->Length == 0 || _mdp->Length == 0) {
        MessageBox::Show("Une des informations est vide.", "error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
    else {
        try{
            System::String^ sCnx = "Data Source=localhost;Initial Catalog=adazon_poo;Integrated Security=True;Encrypt=False";
            SqlConnection sqlconn(sCnx);
            sqlconn.Open();
            String^ sqlRqt_cpt = "SELECT * FROM Client WHERE email=@email AND mots_de_passe=@mdp";
            SqlCommand command(sqlRqt_cpt, % sqlconn);
            command.Parameters->AddWithValue("@email", _id);
            command.Parameters->AddWithValue("@mdp", _mdp);
            if (command.ExecuteReader()->Read()) {
                MessageBox::Show("Trouv�", "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
            }
            else {
                MessageBox::Show("email ou Mots_de_passe incorrect .", "error", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
        }
        catch (Exception^ e) {
            MessageBox::Show("Impossible de se connecter � la BDD. Erreur : " + e->Message, "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
    }
}
bool NS_Comp_login::CLlogin::cree_cpt(System::String^ _nom, System::String^ _prenom, System::String^ _email,
	System::String^ _mdp, System::String^ _numero,
	System::DateTime^ ddn) {

	// Convertir System::DateTime^ en System::String^ avec un format sp�cifique
	System::String^ dateNaissanceStr = ddn->ToString("dd/MM/yyyy");
	if (_nom->Length == 0 || _prenom->Length == 0 || _email->Length == 0 || _mdp->Length == 0 ||
		_numero->Length == 0 || dateNaissanceStr->Length == 0) {
		MessageBox::Show("Une des informations est vide.", "error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else {
        try {
            System::String^ sCnx = "Data Source=localhost;Initial Catalog=adazon_poo;Integrated Security=True;Encrypt=False";
            SqlConnection sqlconn(sCnx);
            sqlconn.Open();
            String^ sqlRqt_cpt = "INSERT INTO Client (nom_client, prenom_client, email, mots_de_passe, telephone, date_de_naissance) VALUES (@nom, @prenom, @email, @mdp, @telephone, @ddn)";
            SqlCommand command(sqlRqt_cpt, % sqlconn);

            // Ajoutez les param�tres � la commande
            command.Parameters->AddWithValue("@nom", _nom);
            command.Parameters->AddWithValue("@prenom", _prenom);
            command.Parameters->AddWithValue("@email", _email);
            command.Parameters->AddWithValue("@mdp", _mdp);
            command.Parameters->AddWithValue("@telephone", _numero);
            command.Parameters->AddWithValue("@ddn", ddn);

            // Ex�cutez la commande
            command.ExecuteNonQuery();
            MessageBox::Show("Compte enregistr�.", "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
            return true;


        }
        catch (Exception^ e) {
            MessageBox::Show("Impossible de se connecter � la BDD. Erreur : " + e->Message, "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }

	}

}
