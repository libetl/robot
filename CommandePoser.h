#include "Commande.h"

#ifndef COMMANDEPOSER_H
#define COMMANDEPOSER_H

class CommandePoser : public Commande
{
  static CommandePoser cp ; 
  public:
  CommandePoser  () : Commande ("POSER") {}
  ~CommandePoser () {}

  CommandePoser* clone () { 
    CommandePoser* comm = new CommandePoser () ; 
    comm->setParams (robot, vect, etat) ; 
    return comm ; }

  void execute () ; 
} ; 

#endif
