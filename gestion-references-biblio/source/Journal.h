/**
 * \file   Journal.h
 * \brief  Interface de la class Journal
 * \author Dominic Boucher
 */

#include "Reference.h"
#ifndef JOURNAL_H
#define JOURNAL_H


/**
 * \class Journal
 * \brief Classe representant une reference de type journal
 */
namespace biblio
{

  class Journal : public biblio::Reference
  {
  public:
    Journal (const std::string& p_auteurs, const std::string& p_titre, int p_annee, const std::string& p_identifiant, const std::string& m_nom, int m_volume, int numero, int page);
    std::string reqNom () const;
    int reqVolume () const;
    int reqNumero () const;
    int reqPage () const;
    virtual std::string reqReferenceFormatee () const;
    virtual Reference* clone () const;

  private:
    std::string m_nom;
    int m_volume;
    int m_numero;
    int m_page;
    void verifieInvariant () const;
  };
}
#endif /* JOURNAL_H */
