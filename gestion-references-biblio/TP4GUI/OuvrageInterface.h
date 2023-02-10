/**
 * \file   OuvrageInterface.h
 * \brief  En-tete de l'interface graphique pour la fenetre OuvrageInterface
 * \author Dominic Boucher
 */

#ifndef _OUVRAGEINTERFACE_H
#define _OUVRAGEINTERFACE_H

#include "ui_OuvrageInterface.h"

class OuvrageInterface : public QDialog
{
  Q_OBJECT
public:
  OuvrageInterface ();
  virtual ~OuvrageInterface ();
  QString reqAuteur () const;
  QString reqTitre () const;
  int reqAnnee () const;
  QString reqIdentifiant () const;
  QString reqEditeur () const;
  QString reqVille () const;
private:
  Ui::OuvrageInterface widget;
private slots:
  void infoValide ();
};

#endif /* _OUVRAGEINTERFACE_H */
