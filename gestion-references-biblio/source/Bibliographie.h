/**
 * \file Bibliographie.h
 * \brief Interface de la classe Bibliographie
 * \author Dominic Boucher
 */

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include "Reference.h"
#ifndef BIBLIOGRAPHIE_H
#define BIBLIOGRAPHIE_H

/**
 * \class Bibliographie
 * \brief Classe permettant la creation d'une bibliographie de references
 */
namespace biblio
{

  class Bibliographie
  {
  public:
    Bibliographie (const std::string& p_nom);

    Bibliographie (const Bibliographie& p_bibliographie);
    ~Bibliographie ();
    Bibliographie& operator= (const Bibliographie& p_bibliographie);

    std::string reqNom () const;
    void ajouterReference (const biblio::Reference& p_nouvelleReference);
    void supprimerReference (const std::string& p_identifiant);
    std::string reqBibliographieFormatee () const;
    void viderReferences ();
    bool referenceEstDejaPresente (const Reference& p_reference) const;

  private:
    std::vector<biblio::Reference*> m_vReferences;
    std::string m_nom;
    void verifieInvariant () const;
    void copierReferences (const Bibliographie& p_bibliographie);

  };
}

#endif /* BIBLIOGRAPHIE_H */
