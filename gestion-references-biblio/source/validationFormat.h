/**
 * \file validationFormat.h
 * \brief Prototypes des fonctions de validation de validerFormat.cpp
 * \author Dominic Boucher
 */

#include <string>
#ifndef VALIDATIONFORMAT_H
#define VALIDATIONFORMAT_H

namespace util
{

  bool validerFormatNom (const std::string& p_issn);
  bool validerCodeIssn (const std::string& p_issn);
  bool validerCodeIsbn (const std::string& p_isbn);
  bool validerNombre (const int nombre);
}


#endif /* VALIDATIONFORMAT_H */


