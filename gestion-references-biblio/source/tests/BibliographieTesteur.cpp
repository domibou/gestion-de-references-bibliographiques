/**
 * \file BibliographieTesteur.cpp
 * \brief Fichier contenant les tests de la classe Bibliographie
 * \author Dominic Boucher
 */

#include <gtest/gtest.h>
#include "Bibliographie.h"
#include "Ouvrage.h"
#include "ContratException.h"
#include <sstream>
#include "ReferenceException.h"


using namespace biblio;


/**
 * \test Test du constructeur avec parametres
 *     Cas valide: l'attribut m_nom est "nomBiblio"
 *     Cas invalide: Aucun
 */


TEST (Bibliographie, Constructeur)
{
  Bibliographie b1 ("nom");
  ASSERT_EQ ("nom", b1.reqNom ());

}

/**
 * \brief Creation de la fixture utilisee pour les tests
 */

class uneBiblio : public ::testing::Test
{

public:


  uneBiblio () : f_biblio ("nom") { };
  Bibliographie f_biblio;
} ;


/**
 * \test Test du constructeur copie
 *     Cas valide: l'attribut m_nom de uneBiblio est "nom"
 *     Cas invalide: Aucun
 */

TEST_F (uneBiblio, ConstructeurCopie)
{
  Bibliographie b2 = f_biblio;
  ASSERT_EQ (b2.reqNom (), f_biblio.reqNom ());
}


/**
 * \test Test de l'operateur d'assignation
 *     Cas valide: l'attribut m_nom de uneBiblio est "nom"
 *     Cas invalide: Aucun
 */

TEST_F (uneBiblio, OperateurEgalite)
{
  Bibliographie b2 = f_biblio;
  ASSERT_EQ (b2.reqNom (), f_biblio.reqNom ());
}


/**
 * \test Test de l'accesseur du nom
 *     Cas valide: l'attribut m_nom est "nom"
 *     Cas invalide: Aucun
 */

TEST_F (uneBiblio, reqNom)
{
  ASSERT_EQ ("nom", f_biblio.reqNom ());
}


/**
 * \test Test de la methode de formatage
 *     Cas valide: l'objet string representant la bibliographie formatee est construite comme voulu
 *     Cas invalide: Aucun
 */

TEST_F (uneBiblio, reqBibliographieFormatee)
{
  Ouvrage o1 ("auteur", "titre", 1905, "ISBN 978-0-387-77591-3", "editeur", "ville");
  f_biblio.ajouterReference (o1);
  std::ostringstream os;
  os << "Bibliographie\n==================\n";
  os << "[" << 1 << "] " << o1.reqReferenceFormatee () << "\n";
  ASSERT_EQ (f_biblio.reqBibliographieFormatee (), os.str ());
}


/**
 * \test Test de la methode pour ajouter une reference
 *     Cas valide: La taille de la bibliographie formatee apres ajout est plus grande que celle avant ajout
 *     Cas invalide: La reference est deja presente
 */

TEST_F (uneBiblio, ajouterReferenceValide)
{
  Ouvrage o1 ("auteur", "titre", 1905, "ISBN 978-0-387-77591-3", "editeur", "ville");
  f_biblio.ajouterReference (o1);
  Bibliographie b2 ("nom2");
  ASSERT_TRUE (f_biblio.reqBibliographieFormatee ().size () > b2.reqBibliographieFormatee ().size ());
}


/**
 * \test Test de la methode pour ajouter une reference
 *     Cas valide: La taille de la bibliographie formatee apres ajout est plus grande que celle avant ajout
 *     Cas invalide: La reference est deja presente
 */

TEST_F (uneBiblio, ajouterReferenceInvalide)
{
  Ouvrage o1 ("auteur", "titre", 1905, "ISBN 978-0-387-77591-3", "editeur", "ville");
  f_biblio.ajouterReference (o1);
  ASSERT_THROW (f_biblio.ajouterReference (o1), ReferenceDejaPresenteException);
}


/**
 * \test Test de la methode pour supprimer une reference
 *     Cas valide: La bibliographie formatee est vide apres suppression
 *     Cas invalide: La reference a supprimer ne se trouve pas dans la bibliographie
 */

TEST_F (uneBiblio, supprimerReferenceValide)
{
  Ouvrage o1 ("auteur", "titre", 1905, "ISBN 978-0-387-77591-3", "editeur", "ville");
  f_biblio.ajouterReference (o1);
  f_biblio.supprimerReference ("ISBN 978-0-387-77591-3");
  ASSERT_EQ (f_biblio.reqBibliographieFormatee (), "Bibliographie\n==================\n");
}


/**
 * \test Test de la methode pour supprimer une reference
 *     Cas valide: La bibliographie formatee est vide apres suppression
 *     Cas invalide: La reference a supprimer ne se trouve pas dans la bibliographie
 */

TEST_F (uneBiblio, supprimerReferenceInvalide)
{
  Ouvrage o1 ("auteur", "titre", 1905, "ISBN 978-0-387-77591-3", "editeur", "ville");
  f_biblio.ajouterReference (o1);
  ASSERT_THROW (f_biblio.supprimerReference ("ISBN 000-0-000-00000-0"), ReferenceAbsenteException);
}

