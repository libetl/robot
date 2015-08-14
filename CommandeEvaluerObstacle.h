#include "Commande.h"

#ifndef COMMANDEEVALUEROBSTACLE_H
#define COMMANDEEVALUEROBSTACLE_H
class CommandeEvaluerObstacle : public Commande
{
  static CommandeEvaluerObstacle ceo ; 
  public:
  CommandeEvaluerObstacle  () : Commande ("EVALUEROBST") {}
  ~CommandeEvaluerObstacle () {}

  CommandeEvaluerObstacle* clone () { 
    CommandeEvaluerObstacle* comm = new CommandeEvaluerObstacle () ; 
    comm->setParams (robot, vect, etat) ; 
    return comm ; }

  void execute () ; 
} ; 

#endif
