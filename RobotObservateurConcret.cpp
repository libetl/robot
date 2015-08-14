#include "RobotObservateurConcret.h"
#include "RobotStruct.h"

RobotObservateurConcret::RobotObservateurConcret (Robot* r)
     : RobotObservateur (),robot (r) 
{
  MSG (RobotObservateurConcret::RobotObservateurConcret (Robot*))
}

void RobotObservateurConcret::maj ()
{
  MSG(void RobotObservateurConcret::maj ())
  RobotStruct rs = robot->acqEtat () ; 
  
  cout << "\033[3;53H\033[1;37;40m____________________________"  << endl ;
  cout << "\033[4;53H" ; 
  cout << "|Etat :                    |" << endl ; 
  cout << "\033[4;53H" ; 
  cout << "|Etat : " << rs.e << endl ; 
  cout << "\033[5;53H" ; 
  cout << "|Position :                |" << endl ; 
  cout << "\033[5;53H" ; 
  cout << "|Position : (" << rs.p.x << "," << rs.p.y << ")" << endl ; 
  cout << "\033[6;53H" ; 
  cout << "|Orientation :             |" << endl ;   
  cout << "\033[6;53H" ; 
  cout << "|Orientation : " << rs.d.d << endl ;
  cout << "\033[7;53H" ; 
  cout << "\\__________________________/"  << endl ;
}
