#include "Commande.h"

map<string, Commande*>* Commande::commandes ; 
map<string, MacroCommande*>* Commande::macroCommandes ; 


Commande::Commande (string s)
{
  MSG(Commande::Commande (string))
  if (commandes == NULL)
    Commande::commandes = new map<string, Commande*> () ; 
  if (macroCommandes == NULL)
    Commande::macroCommandes = new map<string, MacroCommande*> () ; 

  if ((*Commande::commandes) [s] == NULL) 
    (*Commande::commandes) [s] = this ; 
} 

Commande* Commande::clone ()
{
  MSG(Commande* Commande::clone ())
  vector<string>* vect2 ; 
  Commande* comm = new Commande () ; 
  vect2 = new vector<string> () ; 
  for (unsigned int i = 0 ; i < vect->size () ; i++)
    (*vect2) [i] = (*vect) [i] ; 
  comm->setParams (robot, vect2, etat) ; 
  return comm ; 
}

void Commande::setParams (Robot* r, vector<string>* v, RobotEtat* e) 
{ 
  MSG(void Commande::setParams (Robot*, vector<string>*, RobotEtat*))
  robot = r ; 
  vect  = v ; 
  etat  = e ; 
}

Commande* Commande::get (string s)
{
  MSG(Commande* Commande::get (string s))
  Commande* comm = (*Commande::commandes) [s] ; 
  if (comm == NULL) throw (ci) ; 
  return comm ; 
}
