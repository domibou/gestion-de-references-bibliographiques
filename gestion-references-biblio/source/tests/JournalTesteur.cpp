/**
 * \file JournalTesteur.cpp
 * \brief Fichier contenant les tests de la classe Journal
 * \author Dominic Boucher
 */

#include <gtest/gtest.h>
#include "ContratException.h"
#include "Journal.h"
#include "Reference.h"
#include <sstream>

using namespace biblio;


/**
 * \test Test du constructeur
 *     Cas valide: m_nom = "nom", m_volume = 1, m_numero = 10, m_page = 120
 *     Cas invalide: p_volume <= 0, p_numero <= 0, p_page <= 0, p_identifiant non valide
 */


TEST (Journal, ConstructeurValide)
{
  Journal j1 ("auteur", "titre", 1905, "ISSN 1937-4771", "nom", 1, 10, 120);
  ASSERT_EQ ("ISSN 1937-4771", j1.reqIdentifiant ());
  ASSERT_EQ ("nom", j1.reqNom ());
  ASSERT_EQ (1, j1.reqVolume ());
  ASSERT_EQ (10, j1.reqNumero ());
  ASSERT_EQ (120, j1.reqPage ());

}


/**
 * \test Test du constructeur
 *     Cas valide: Aucun
 *     Cas invalide: ISSN invalide
 */

TEST (Journal, ConstructeurIdentifiantInvalide)
{
  ASSERT_THROW (Journal j1 ("auteur", "titre", 1905, "iessessenne 1010101", "nom", 1, 10, 120), PreconditionException);
}


/**
 * \test Test du constructeur
 *     Cas valide: Aucun
 *     Cas invalide: Volume invalide
 */

TEST (Journal, ConstructeurVolumeInvalide)
{
  ASSERT_THROW (Journal j1 ("auteur", "titre", 1905, "ISSN 1937-4771", "nom", 0, 10, 120), PreconditionException);
}


/**
 * \test Test du constructeur
 *     Cas valide: Aucun
 *     Cas invalide: Numero invalide
 */

TEST (Journal, ConstructeurNumeroInvalide)
{
  ASSERT_THROW (Journal j1 ("auteur", "titre", 1905, "ISSN 1937-4771", "nom", 1, 0, 120), PreconditionException);
}


/**
 * \test Test du constructeur
 *     Cas valide: Aucun
 *     Cas invalide: Page invalide
 */

TEST (Journal, ConstructeurPageInvalide)
{
  ASSERT_THROW (Journal j1 ("auteur", "titre", 1905, "ISSN 1937-4771", "nom", 1, 10, 0), PreconditionException);
}


/**
 * \test Test du constructeur
 *     Cas valide: Aucun
 *     Cas invalide: Nom invalide
 */

TEST (Journal, ConstructeurNomInvalide)
{
  ASSERT_THROW (Journal j1 ("auteur", "titre", 1905, "ISSN 1937-4771", "", 1, 10, 120), ContratException);
}

/**
 * \brief Creation de la fixture utilisee pour les tests
 */

class unJournal : public ::testing::Test
{

public:


  unJournal () : f_journal ("auteur", "titre", 1905, "ISSN 1937-4771", "nom", 1, 10, 120) { };
  Journal f_journal;
} ;


/**
 * \test Test de l'accesseur du nom
 *     Cas valide: m_nom = "nom"
 *     Cas invalide: Aucun
 */

TEST_F (unJournal, reqNom)
{
  ASSERT_EQ ("nom", f_journal.reqNom ());
}


/**
 * \test Test de l'accesseur du volume
 *     Cas valide: m_volume = 1
 *     Cas invalide: Aucun
 */

TEST_F (unJournal, reqVolume)
{
  ASSERT_EQ (1, f_journal.reqVolume ());
}


/**
 * \test Test de l'accesseur du numero
 *     Cas valide: m_numero = 10
 *     Cas invalide: Aucun
 */

TEST_F (unJournal, reqNumero)
{
  ASSERT_EQ (10, f_journal.reqNumero ());
}


/**
 * \test Test de l'accesseur de la page
 *     Cas valide: m_page = 120
 *     Cas invalide: Aucun
 */

TEST_F (unJournal, reqPage)
{
  ASSERT_EQ (120, f_journal.reqPage ());
}


/**
 * \test Test de la methode de formatage
 *     Cas valide: le journal est formate comme voulu
 *     Cas invalide: Aucun
 */

TEST_F (unJournal, reqReferenceFormatee)
{
  std::ostringstream os;
  os << f_journal.reqAuteur () << ". " << f_journal.reqTitre () << ". " << f_journal.reqNom () << ", vol. " <<
          f_journal.reqVolume () << ", no. " << f_journal.reqNumero () << ", pp. " << f_journal.reqPage () << ", " << f_journal.reqAnnee () << ". " << f_journal.reqIdentifiant () << ".";
  ASSERT_EQ (os.str (), f_journal.reqReferenceFormatee ());
}


/**
 * \test Test de le methode de clonage
 *     Cas valide: Le journal et son clone n'ont pas la meme adresse mais ils ont le meme formatage
 *     Cas invalide: Aucun
 */

TEST_F (unJournal, clone)
{
  biblio::Reference* JournalClone = f_journal.clone ();
  ASSERT_NE (&f_journal, JournalClone);
  ASSERT_EQ (f_journal.reqReferenceFormatee (), (*JournalClone).reqReferenceFormatee ());
}


