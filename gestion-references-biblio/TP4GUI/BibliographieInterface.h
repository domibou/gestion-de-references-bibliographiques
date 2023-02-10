/**
 * \file   BibliographieInterface.h
 * \brief  En-tete de l'interface graphique pour la fenetre BibliographieInterface
 * \author Dominic Boucher
 */

#ifndef _BIBLIOGRAPHIEINTERFACE_H
#define _BIBLIOGRAPHIEINTERFACE_H

#include "ui_BibliographieInterface.h"
#include "Bibliographie.h"

class BibliographieInterface : public QMainWindow
{
  Q_OBJECT
public:
  BibliographieInterface ();
  virtual ~BibliographieInterface ();
private:
  Ui::BibliographieInterface widget;
  biblio::Bibliographie m_bibliographie;
private slots:
  void dialogAjouterJournal ();
  void dialogAjouterOuvrage ();
  void dialogSupprimerReference ();
  std::string affichage () const;

};

#endif /* _BIBLIOGRAPHIEINTERFACE_H */
