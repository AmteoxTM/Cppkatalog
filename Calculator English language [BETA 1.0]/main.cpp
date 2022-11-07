#include <cstdlib>
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include "calculator.h"

#ifdef _WIN32
#define CLEAR "cls"
#else 
#define CLEAR "clear"
#endif

using namespace std;

int main()
{
    

    do {
         system(CLEAR);
         cout << "CALCULATOR ENGLISH LANGUAGE [BETA 1.0]" <<endl;
         cout <<endl;
        cout << "CALCULATOR MENU:"<<endl;
         cout << "==============="<<endl;
        cout << "(1)addition\n(2)subtraction\n(3)multiplication\n(4)division\n(5)modulo\n(6)exponentiation" << endl;
        cout << "==============="<<endl;
        cout << "Your choice: ";
        cin >> decision;
        switch(decision)
        {

            case 1:
            {
                system(CLEAR);
                gimmenumaddi();
                break;
            }
            case 2:
            {
                system(CLEAR);
                gimmenumsubt();
                break;
            }
            case 3:
            {
                system(CLEAR);
                gimmenummult ();
                break;
            }
            case 4:
            {
                system(CLEAR);
                gimmenumdivi();
                break;
            }
            case 5:
            {
                system(CLEAR);
                gimmenummodu();
                break;
            }
            case 6:
            {
                system(CLEAR);
                gimmenumexpo();
                break;
            }
            default:
            {
                system (CLEAR);
                nooptions();
                break;
            }
            break;
        }
        
    } while (decision_2==7);
   
        
       

      return 0;



    }
    

    
      
  

