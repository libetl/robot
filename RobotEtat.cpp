#include "RobotEtat.h"

map<string, RobotEtat*>* RobotEtat::etats ;

RobotEtat::RobotEtat ()
{
  MSG(RobotEtat::RobotEtat ())
}

RobotEtat::~RobotEtat ()
{
  MSG(RobotEtat::~RobotEtat ())  
}

RobotEtat::RobotEtat (string s, Robot* r, RobotEtat* re)
{
  MSG(RobotEtat::RobotEtat (string, Robot*, RobotEtat*))
  robot = r ; 
  nomEtat = s ; 
  if (RobotEtat::etats == NULL)
    RobotEtat::etats = new map<string, RobotEtat*> () ; 
  (*RobotEtat::etats) [s] = re ; 
}

RobotEtat::RobotEtat (string s, Robot* r)
{
  MSG(RobotEtat::RobotEtat (string, Robot*))
  robot = r ; 
  nomEtat = s ; 
  (*RobotEtat::etats) [s] = this ; 
}

void RobotEtat::setRobot (Robot* r)
{
  MSG(void RobotEtat::setRobot (Robot*))
  robot = r ; 
}

string RobotEtat::afficherEtat     ()
{
  MSG(void RobotEtat::afficherEtat ())
  return nomEtat ; 
}

void RobotEtat::executer (string s, vector<string> v)
{
  MSG(void RobotEtat::executer (string, vector<string>))
  Commande::get (s)->setParams (robot, &v, this) ; 
  Commande::get (s)->execute () ; 
} 

void RobotEtat::avancer          () 
{
  MSG(void RobotEtat::avancer ())
  throw (ai) ; 
}
  
void RobotEtat::tourner          () 
{
  MSG(void RobotEtat::tourner ())
  throw (ai) ; 
}
  
void RobotEtat::saisir           () 
{
  MSG(void RobotEtat::saisir ())
  throw (ai) ; 
}
  
void RobotEtat::poser            () 
{
  MSG(void RobotEtat::poser ())
  throw (ai) ; 
}
  
void RobotEtat::evaluerObstacle  () 
{
  MSG(void RobotEtat::evaluerObstacle ())
  throw (ai) ; 
}
  
void RobotEtat::evaluerObjet     () 
{
  MSG(void RobotEtat::evaluerObjet ())
  throw (ai) ; 
}
  
void RobotEtat::arreter          () 
{
  MSG(void RobotEtat::arreter ())
  throw (ai) ; 
}
  
void RobotEtat::repartir         () 
{
  MSG(void RobotEtat::repartir ())
  throw (ai) ; 
}

bool RobotEtat::chercherEtat (string e) 
{
  MSG(void RobotEtat::chercherEtat (string))
  for (map<string, RobotEtat*>::iterator it =  RobotEtat::etats->begin () ; 
                                         it != RobotEtat::etats->end   () ; it++)
  {
    if (it->first == e)
      return true ; 
  }
  return false ; 
}
