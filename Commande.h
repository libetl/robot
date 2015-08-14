#ifndef COMMANDE_H
#define COMMANDE_H

#include <map>
#include <vector>
#include "Robot.h"

class Robot ; 

class MacroCommande ; 

class Commande 
{

  public:
  class CommandeInconnue {} ; 

  private:  
  static CommandeInconnue ci ; 
  static map<string, Commande*>* commandes ; 
  
  protected:
  static map<string, MacroCommande*>* macroCommandes ; 
  Robot* robot ; 
  RobotEtat* etat ; 
  vector<string>* vect ; 
  
  public:
  
  Commande () {} ; 
  
  Commande  (string) ; 
  virtual ~Commande () {}
  virtual void execute () {} ; 

  virtual Commande* clone () ; 

  void setParams (Robot*, vector<string>*, RobotEtat*) ; 

  static Commande* get (string) ; 

  int  getX (     ) { return robot->position.x  ; }
  void setX (int x) { robot->position.x = x     ; } 
  int  getY (     ) { return robot->position.y  ; }
  void setY (int y) { robot->position.y = y     ; }
  char getD (     ) { return robot->direction.d ; }
  void setD (int d) { robot->direction.d = d    ; }
  int  getO (     ) { return robot->objet.poids ; }
  void setO (int p) { srand (time (NULL)) ; robot->objet.poids = p ; }
  int  getH (     ) { return robot->obstacle.hauteur ; }
  void setH (int h) { srand (time (NULL)) ; robot->obstacle.hauteur = h ; }
  
} ; 

#include "MacroCommande.h"

#endif
