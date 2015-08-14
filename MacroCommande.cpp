#include "MacroCommande.h"

void MacroCommande::ajouterCommande (Commande* c)
{
  MSG(void MacroCommande::ajouterCommande (Commande*))
  if (!verouille)
  {
    commandesMacro->push_back (c) ; 
  }
}

void MacroCommande::verouiller ()
{
  MSG(void MacroCommande::verouiller ())
  verouille = true ; 
}

void MacroCommande::execute ()
{
  MSG(void MacroCommande::executer ())
  for (vector<Commande*>::iterator it  = commandesMacro->begin () ; 
                                   it != commandesMacro->end   () ; it++)
  {
    ((Commande*)*it)->execute () ; 
  }
}
