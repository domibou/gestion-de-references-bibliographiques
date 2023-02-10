/**
 * \file   SupprimerReferenceInterface.cpp
 * \brief  Implantation de l'interface graphique SupprimerReferenceInterface
 * \author Dominic Boucher
 */

#include "SupprimerReferenceInterface.h"
#include "BibliographieInterface.h"
#include <QMessageBox>


/**
 * \brief Constructeur de l'interface SupprimerReferenceInterface
 */

SupprimerReferenceInterface::SupprimerReferenceInterface ()
{
  widget.setupUi (this);
}


/**
 * \brief Destructeur de l'interface SupprimerReferenceInterface
 */

SupprimerReferenceInterface::~SupprimerReferenceInterface () { }


/**
 * \brief Accesseur de l'identifiant a supprimer dans l'interface
 * \return texte de l'objet identifiantSupprimer
 */

QString
SupprimerReferenceInterface::reqIdentifiantSupprimer () const
{
  return widget.identifiantSupprimer->text ();
}


void
SupprimerReferenceInterface::confirmerSuppression ()
{
  QString Cancel ("Cancel");
  QString Supprimer ("Supprimer");
  int choix = QMessageBox::question (this, "confirmerSuppression", "Supprimer cette référence?", Cancel, Supprimer);
  switch (choix)
    {
      case 0:
        return;
      case 1:
        this->accept ();
    }
}