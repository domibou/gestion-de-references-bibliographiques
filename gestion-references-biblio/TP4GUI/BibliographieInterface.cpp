/**
 * \file   BibliographieInterface.cpp
 * \brief  Implantation de l'interface graphique BibliographieInterface
 * \author Dominic Boucher
 */

#include "BibliographieInterface.h"
#include "JournalInterface.h"
#include "OuvrageInterface.h"
#include "SupprimerReferenceInterface.h"
#include "Bibliographie.h"
#include "Journal.h"
#include "Ouvrage.h"
#include "ReferenceException.h"
#include <QMessageBox>


/**
 * \brief Constructeur de l'interface BibliographieInterface
 */

BibliographieInterface::BibliographieInterface () : m_bibliographie (biblio::Bibliographie ("References"))
{
  widget.setupUi (this);
  widget.affichage->setText (affichage ().c_str ());
}


/**
 * \brief Destructeur de l'interface BibliographieInterface permettant de liberer la memoire du vecteur de references
 */

BibliographieInterface::~BibliographieInterface ()
{
  m_bibliographie.viderReferences ();
}


void
BibliographieInterface::dialogAjouterJournal ()
{
  JournalInterface ajouterJournal;
  if (ajouterJournal.exec ())
    {
      biblio::Journal j (ajouterJournal.reqAuteur ().toStdString (),
                         ajouterJournal.reqTitre ().toStdString (),
                         ajouterJournal.reqAnnee (),
                         ajouterJournal.reqIdentifiant ().toStdString (),
                         ajouterJournal.reqNom ().toStdString (),
                         ajouterJournal.reqVolume (),
                         ajouterJournal.reqNumero (),
                         ajouterJournal.reqPage ());
      try
        {
          m_bibliographie.ajouterReference (j);
          widget.affichage->setText (affichage ().c_str ());
        }
      catch (ReferenceDejaPresenteException& e)
        {


          QString messageErreur (e.what ());
          QMessageBox::information (this, "Erreur", messageErreur);
        }
    }
}


void
BibliographieInterface::dialogAjouterOuvrage ()
{
  OuvrageInterface ajouterOuvrage;
  if (ajouterOuvrage.exec ())
    {
      biblio::Ouvrage o (ajouterOuvrage.reqAuteur ().toStdString (),
                         ajouterOuvrage.reqTitre ().toStdString (),
                         ajouterOuvrage.reqAnnee (),
                         ajouterOuvrage.reqIdentifiant ().toStdString (),
                         ajouterOuvrage.reqEditeur ().toStdString (),
                         ajouterOuvrage.reqVille ().toStdString ());
      try
        {
          m_bibliographie.ajouterReference (o);
          widget.affichage->setText (affichage ().c_str ());
        }
      catch (ReferenceDejaPresenteException& e)
        {


          QString messageErreur (e.what ());
          QMessageBox::information (this, "Erreur", messageErreur);
        }
    }
}


void
BibliographieInterface::dialogSupprimerReference ()
{
  SupprimerReferenceInterface supprimerReference;
  if (supprimerReference.exec ())
    {
      try
        {
          m_bibliographie.supprimerReference (supprimerReference.reqIdentifiantSupprimer ().toStdString ());
          widget.affichage->setText (affichage ().c_str ());
        }
      catch (ReferenceAbsenteException& e)
        {
          QString messageErreur (e.what ());
          QMessageBox::information (this, "Erreur", messageErreur);
        }
    }
}


std::string
BibliographieInterface::affichage () const
{
  return m_bibliographie.reqBibliographieFormatee ();
}
