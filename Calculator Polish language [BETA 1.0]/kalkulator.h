#include <cstdlib>
#include <iostream>
#include <math.h>
#include <stdlib.h>
int menuogolne;
int decyzja,decyzja_2;
using namespace std;




void podajliczbedod ()
{
    double lb_1, lb_2;
    
   
     cout << "Wybor: DODAWANIE" <<endl;
     cout << endl;
   cout << "Podaj pierwsza liczbe: ";
    cin >> lb_1;
    cout << "Podaj druga liczbe: ";
    cin >> lb_2;
     cout << "wynik: "<<lb_1 << " + "<<lb_2<<" = "<<lb_1+lb_2<<endl;
            cout << "(7)Powrot";
            cin >> decyzja_2;


}
void podajliczbeode ()
{
    double lb_1, lb_2;
    
     cout << "Wybor: ODEJMOWANIE" <<endl;
     cout << endl;
   cout << "Podaj pierwsza liczbe: ";
    cin >> lb_1;
    cout << "Podaj druga liczbe: ";
    cin >> lb_2;
    cout << "wynik: "<<lb_1 << " - "<<lb_2<<" = "<<lb_1-lb_2<<endl;
            cout << "(7)Powrot";
            cin >> decyzja_2;


}
void podajliczbemno ()
{
    double lb_1, lb_2;
  
    cout << "Wybor: MNOZENIE" <<endl;
    cout << endl;
   cout << "Podaj pierwsza liczbe: ";
    cin >> lb_1;
    cout << "Podaj druga liczbe: ";
    cin >> lb_2;
     cout << "wynik: "<<lb_1 << " * "<<lb_2<<" = "<<lb_1*lb_2<<endl;
            cout << "(7)Powrot";
            cin >> decyzja_2;


}
void podajliczbe_dzielenie()
{
    double lb_1, lb_2;
      
     cout << "Wybor: DZIELENIE" <<endl;
     cout << endl;
    do
    {
        cout << "Podaj dzielna: ";
    cin >> lb_1;
    cout << "Podaj dzielnik: ";
    cin >> lb_2;
    cout << "wynik: "<<lb_1 << " / "<<lb_2<<" = "<<lb_1/lb_2<<endl;
           cout << "(7)Powrot";
           cin >> decyzja_2;
    } while (lb_2<=0);

}

void podajliczbe_modulo()
{
      
     cout << "Wybor: MODULO" <<endl;
     cout << endl;
    int lb_3, lb_4;
	cout << "Podaj pierwsza liczbe: ";
    cin >> lb_3;
    cout << "Podaj druga liczbe: ";
    cin >> lb_4;
    cout << "wynik: "<<lb_3 << " % "<<lb_4<<" = "<<lb_3 % lb_4<<endl;
				cout << "(7)Powrot";
				cin >> decyzja_2;

}
void podajliczbe_potegi()
{
        
    int lb_2;  
    double lb_1;
    cout << "Wybor: POTEGOWANIE" <<endl;
    cout << endl;
do
{
cout << "Podaj podstawe: ";
cin >> lb_1;
cout << "Podaj wykładnik: ";
cin >> lb_2;
cout << "Wynik: " << lb_1 << " ^ " << lb_2 << " = "<<  pow(lb_1,lb_2)<< endl;
			cout << "(7)Powrot: ";
				cin >> decyzja_2;

}while ((lb_1=0)&&(lb_2=0));
}
void brakopcji()
{
       
    cout << "Brak opcji w MENU" << endl;
            cout << "(7)Powrot: ";
				cin >> decyzja_2;
}

