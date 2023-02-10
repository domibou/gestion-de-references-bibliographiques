/**
 * \file   Journal.cpp
 * \brief  Implantation de la classe Journal
 * \author Dominic Boucher
 */

#include "validationFormat.h"
#include "ContratException.h"
#include "Journal.h"
#include <string>
#include <iostream>
#include <sstream>

namespace biblio
{


  /**
   * \brief Constructeur de la classe Journal
   * \param[in] p_auteur Auteur du journal
   * \param[in] p_titre Titre du journal
   * \param[in] p_annee Annee de publication du journal
   * \param[in] p_identifiant ISSN du journal
   * \param[in] p_nom Nom du journal
   * \param[in] p_volume Volume du journal
   * \param[in] p_numero Numero du journal
   * \param[in] p_page Page ou commence le journal
   */

  Journal::Journal (const std::string& p_auteur, const std::string& p_titre, int p_annee, const std::string& p_identifiant, const std::string& p_nom, int p_volume, int p_numero, int p_page) : biblio::Reference (p_auteur, p_titre, p_annee, p_identifiant), m_nom (p_nom), m_volume (p_volume), m_numero (p_numero), m_page (p_page)
  {
    PRECONDITION (p_volume > 0);
    PRECONDITION (p_numero > 0);
    PRECONDITION (p_page > 0);
    PRECONDITION (util::validerFormatNom (p_nom));
    PRECONDITION (util::validerCodeIssn (p_identifiant));

    POSTCONDITION (m_nom == p_nom);
    POSTCONDITION (m_volume == p_volume);
    POSTCONDITION (m_numero == p_numero);
    POSTCONDITION (m_page == p_page);

    INVARIANTS ();
  }


  /**
   * \brief Accesseur du nom du journal
   * \return m_nom Nom du journal
   */

  std::string
  Journal::reqNom () const
  {
    return m_nom;
  }


  /**
   * \brief Accesseur du volume du journal
   * \return m_volume Volume du journal
   */

  int
  Journal::reqVolume () const
  {
    return m_volume;
  }


  /**
   * \brief Accesseur du numero du journal
   * \return m_numero Numero du journal
   */


  int
  Journal::reqNumero () const
  {
    return m_numero;
  }


  /**
   * \brief Accesseur de la page ou commence le journal
   * \return m_page Page ou commence le journal
   */

  int
  Journal::reqPage () const
  {
    return m_page;
  }


  /**
   * \brief Permet de formater un journal
   * \return objet string contenant le journal formate
   */


  std::string
  Journal::reqReferenceFormatee () const
  {
    std::ostringstream os;
    os << biblio::Reference::reqReferenceFormatee () << ". " << reqNom () << ", vol. " << reqVolume () << ", no. " <<  reqNumero () << ", pp. " << reqPage () << ", " << reqAnnee () << ". " << reqIdentifiant () << ".";
    return os.str ();

  }


  /**
   * \brief Permet de copier un objet journal sur le tas
   * \return Pointeur vers l'objet journal courant sur le tas
   */


  biblio::Reference*
  Journal::clone () const
  {
    return new Journal (*this);
  }


  void
  Journal::verifieInvariant () const
  {
    INVARIANT (!m_nom.empty ());

  }
}

