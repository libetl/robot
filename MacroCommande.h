#ifndef MACROCOMMANDE_H
#define MACROCOMMANDE_H

#include "Commande.h"
#include <vector>


class MacroCommande : public Commande
{
  private: 
  vector<Commande*>* commandesMacro ; 
  bool verouille ; 

  public:
  MacroCommande () : commandesMacro (new vector<Commande*> ()), verouille (false) {} ; 
  void ajouterCommande (Commande*) ; 
  void verouiller () ; 

  MacroCommande* clone () { 
    MacroCommande* comm = new MacroCommande () ; 
    comm->setParams (robot, vect, etat) ; 
    return comm ; }

  void execute    () ; 
} ; 

#endif
