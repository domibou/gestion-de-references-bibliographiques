/**
 * \file   ReferenceException.h
 * \brief  Interface des classes d'exception
 * \author Dominic Boucher
 */

#ifndef REFERENCEEXCEPTION_H
#define REFERENCEEXCEPTION_H

#include <stdexcept>
#include <string>

/**
 * \class ReferenceException
 * \brief Classe d'exception pour les references
 */

class ReferenceException : public std::runtime_error
{
public:
  ReferenceException (const std::string& p_raison);
};

/**
 * \class ReferenceDejaPresenteException
 * \brief Exceptino soulevee dans le cas d'une reference deja presente dans un conteneur
 */

class ReferenceDejaPresenteException : public ReferenceException
{
public:
  ReferenceDejaPresenteException (const std::string& p_raison);
};

/**
 * \class ReferenceAbsenteException
 * \brief Exception soulevee dans le cas d'une reference absente d'un conteneur
 */

class ReferenceAbsenteException : public ReferenceException
{
public:
  ReferenceAbsenteException (const std::string& p_raison);
};
#endif /* REFERENCEEXCEPTION_H */

