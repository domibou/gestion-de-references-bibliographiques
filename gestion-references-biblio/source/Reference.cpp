/**
 * \file   Reference.cpp
 * \brief  Implantation de la classe Reference
 * \author Dominic Boucher
 */
#include "validationFormat.h"
#include "ContratException.h"
#include <iostream>
#include <sstream>
#include "Reference.h"

namespace biblio
{


  Reference::Reference (const std::string& p_auteur, const std::string& p_titre, int p_annee, const std::string& p_identifiant) : m_auteur (p_auteur), m_titre (p_titre), m_annee (p_annee), m_identifiant (p_identifiant)
  {
    /**
     * \brief Constructeur de la classe Reference
     * \param[in] p_auteurs Chaine de caracteres representant l'auteur de la reference
     * \param[in] p_titre Chaine de caractere representant le titre de la reference
     * \param[in] p_annee Entier representant l'annee de publication de la reference
     * \param[in] p_identifiant Chaine de caracteres representant l'ISBN ou l'ISSN de la reference
     */
    PRECONDITION (util::validerFormatNom (p_auteur));
    PRECONDITION (util::validerFormatNom (p_titre));
    PRECONDITION (p_annee > 0);

    POSTCONDITION (m_auteur == p_auteur);
    POSTCONDITION (m_titre == p_titre);
    POSTCONDITION (m_annee == p_annee);
    POSTCONDITION (m_identifiant == p_identifiant);

    INVARIANTS ();
  }


  Reference::~Reference () { }


  std::string
  Reference::reqAuteur () const
  {
    /**
     * \brief Accesseur de l'attribut m_auteurs
     * \return m_auteurs Auteur de l'objet Reference
     */
    return m_auteur;
  }


  std::string
  Reference::reqTitre () const
  {
    /**
     * \brief Accesseur de l'attribut m_titre
     * \return m_titre Titre de l'objet Reference
     */
    return m_titre;
  }


  int
  Reference::reqAnnee () const
  {
    /**
     * \brief Accesseur de l'attribut m_annee
     * \param[out] m_annee Annee de publication de l'objet Reference
     */
    return m_annee;
  }


  std::string
  Reference::reqIdentifiant () const
  {
    /**
     * \brief Accesseur de l'attribut m_identifiant
     * \return m_identifiant Identifiant (ISBN ou ISSN) de l'objet Reference
     */
    return m_identifiant;
  }


  void
  Reference::asgAnnee (int p_annee)
  {
    /**
     * \brief Mutateur de l'attribut m_annee
     * \param[in] p_annee Entier representant l'annee de publication
     */
    PRECONDITION (p_annee > 0);
    m_annee = p_annee;
    POSTCONDITION (m_annee == p_annee);
    INVARIANTS ();
  }


  bool Reference::operator== (const Reference& p_reference) const
  {
    /**
     * \brief Methode de surcharge de l'operateur de comparaison
     * \return Booleen comparant l'auteur, le titre et l'annee de publication de deux objets Reference
     */
    return ((m_auteur == p_reference.m_auteur) && (m_titre == p_reference.m_titre) && (m_annee == p_reference.m_annee));
  }


  /**
   * \brief Permet de formater une reference
   * \return Objet string representant la reference formatee
   */

  std::string
  Reference::reqReferenceFormatee () const
  {
    std::ostringstream os;
    os << reqAuteur () << ". " << reqTitre ();
    return os.str ();
  }


  void
  biblio::Reference::verifieInvariant () const
  {
    INVARIANT (!m_auteur.empty ());
    INVARIANT (!m_titre.empty ());

  }
}