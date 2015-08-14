#include <map>
#include <vector>
#include "Robot.h"

#ifndef ROBOTETAT_H
#define ROBOTETAT_H

#include "Commande.h"

class Robot ; 

class RobotEtat {

  public:
  class AppelInterdit {} ; 
  static map<string, RobotEtat*>* etats ; 

  protected:
    string nomEtat ; 
    Robot* robot ; 
    AppelInterdit ai ; 
    bool chercherEtat (string e) ; 
    
  public:
    RobotEtat                                   () ; 
    virtual ~RobotEtat                          () ; 
    RobotEtat                     (string, Robot*) ; 
    RobotEtat         (string, Robot*, RobotEtat*) ; 
          string afficherEtat                   () ; 
            void setRobot                 (Robot*) ; 
            void executer (string, vector<string>) ;  
    virtual void avancer                        () ; 
    virtual void tourner                        () ; 
    virtual void saisir                         () ; 
    virtual void poser                          () ; 
    virtual void evaluerObstacle                () ; 
    virtual void evaluerObjet                   () ; 
    virtual void arreter                        () ; 
    virtual void repartir                       () ;   
} ;

#include "RobotEnRoute.h"
#include "RobotFige.h"

#endif
