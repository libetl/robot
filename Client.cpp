#include "Client.h"

void Client::initialiser ()
{
  cout << "\033[2J" ; 
  cout << "\033[9;0H\033[1;36;43m" << endl ; 
  for(unsigned int i = 0  ; i < 23          ; i++) 
    cout << "                                                                      " 
         << "          " << endl ; 
  cout << "\033[10;0H" ; 
  r.Notifie () ; 
}

void Client::ecran ()
{
    cout << "\033[0;0H" ; 
    cout << "\033[1;37;40m__________________                                  "
         << "                            "  << endl ; 
    cout << "|Gestion de Robot|                                  "
         << "                            "  << endl ; 
    cout << "\\________________/                                  "  << endl ; 
    cout << "                                                    " << endl ; 
    cout << "Votre commande :                                    " << endl ; 
    cout << "                                                    " << endl ; 
    cout << "                                                    " << endl ; 
    cout << "\033[8;0H" ; 
    cout << "                                                                 " 
         << "               " << endl ; 
    cout << "\033[1;36;41mTrace :                                                          " 
         << "               " << endl ; 
    cout << "\033[6;0H\033[1;36;44m                                                   " << endl ; 
    cout << "\033[5;0H" << endl ; 
}

string Client::saisie ()
{
  cout << "\033[6;0H\033[1;36;44m                                                   " << endl ; 
  cout << "\033[5;0H" << endl ; 
  getline (cin, n) ;
  for(unsigned int i = 0  ; i < n.length () ; i++) n [i] = toupper (n [i]) ;
  cout << "\033[9;0H\033[1;36;43m" << endl ; 
  return n ; 
}

void Client::nettoyerTrace ()
{
  for(unsigned int i = 0  ; i < 23          ; i++) 
    cout << "                                                                      " 
         << "          " << endl ; 

  cout << "\033[10;0H" ; 
}

void Client::traitementCommande ()
{
  try
  {
    for(unsigned int i = 0  ; i < 23          ; i++) 
      cout << "                                                                      " 
           << "          " << endl ; 

    cout << "\033[10;0H" ; 
    r.executer (n) ; 

  }catch (RobotEtat::AppelInterdit)
  {
    cout << "****Exception reçue : Appel Interdit****" << endl ; 
    r.Notifie () ; 
  }catch (Commande::CommandeInconnue)
  {
    cout << "****Exception reçue : Commande Inconnue****" << endl ; 
    r.Notifie () ; 
  }
}
