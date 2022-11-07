#include <cstdlib>
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include "kalkulator.h"

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
         cout << "CALCULATOR POLISH LANGUAGE [BETA 1.0]" <<endl;
         cout <<endl;
        cout << "MENU KALKULATORA:"<<endl;
         cout << "==============="<<endl;
        cout << "(1)Dodawanie\n(2)Odejmowanie\n(3)Mnozenie\n(4)Dzielenie\n(5)Modulo\n(6)Potegowanie" << endl;
        cout << "==============="<<endl;
        cout << "Wybor: ";
        cin >> decyzja;
        switch(decyzja)
        {

            case 1:
            {
                system(CLEAR);
                podajliczbedod();
                break;
            }
            case 2:
            {
                system(CLEAR);
                podajliczbeode();
                break;
            }
            case 3:
            {
                system(CLEAR);
                podajliczbemno();
                break;
            }
            case 4:
            {
                system(CLEAR);
                podajliczbe_dzielenie();
                break;
            }
            case 5:
            {
                system(CLEAR);
                podajliczbe_modulo();
                break;
            }
            case 6:
            {
                system(CLEAR);
                podajliczbe_potegi();
                break;
            }
            default:
            {
                system (CLEAR);
                brakopcji();
                break;
            }
            break;
        }
        
    } while (decyzja_2==7);
   
        
       

      return 0;



    }
    

    
      
  

