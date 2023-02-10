/**
 * \file   Ouvrage.h
 * \brief  Interface de la class Ouvrage
 * \author Dominic Boucher
 */

#include "Reference.h"
#ifndef OUVRAGE_H
#define OUVRAGE_H

/**
 * \class Ouvrage
 * \brief Classe representant une reference de type ouvrage
 */
namespace biblio
{

  class Ouvrage : public biblio::Reference
  {
  public:
    Ouvrage (const std::string& p_auteurs, const std::string& p_titre, int p_annee, const std::string& p_identifiant, const std::string& m_editeur, const std::string& m_ville);
    std::string reqEditeur () const;
    std::string reqVille () const;
    virtual std::string reqReferenceFormatee () const;
    virtual Reference* clone () const;
  private:
    std::string m_editeur;
    std::string m_ville;
    void verifieInvariant () const;

  };
}
#endif /* OUVRAGE_H */
