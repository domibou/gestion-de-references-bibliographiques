/**
 * \file   ReferenceException.cpp
 * \brief  Implantation des classes d'exception
 * \author Dominic Boucher
 */

#include "ReferenceException.h"


ReferenceException::ReferenceException (const std::string& p_raison) : std::runtime_error (p_raison) { }


ReferenceDejaPresenteException::ReferenceDejaPresenteException (const std::string& p_raison) : ReferenceException (p_raison) { }


ReferenceAbsenteException::ReferenceAbsenteException (const std::string& p_raison) : ReferenceException (p_raison) { }