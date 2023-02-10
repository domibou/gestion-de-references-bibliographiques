/**
 * \file   Ouvrage.cpp
 * \brief  Implantation de la classe Ouvrage
 * \author Dominic Boucher
 */
#include "validationFormat.h"
#include "ContratException.h"
#include "Ouvrage.h"
#include <string>
#include <iostream>
#include <sstream>

namespace biblio
{


  /**
   * \brief Constructeur de la classe Ouvrage
   * \param[in] p_auteur Auteur de l'ouvrage
   * \param[in] p_titre Titre de l'ouvrage
   * \param[in] p_annee Annee de publication de l'ouvrage
   * \param[in] p_identifiant ISBN de l'ouvrage
   * \param[in] p_editeur Editeur de l'ouvrage
   * \param[in] p_ville Ville de publication de l'ouvrage
   */

  Ouvrage::Ouvrage (const std::string& p_auteur, const std::string& p_titre, int p_annee, const std::string& p_identifiant, const std::string& p_editeur, const std::string& p_ville) : biblio::Reference (p_auteur, p_titre, p_annee, p_identifiant), m_editeur (p_editeur), m_ville (p_ville)
  {
    PRECONDITION (util::validerFormatNom (p_editeur));
    PRECONDITION (util::validerFormatNom (p_ville));
    PRECONDITION (util::validerCodeIsbn (p_identifiant));

    POSTCONDITION (m_editeur == p_editeur);
    POSTCONDITION (m_ville == p_ville);

    INVARIANTS ();
  }


  /**
   * \brief Accesseur de l'editeur de l'ouvrage
   * \return m_editeur Editeur de l'ouvrage
   */

  std::string
  Ouvrage::reqEditeur () const
  {
    return m_editeur;
  }


  /**
   * \brief Accesseur de la ville de publication de l'ouvrage
   * \return m_ville Ville de publication de l'ouvrage
   */

  std::string
  Ouvrage::reqVille () const
  {
    return m_ville;
  }


  /**
   * \brief Permet de formater un ouvrage
   * \return Objet string contenant l'ouvrage formate
   */

  std::string
  Ouvrage::reqReferenceFormatee () const
  {
    std::ostringstream os;
    os << reqAuteur () << ". " << reqTitre () << ". " << reqVille () << " : " << reqEditeur () << ", " << reqAnnee () << ". " << reqIdentifiant () << ".";
    return os.str ();
  }


  /**
   * \brief Permet de copier un objet ouvrage sur le tas
   * \return Pointeur vers l'ouvrage courant sur le tas
   */


  biblio::Reference*
  Ouvrage::clone () const
  {
    return new Ouvrage (*this);
  }


  void
  Ouvrage::verifieInvariant () const
  {
    INVARIANT (!m_editeur.empty ());
    INVARIANT (!m_ville.empty ());
  }
}
