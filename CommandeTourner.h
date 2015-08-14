#include "Commande.h"

#ifndef COMMANDETOURNER_H
#define COMMANDETOURNER_H

#include "RobotEtat.h"

class CommandeTourner : public Commande
{
  static CommandeTourner ct ; 
  public:
  CommandeTourner  () : Commande ("TOURNER") {}
  ~CommandeTourner () {}

  CommandeTourner* clone () { 
    CommandeTourner* comm = new CommandeTourner () ; 
    comm->setParams (robot, vect, etat) ; 
    return comm ; }

  void execute () ; 
} ; 

#endif
