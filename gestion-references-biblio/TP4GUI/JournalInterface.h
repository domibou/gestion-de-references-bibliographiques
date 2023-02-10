/**
 * \file   JournalInterface
 * \brief  En-tete de l'interface graphique pour la fenetre JournalInterface
 * \author Dominic Boucher
 */

#ifndef _JOURNALINTERFACE_H
#define _JOURNALINTERFACE_H

#include "ui_JournalInterface.h"

class JournalInterface : public QDialog
{
  Q_OBJECT
public:
  JournalInterface ();
  virtual ~JournalInterface ();
  QString reqAuteur () const;
  QString reqTitre () const;
  int reqAnnee () const;
  QString reqIdentifiant () const;
  QString reqNom () const;
  int reqVolume () const;
  int reqNumero () const;
  int reqPage () const;
private:
  Ui::JournalInterface widget;
private slots:
  void infoValide ();
};

#endif /* _JOURNALINTERFACE_H */
