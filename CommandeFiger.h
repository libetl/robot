#include "Commande.h"

#ifndef COMMANDEFIGER_H
#define COMMANDEFIGER_H
class CommandeFiger : public Commande
{
  static CommandeFiger cf ; 
  public:
  CommandeFiger  () : Commande ("FIGER") {}
  ~CommandeFiger () {}

  CommandeFiger* clone () { 
    CommandeFiger* comm = new CommandeFiger () ; 
    comm->setParams (robot, vect, etat) ; 
    return comm ; }

  void execute () ; 
} ; 

#endif
