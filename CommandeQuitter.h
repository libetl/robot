#include "Commande.h"

#ifndef COMMANDEQUITTER_H
#define COMMANDEQUITTER_H
class CommandeQuitter : public Commande
{
  static CommandeQuitter cq ; 
  public:
  CommandeQuitter  () : Commande ("QUITTER") {}
  ~CommandeQuitter () {}

  CommandeQuitter* clone () { 
    CommandeQuitter* comm = new CommandeQuitter () ; 
    comm->setParams (robot, vect, etat) ; 
    return comm ; }

  void execute () ; 
} ; 

#endif
