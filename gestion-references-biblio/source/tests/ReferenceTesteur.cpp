/**
 * \file ReferenceTesteur.cpp
 * \brief Fichier contenant les tests de la classe Reference
 * \author Dominic Boucher
 */

#include <gtest/gtest.h>
#include "Reference.h"
#include "ContratException.h"

using namespace biblio;

/**
 * \class ReferenceTest
 * \brief Classe de test pour tester la classe abstraite Reference
 */


class ReferenceTest : public biblio::Reference
{

public:


  ReferenceTest (const std::string& p_auteur, const std::string& p_titre, int p_annee, const std::string& p_identifiant) :
  biblio::Reference (p_auteur, p_titre, p_annee, p_identifiant) { };


  ~ReferenceTest () { };


  std::string
  reqReferenceFormatee () const
  {
    return biblio::Reference::reqReferenceFormatee ();
  }


  biblio::Reference*
  clone () const
  {
    return new ReferenceTest (*this);
  }

} ;


/**
 * \test Test du constructeur
 *     Cas valide: m_auteur = "auteur", m_titre = "titre", m_annee = 1905
 *     Cas invalide: format de l'auteur invalide, format du titre invalide, annee <= 0
 */

TEST (ReferenceTest, ConstructeurValide)
{
  ReferenceTest r1 ("auteur", "titre", 1905, "ISBN 978-0-387-77591-3");
  ASSERT_EQ ("auteur", r1.reqAuteur ());
  ASSERT_EQ ("titre", r1.reqTitre ());
  ASSERT_EQ (1905, r1.reqAnnee ());

}


/**
 * \test Test du constructeur
 *     Cas valide: Aucun
 *     Cas invalide: Auteur invalide (format invalide, nom vide)
 */

TEST (ReferenceTest, ConstructeurAuteurInvalide)
{
  ASSERT_THROW (ReferenceTest r1 ("haute--heure", "titre", 1905, "ISBN 978-0-387-77591-3"), PreconditionException);
  ASSERT_THROW (ReferenceTest r1 ("", "titre", 1905, "ISBN 978-0-387-77591-3"), ContratException);
}


/**
 * \test Test du constructeur
 *     Cas valide: Aucun
 *     Cas invalide: Titre invalide (format invalide, nom vide)
 */

TEST (ReferenceTest, ConstructeurTitreInvalide)
{
  ASSERT_THROW (ReferenceTest r1 ("auteur", "tit--tres", 1905, "ISBN 978-0-387-77591-3"), PreconditionException);
  ASSERT_THROW (ReferenceTest r1 ("auteur", "", 1905, "ISBN 978-0-387-77591-3"), ContratException);
}


/**
 * \test Test du constructeur
 *     Cas valide: Aucun
 *     Cas invalide: Annee invalide
 */

TEST (ReferenceTest, ConstructeurAnneeInvalide)
{
  ASSERT_THROW (ReferenceTest r1 ("auteur", "titre", 0, "ISBN 978-0-387-77591-3"), PreconditionException);
}

/**
 * \brief Creation de la fixture utilisee pour les tests
 */


class uneReference : public ::testing::Test
{

public:


  uneReference () : f_reference ("auteur", "titre", 1905, "ISBN 978-0-387-77591-3") { };
  ReferenceTest f_reference;
} ;


/**
 * \test Test de l'accesseur de m_auteur
 *     Cas valide: m_auteur = "auteur"
 *     Cas invalide: Aucun
 */

TEST_F (uneReference, reqAuteur)
{
  ASSERT_EQ ("auteur", f_reference.reqAuteur ());
}


/**
 * \test Test de l'accesseur de m_titre
 *     Cas valide: m_auteur = "titre"
 *     Cas invalide: Aucun
 */

TEST_F (uneReference, reqTitre)
{
  ASSERT_EQ ("titre", f_reference.reqTitre ());
}


/**
 * \test Test de l'accesseur de m_annee
 *     Cas valide: m_annee = 1905
 *     Cas invalide: Aucun
 */

TEST_F (uneReference, reqAnnee)
{
  ASSERT_EQ (1905, f_reference.reqAnnee ());
}


/**
 * \test Test de l'accesseur de m_identifiant
 *     Cas valide: m_identifiant= "ISBN 978-0-387-77591-3"
 *     Cas invalide: Aucun
 */

TEST_F (uneReference, reqIdentifiant)
{
  ASSERT_EQ ("ISBN 978-0-387-77591-3", f_reference.reqIdentifiant ());
}


/**
 * \test Test du mutateur de m_annee
 *     Cas valide: La nouvelle annee est differente de l'ancienne annee
 *     Cas invalide: annee <= 0
 */

TEST_F (uneReference, asgAnneeValide)
{
  f_reference.asgAnnee (2005);
  ASSERT_EQ (2005, f_reference.reqAnnee ());
}


/**
 * \test Test du mutateur de m_annee
 *     Cas valide: La nouvelle annee est differente de l'ancienne annee
 *     Cas invalide: annee <= 0
 */

TEST_F (uneReference, asgAnneeInvalide)
{
  ASSERT_THROW (f_reference.asgAnnee (0), PreconditionException);
}


/**
 * \test Test de la methode de formatage
 *     Cas valide: La reference est formatee comme voulu
 *     Cas invalide: Aucun
 */

TEST_F (uneReference, reqReferenceFormatee)
{
  std::ostringstream os;
  os << f_reference.reqAuteur () << ". " << f_reference.reqTitre ();
  ASSERT_EQ (os.str (), f_reference.reqReferenceFormatee ());
}


/**
 * \test Test de l'operateur de comparaison
 *     Cas valide: L'auteur, le titre et l'annee sont egaux entre les deux references
 *     Cas invalide: Aucun
 */

TEST_F (uneReference, operateurComparaisonValide)
{
  ReferenceTest r2 ("auteur", "titre", 1905, "ISBN 978-0-387-77591-3");
  ASSERT_EQ (f_reference == r2, true);
}


TEST_F (uneReference, operateurComparaisonInvalide)
{
  ReferenceTest r2 ("haute-heure", "tit-tre", 2005, "ISBN 978-0-387-77591-3");
  ASSERT_EQ (f_reference == r2, false);
}