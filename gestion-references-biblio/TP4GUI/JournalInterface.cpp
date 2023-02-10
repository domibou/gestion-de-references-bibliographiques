/**
 * \file   JournalInterface.cpp
 * \brief  Implantation de l'interface graphique JournalInterface
 * \author Dominic Boucher
 */

#include "JournalInterface.h"
#include "validationFormat.h"
#include <QMessageBox>


/**
 * \brief Constructeur de l'interface JournalInterface
 */

JournalInterface::JournalInterface ()
{
  widget.setupUi (this);
  widget.annee->setMaximum (2100);
}


/**
 * \brief Destructeur de l'interface JournalInterface
 */

JournalInterface::~JournalInterface () { }


/**
 * \brief Accesseur de l'auteur dans l'interface
 * \return texte de l'objet auteur
 */

QString
JournalInterface::reqAuteur () const
{
  return widget.auteur->text ();
}


/**
 * \brief Accesseur du titre dans l'interface
 * \return texte de l'objet titre
 */

QString
JournalInterface::reqTitre () const
{
  return widget.titre->text ();
}


/**
 * \brief Accesseur de l'annee dans l'interface
 * \return valeur de l'objet annee
 */

int
JournalInterface::reqAnnee () const
{
  return widget.annee->value ();
}


/**
 * \brief Accesseur de l'identifiant dans l'interface
 * \return texte de l'objet identifiant
 */

QString
JournalInterface::reqIdentifiant () const
{
  return widget.identifiant->text ();
}


/**
 * \brief Accesseur du nom dans l'interface
 * \return texte de l'objet nom
 */

QString
JournalInterface::reqNom () const
{
  return widget.nom->text ();
}


/**
 * \brief Accesseur du volume dans l'interface
 * \return valeur de l'objet volume
 */

int
JournalInterface::reqVolume () const
{
  return widget.volume->value ();
}


/**
 * \brief Accesseur du numero dans l'interface
 * \return valeur de l'objet numero
 */

int
JournalInterface::reqNumero () const
{
  return widget.numero->value ();
}


/**
 * \brief Accesseur de la page dans l'interface
 * \return valeur de l'objet page
 */

int
JournalInterface::reqPage () const
{
  return widget.page->value ();
}


void
JournalInterface::infoValide ()
{

  if (!util::validerFormatNom (reqAuteur ().toStdString ()))
    {
      QString messageErreur ("Format de l'auteur invalide");
      QMessageBox::information (this, "Erreur", messageErreur);
      return;
    }
  if (!util::validerFormatNom (reqTitre ().toStdString ()))
    {
      QString messageErreur ("Format du titre invalide");
      QMessageBox::information (this, "Erreur", messageErreur);
      return;
    }
  if (!(reqAnnee () > 0))
    {
      QString messageErreur ("L'annee doit être plus grande que 0");
      QMessageBox::information (this, "Erreur", messageErreur);
      return;
    }
  if (!util::validerCodeIssn (reqIdentifiant ().toStdString ()))
    {
      QString messageErreur ("Identifiant ISSN invalide");
      QMessageBox::information (this, "Erreur", messageErreur);
      return;
    }
  if (!util::validerFormatNom (reqNom ().toStdString ()))
    {
      QString messageErreur ("Format du nom invalide");
      QMessageBox::information (this, "Erreur", messageErreur);
      return;
    }
  if (!(reqVolume () > 0))
    {
      QString messageErreur ("Le volume doit être plus grand que 0");
      QMessageBox::information (this, "Erreur", messageErreur);
      return;
    }
  if (!(reqNumero () > 0))
    {
      QString messageErreur ("Le numéro doit être plus grand que 0");
      QMessageBox::information (this, "Erreur", messageErreur);
      return;
    }
  if (!(reqPage () > 0))
    {
      QString messageErreur ("Le numéro de page doit être plus grand que 0");
      QMessageBox::information (this, "Erreur", messageErreur);
      return;
    }
  else
    {
      accept ();
    }
}
