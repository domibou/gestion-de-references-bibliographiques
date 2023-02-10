/**
 * \file   main.cpp
 * \brief  fichier principal de l'interface graphique
 * \author Dominic Boucher
 */

#include <QApplication>
#include "BibliographieInterface.h"
#include "Bibliographie.h"


int
main (int argc, char *argv[])
{
  QApplication app (argc, argv);

  BibliographieInterface bibliographieInterface;
  bibliographieInterface.show ();

  return app.exec ();

  // ISSN 1937-4771
  // ISBN 978-0-387-77591-3
}
