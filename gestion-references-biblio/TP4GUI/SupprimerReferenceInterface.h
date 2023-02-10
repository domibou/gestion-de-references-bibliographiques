/**
 * \file   SupprimerReferenceInterface.h
 * \brief  En-tete de l'interface graphique pour la fenetre SupprimerReferenceInterface
 * \author Dominic Boucher
 */

#ifndef _SUPPRIMERREFERENCEINTERFACE_H
#define _SUPPRIMERREFERENCEINTERFACE_H

#include "ui_SupprimerReferenceInterface.h"

class SupprimerReferenceInterface : public QDialog
{
  Q_OBJECT
public:
  SupprimerReferenceInterface ();
  virtual ~SupprimerReferenceInterface ();
  QString reqIdentifiantSupprimer () const;
private:
  Ui::SupprimerReferenceInterface widget;
private slots:
  void confirmerSuppression ();
};

#endif /* _SUPPRIMERREFERENCEINTERFACE_H */
