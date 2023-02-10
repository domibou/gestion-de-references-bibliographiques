/**
 * \file   Bibliographie.cpp
 * \brief  Implantation de la classe Bibliographie
 * \author Dominic Boucher
 */

#include "ContratException.h"
#include "Bibliographie.h"
#include "ReferenceException.h"


namespace biblio
{


  /**
   * \brief Constructeur de base de la classe Bibliographie
   * \param[in] p_nom Nom de la bibliographie
   */

  Bibliographie::Bibliographie (const std::string& p_nom) : m_nom (p_nom)
  {
    POSTCONDITION (m_nom == p_nom);

    INVARIANTS ();
  }


  /**
   * \brief Constructeur de copie de la classe Bibliographie
   * \param[in] p_bibliographie Bibliographie a copier
   */
  Bibliographie::Bibliographie (const Bibliographie& p_bibliographie)
  {
    m_nom = p_bibliographie.reqNom ();
    copierReferences (p_bibliographie);

  }


  /**
   * \brief Operateur d'assignation permettant de creer une bibliographie a partir d'une autre
   * \param[in] p_bibliographie Bibliographie a copier
   * \return Pointeur vers l'objet courant
   */

  Bibliographie& Bibliographie::operator= (const Bibliographie& p_bibliographie)
  {
    m_nom = p_bibliographie.reqNom ();
    viderReferences ();
    copierReferences (p_bibliographie);
    return *this;
    POSTCONDITION (p_bibliographie.reqNom () == m_nom);
  }


  /**
   * \brief Destructeur de la classe bibliographie permettant d'effacer les references contenues
   */

  Bibliographie::~Bibliographie ()
  {
    viderReferences ();
  }


  /**
   * \brief Accesseur du nom de la bibliographie
   * \return m_nom Nom de la bibliographie
   */

  std::string
  Bibliographie::reqNom () const
  {
    return m_nom;
  }


  /**
   * \brief Permet de verifier si la meme bibliographie est presente dans le vecteur de references
   * \param[in] p_identifiant Identifiant de la bibliographie
   * \return Booleen indiquant si la bibliographie est deja presente ou non
   */


  bool
  Bibliographie::referenceEstDejaPresente (const Reference& p_reference) const
  {
    for (std::vector<biblio::Reference*>::const_iterator iter = m_vReferences.begin (); iter != m_vReferences.end (); iter++)
      {
        if (**iter == p_reference)
          {
            return true;
          }
      }
    return false;
  }


  /**
   * \brief Permet d'ajouter une reference a la bibliographie
   * \param[in] p_nouvelleReference Reference a ajouter
   */

  void
  Bibliographie::ajouterReference (const biblio::Reference& p_nouvelleReference)
  {
    if (referenceEstDejaPresente (p_nouvelleReference))
      {
        throw ReferenceDejaPresenteException ("Reférénce déjà présente");
      }
    else
      {
        m_vReferences.push_back (p_nouvelleReference.clone ());
      }
  }


  /**
   * \brief Permet de supprimer une reference de la bibliographie
   * \param[in] p_identifiant Reference a supprimer
   */

  void
  Bibliographie::supprimerReference (const std::string& p_identifiant)
  {
    bool referenceTrouvee = false;
    for (std::vector<biblio::Reference*>::iterator iter = m_vReferences.begin (); iter != m_vReferences.end (); iter++)
      {
        if ((**iter).reqIdentifiant () == p_identifiant)
          {
            referenceTrouvee = true;
            m_vReferences.erase (iter);
            iter--;
          }
      }
    if (!referenceTrouvee)
      {
        throw (ReferenceAbsenteException ("Cette référence n'est pas dans la bibliographie"));
      }
  }


  /**
   * \brief Permet de formater les references contenues par la bibliographie
   * \return Objet string representant la bibliographie formatee
   */

  std::string
  Bibliographie::reqBibliographieFormatee () const
  {
    std::ostringstream os;
    os << "Bibliographie\n==================\n";
    for (int i = 0; i < m_vReferences.size (); i++)
      {
        os << "[" << i + 1 << "] " << m_vReferences.at (i)->reqReferenceFormatee () << "\n";
      }
    return os.str ();
  }


  /**
   * \brief Permet de copier les references d'une bibliographie vers une autre
   * \param[in] p_bibliographie Bibliographie contenant les references a copier
   * \return Objet string representant la bibliographie formatee
   */

  void
  Bibliographie::copierReferences (const Bibliographie& p_bibliographie)
  {
    for (int i = 0; i < p_bibliographie.m_vReferences.size (); i++)
      {
        ajouterReference (*p_bibliographie.m_vReferences[i]);

      }
  }


  /**
   * \brief Permet d'effacer les references de la bibliographie de la memoire
   */

  void
  Bibliographie::viderReferences ()
  {
    for (int i = 0; i < m_vReferences.size (); i++)
      {
        delete m_vReferences[i];
      }
    m_vReferences.clear ();
  }


  void
  Bibliographie::verifieInvariant () const
  {
    INVARIANT (!m_nom.empty ());
  }
}

