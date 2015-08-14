#include "Commande.h"

#ifndef COMMANDEEPESEROBJET_H
#define COMMANDEEPESEROBJET_H
class CommandePeserObjet : public Commande
{
  static CommandePeserObjet cpo ; 
  public:
  CommandePeserObjet  () : Commande ("PESEROBJET") {}
  ~CommandePeserObjet () {}

  CommandePeserObjet* clone () { 
    CommandePeserObjet* comm = new CommandePeserObjet () ; 
    comm->setParams (robot, vect, etat) ; 
    return comm ; }

  void execute () ; 
} ; 

#endif
