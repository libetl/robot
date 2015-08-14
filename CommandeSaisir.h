#include "Commande.h"

#ifndef COMMANDESAISIR_H
#define COMMANDESAISIR_H

class CommandeSaisir : public Commande
{
  static CommandeSaisir cs ; 
  public:
  CommandeSaisir  () : Commande ("SAISIR") {}
  ~CommandeSaisir () {}

  CommandeSaisir* clone () { 
    CommandeSaisir* comm = new CommandeSaisir () ; 
    comm->setParams (robot, vect, etat) ; 
    return comm ; }

  void execute () ; 
} ; 

#endif
