#include "Robot.h"
#include "RobotObservateurConcret.h"
#include <vector>

Robot::Robot () : RobotSujet ()
{
  MSG(Robot::Robot ()) ; 
  direction.d = 'e' ; 
  position.x  =  0  ; 
  position.y  =  0  ; 
  objet.poids =  0  ; 
  obstacle.hauteur = 0 ; 
  Attache (new RobotObservateurConcret (this)) ; 
  setEtat ((*RobotEtat::etats) ["ALarretAVide"]) ; 
}

RobotStruct Robot::acqEtat     () 
{
  MSG(void Robot::acqEtat ())
  static RobotStruct e ; 
  e.p   = position  ; 
  e.d   = direction ; 
  e.obs = obstacle  ;
  e.o   = objet     ; 
  e.e   = etat->afficherEtat () ; 
  return e ; 
}

void Robot::afficherEtat       ()
{
  MSG(void Robot::afficherEtat ())
  cout << "Etat courant : \"" << etat->afficherEtat () << "\"" << endl ; 
} 

void Robot::executer    (string s)
{
  MSG(void Robot::executer (string))
  if (s != "")
  {
    char* exec, *param ; 
    vector<string> params ; 
    params = vector<string> () ; 
    exec = strtok ((char*)s.c_str (), " ") ; 
    while ((param = strtok (NULL, " ")))
      params.push_back (param) ; 
    etat->executer (exec, params) ; 
  }
  Notifie () ; 
}

void Robot::avancer          () 
{
  MSG(void Robot::avancer ())
  etat->avancer () ; 
}
  
void Robot::tourner          () 
{
  MSG(void Robot::tourner ())
  etat->tourner () ; 
}
  
void Robot::saisir           () 
{
  MSG(void Robot::saisir ())
  etat->saisir () ; 
}
  
void Robot::poser            () 
{
  MSG(void Robot::poser ())
  etat->poser () ; 
}
  
void Robot::evaluerObstacle  () 
{
  MSG(void Robot::evaluerObstacle ())
  etat->evaluerObstacle () ; 
}
  
void Robot::evaluerObjet     () 
{
  MSG(void Robot::evaluerObjet ())
  etat->evaluerObjet () ; 
}
  
void Robot::arreter          () 
{
  MSG(void Robot::arreter ())
  etat->arreter () ; 
}
  
void Robot::repartir         () 
{
  MSG(void Robot::repartir ())
  etat->repartir () ; 
}

void Robot::setEtat (RobotEtat* e)
{
  MSG(void Robot::setEtat (RobotEtat*))
  etat = e ; 
  etat->setRobot (this) ; 
}
