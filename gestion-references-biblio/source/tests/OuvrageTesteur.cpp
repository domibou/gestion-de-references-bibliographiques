/**
 * \file OuvrageTesteur.cpp
 * \brief Fichier contenant les tests de la classe Ouvrage
 * \author Dominic Boucher
 */

#include <gtest/gtest.h>
#include "ContratException.h"
#include "Ouvrage.h"
#include "Reference.h"
#include <sstream>

using namespace biblio;


/**
 * \test Test du constructeur
 *     Cas valide: m_identifiant = "ISBN 978-0-387-77591-3", m_editeur = "editeur", m_ville = "ville"
 *     Cas invalide: format du nom de l'editeur invalide, format du nom de la ville invalide, ISBN invalide
 */

TEST (Ouvrage, ConstructeurValide)
{
  Ouvrage o1 ("auteur", "titre", 1905, "ISBN 978-0-387-77591-3", "editeur", "ville");
  ASSERT_EQ ("ISBN 978-0-387-77591-3", o1.reqIdentifiant ());
  ASSERT_EQ ("editeur", o1.reqEditeur ());
  ASSERT_EQ ("ville", o1.reqVille ());
}


/**
 * \test Test du constructeur
 *     Cas valide: Aucun
 *     Cas invalide: ISBN invalide
 */

TEST (Ouvrage, ConstructeurIdentifiantInvalide)
{
  ASSERT_THROW (Ouvrage o1 ("auteur", "titre", 1905, "iessbeenne 1010101", "editeur", "ville"), PreconditionException);
}


/**
 * \test Test du constructeur
 *     Cas valide: Aucun
 *     Cas invalide: Editeur invalide (format nom invalide, nom vide)
 */

TEST (Ouvrage, ConstructeurEditeurInvalide)
{

  ASSERT_THROW (Ouvrage o1 ("auteur", "titre", 1905, "ISBN 978-0-387-77591-3", "edit--heurt", "ville"), PreconditionException);
  ASSERT_THROW (Ouvrage o1 ("auteur", "titre", 1905, "ISBN 978-0-387-77591-3", "", "ville"), ContratException);
}


/**
 * \test Test du constructeur
 *     Cas valide: Aucun
 *     Cas invalide: Ville invalide (format nom invalide, nom vide)
 */

TEST (Ouvrage, ConstructeurVilleInvalide)
{
  ASSERT_THROW (Ouvrage o1 ("auteur", "titre", 1905, "ISBN 978-0-387-77591-3", "editeur", "vie--le"), PreconditionException);
  ASSERT_THROW (Ouvrage o1 ("auteur", "titre", 1905, "ISBN 978-0-387-77591-3", "editeur", ""), ContratException);
}

/**
 * \brief Creation de la fixture utilisee pour les tests
 */

class unOuvrage : public ::testing::Test
{

public:


  unOuvrage () : f_ouvrage ("auteur", "titre", 1905, "ISBN 978-0-387-77591-3", "editeur", "ville") { };
  Ouvrage f_ouvrage;
} ;


/**
 * \test Test de l'accesseur de m_editeur
 *     Cas valide: m_editeur = "editeur"
 *     Cas invalide: Aucun
 */

TEST_F (unOuvrage, reqEditeur)
{
  ASSERT_EQ ("editeur", f_ouvrage.reqEditeur ());
}


/**
 * \test Test de l'accesseur de m_ville
 *     Cas valide: m_ville = "ville
 *     Cas invalide: Aucun
 */

TEST_F (unOuvrage, reqVille)
{
  ASSERT_EQ ("ville", f_ouvrage.reqVille ());
}


/**
 * \test Test de la methode de formatage
 *     Cas valide: L'ouvrage est formate comme voulu
 *     Cas invalide: Aucun
 */

TEST_F (unOuvrage, reqReferenceFormatee)
{
  std::ostringstream os;
  os << f_ouvrage.reqAuteur () << ". " << f_ouvrage.reqTitre () << ". " << f_ouvrage.reqVille () << " : " << f_ouvrage.reqEditeur () << ", " << f_ouvrage.reqAnnee () << ". " << f_ouvrage.reqIdentifiant () << ".";
  ASSERT_EQ (os.str (), f_ouvrage.reqReferenceFormatee ());
}


/**
 * \test Test de le methode de clonage
 *     Cas valide: L'ouvrage et son clone n'ont pas la meme adresse mais ils ont le meme formatage
 *     Cas invalide: Aucun
 */

TEST_F (unOuvrage, clone)
{
  biblio::Reference* OuvrageClone = f_ouvrage.clone ();
  ASSERT_NE (&f_ouvrage, OuvrageClone);
  ASSERT_EQ (f_ouvrage.reqReferenceFormatee (), (*OuvrageClone).reqReferenceFormatee ());
}
