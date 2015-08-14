#include "Commande.h"

#ifndef COMMANDEREPARTIR_H
#define COMMANDEREPARTIR_H
class CommandeRepartir : public Commande
{
  static CommandeRepartir cr ; 
  public:
  CommandeRepartir  () : Commande ("REPARTIR") {}
  ~CommandeRepartir () {}

  CommandeRepartir* clone () { 
    CommandeRepartir* comm = new CommandeRepartir () ; 
    comm->setParams (robot, vect, etat) ; 
    return comm ; }

  void execute () ; 
} ; 

#endif
