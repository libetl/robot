#include "Commun.h"
#include "Position.h"
#include "Direction.h"
#include "Commande.h"
#include "Objet.h"
#include "Obstacle.h"
#include "RobotStruct.h"

#ifndef ROBOT_H
#define ROBOT_H 

#include "RobotSujet.h"

class RobotEtat ; 
class RobotSujet ; 
class RobotALarretAVide ; 

class Robot : public RobotSujet 
{

  private:
    bool arret ;
    Position position ;
    Direction direction ; 
    Objet objet ; 
    Obstacle obstacle ; 
    RobotEtat* etat ; 
    
  public:
    Robot () ; 
    RobotStruct acqEtat    () ;  
    void afficherEtat      () ;  
    void executer    (string) ; 
    void avancer           () ; 
    void tourner           () ; 
    void saisir            () ; 
    void poser             () ; 
    void evaluerObstacle   () ; 
    void evaluerObjet      () ; 
    void arreter           () ; 
    void repartir          () ; 
    void setEtat (RobotEtat*) ; 
  friend class Commande ;  
} ;

#include "RobotEtat.h"
#include "RobotALarretAVide.h"

#endif
