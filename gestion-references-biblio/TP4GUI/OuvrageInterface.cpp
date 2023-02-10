/**
 * \file   OuvrageInterface.cpp
 * \brief  Implantation de l'interface graphique OuvrageInterface
 * \author Dominic Boucher
 */

#include "OuvrageInterface.h"
#include "validationFormat.h"
#include <QMessageBox>


/**
 * \brief Constructeur de l'interface OuvrageInterface
 */

OuvrageInterface::OuvrageInterface ()
{
  widget.setupUi (this);
  widget.annee->setMaximum (2100);
}


/**
 * \brief Destructeur de l'inteface OuvrageInterface
 */

OuvrageInterface::~OuvrageInterface () { }


/**
 * \brief Accesseur de l'auteur dans l'interface
 * \return texte de l'objet auteur
 */

QString
OuvrageInterface::reqAuteur () const
{
  return widget.auteur->text ();
}


/**
 * \brief Accesseur du titre dans l'interface
 * \return texte de l'objet titre
 */

QString
OuvrageInterface::reqTitre () const
{
  return widget.titre->text ();
}


/**
 * \brief Accesseur de l'annee dans l'interface
 * \return valeur de l'objet annee
 */

int
OuvrageInterface::reqAnnee () const
{
  return widget.annee->value ();
}


/**
 * \brief Accesseur de l'identifiant dans l'interface
 * \return texte de l'objet identifiant
 */

QString
OuvrageInterface::reqIdentifiant () const
{
  return widget.identifiant->text ();
}


/**
 * \brief Accesseur de l'editeur dans l'interface
 * \return texte de l'objet editeur
 */

QString
OuvrageInterface::reqEditeur () const
{
  return widget.editeur->text ();
}


/**
 * \brief Accesseur de la ville dans l'interface
 * \return texte de l'objet ville
 */

QString
OuvrageInterface::reqVille () const
{
  return widget.ville->text ();
}


void
OuvrageInterface::infoValide ()
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
  if (!util::validerCodeIsbn (reqIdentifiant ().toStdString ()))
    {
      QString messageErreur ("Identifiant ISBN invalide");
      QMessageBox::information (this, "Erreur", messageErreur);
      return;
    }
  if (!util::validerFormatNom (reqEditeur ().toStdString ()))
    {
      QString messageErreur ("Format de l'éditeur invalide");
      QMessageBox::information (this, "Erreur", messageErreur);
      return;
    }
  if (!util::validerFormatNom (reqVille ().toStdString ()))
    {
      QString messageErreur ("Format de la ville invalide");
      QMessageBox::information (this, "Erreur", messageErreur);
      return;
    }
  else
    {
      accept ();
    }
}
