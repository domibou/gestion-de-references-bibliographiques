/**
 * \file   Reference.h
 * \brief  Interface de la class Reference
 * \author Dominic Boucher
 */

#include <string>
#ifndef REFERENCE_H
#define REFERENCE_H

/**
 * \class Reference
 * \brief Classe abstraite representant une reference
 */

namespace biblio
{

  class Reference
  {
  public:
    Reference (const std::string& p_auteur, const std::string& p_titre, int p_annee, const std::string& p_identifiant);
    virtual ~Reference ();
    std::string reqAuteur () const;
    std::string reqTitre () const;
    int reqAnnee () const;
    std::string reqIdentifiant () const;
    void asgAnnee (int p_annee);
    virtual std::string reqReferenceFormatee () const = 0;
    virtual Reference* clone () const = 0;
    bool operator== (const Reference& p_reference) const;

  private:
    std::string m_auteur;
    std::string m_titre;
    int m_annee;
    std::string m_identifiant;
    void verifieInvariant () const;

  };
}
#endif /* REFERENCE_H */
