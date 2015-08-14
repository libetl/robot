#include "Commande.h"
#include "Client.h"

#ifndef COMMANDEDEFMACRO_H
#define COMMANDEDEFMACRO_H

#include "RobotEtat.h"

class CommandeDefMacro : public Commande
{
  static CommandeDefMacro cdm ; 
  public:
  CommandeDefMacro  () : Commande ("DEFMACRO") {}
  ~CommandeDefMacro () {}

  CommandeDefMacro* clone () { 
    CommandeDefMacro* comm = new CommandeDefMacro () ; 
    comm->setParams (robot, vect, etat) ; 
    return comm ; }

  void execute () ; 
} ; 

#endif
