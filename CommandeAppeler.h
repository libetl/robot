#include "Commande.h"

#ifndef COMMANDEAPPELER_H
#define COMMANDEAPPELER_H

#include "RobotEtat.h"

class CommandeAppeler : public Commande
{
  static CommandeAppeler cap ; 
  public:
  CommandeAppeler  () : Commande ("APPELER") {}
  ~CommandeAppeler () {}

  CommandeAppeler* clone () { 
    CommandeAppeler* comm = new CommandeAppeler () ; 
    comm->setParams (robot, vect, etat) ; 
    return comm ; }

  void execute () ; 
} ; 

#endif
