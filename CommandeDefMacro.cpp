#include "CommandeDefMacro.h"
#include "Client.h"

CommandeDefMacro CommandeDefMacro::cdm ;

void CommandeDefMacro::execute ()
{
  MSG(void  CommandeDefMacro::execute ())
  Client c (*robot) ; 
  string s = "" ; 
  string nom = vect->back () ; 
  MacroCommande* res = new MacroCommande () ; 

  while (s != "FINMACRO")
  {
    Commande* comm, *commClone ; 
    char* exec, *param ; 
    vector<string>* params2 ; 

    robot->Notifie () ; 
    c.ecran () ; 
    s = c.saisie () ; 
    c.nettoyerTrace () ;

    if (s != "FINMACRO")
    {
      params2 = new vector<string> () ; 
      exec = strtok ((char*)s.c_str (), " ") ; 
      while ((param = strtok (NULL, " ")))
        params2->push_back (param) ; 

      comm = Commande::get (exec) ; 

      if (comm != NULL)
      {
        commClone = comm->clone () ; 
        commClone->setParams (robot, params2, etat) ; 

        res->ajouterCommande (commClone) ; 
      }else

      robot->Notifie () ; 
    } 
  }
  (*Commande::macroCommandes) [nom] = res ; 
  res->verouiller () ; 
}
