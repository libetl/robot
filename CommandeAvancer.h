#include "Commande.h"

#ifndef COMMANDEAVANCER_H
#define COMMANDEAVANCER_H

class CommandeAvancer : public Commande
{
  static CommandeAvancer ca ; 
  public:
  CommandeAvancer  () : Commande ("AVANCER") {}
  ~CommandeAvancer () {}

  CommandeAvancer* clone () { 
    CommandeAvancer* comm = new CommandeAvancer () ; 
    comm->setParams (robot, vect, etat) ; 
    return comm ; }

  void execute () ; 
} ; 

#endif
