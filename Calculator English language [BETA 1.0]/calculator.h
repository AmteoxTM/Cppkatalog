#include <cstdlib>
#include <iostream>
#include <math.h>
#include <stdlib.h>

int decision,decision_2;
using namespace std;




void gimmenumaddi ()
{
    double num_1, num_2;
    
   
     cout << "Decision: ADDITION" <<endl;
     cout << endl;
   cout << "Give me first number: ";
    cin >> num_1;
    cout << "Give me second number: ";
    cin >> num_2;
     cout << "Result: "<<num_1 << " + "<<num_2<<" = "<<num_1+num_2<<endl;
            cout << "(7)Back"<<endl;
            cout << "Choice: ";
            cin >> decision_2;


}
void gimmenumsubt ()
{
    double num_1, num_2;
    
     cout << "Decision: SUBTRACTION" <<endl;
     cout << endl;
   cout << "Give me first number: ";
    cin >> num_1;
    cout << "Give me second number: ";
    cin >> num_2;
         cout << "Result: "<<num_1 << " - "<<num_2<<" = "<<num_1-num_2<<endl;
            cout << "(7)Back"<<endl;
            cout << "Choice: ";
            cin >> decision_2;


}
void gimmenummult ()
{
   double num_1, num_2;
  
    cout << "Decision: MULTIPLICATION" <<endl;
    cout << endl;
   cout << "Give me first number: ";
    cin >> num_1;
    cout << "Give me second number: ";
    cin >> num_2;
    cout << "Result: "<<num_1 << " * "<<num_2<<" = "<<num_1*num_2<<endl;
            cout << "(7)Back"<<endl;
            cout << "Choice: ";
            cin >> decision_2;


}
void  gimmenumdivi()
{
    double num_1, num_2;
      
     cout << "Decision: DIVISION" <<endl;
     cout << endl;
    do
    {
        cout << "Give me dividend: ";
    cin >> num_1;
    cout << "Give me divider: ";
    cin >> num_2;
         cout << "Result: "<<num_1 << " / "<<num_2<<" = "<<num_1/num_2<<endl;
           cout << "(7)Back"<<endl;
            cout << "Choice: ";
           cin >> decision_2;
    } while (num_2<=0);

}

void gimmenummodu()
{
      
     cout << "Decision: MODULO" <<endl;
     cout << endl;
    int num_1, num_2;
	cout << "Give me first number: ";
    cin >> num_1;
    cout << "Give me second number: ";
    cin >> num_2;
        cout << "Result: "<<num_1 << " % "<<num_2<<" = "<<num_1%num_2<<endl;
				cout << "(7)Back"<<endl;
            cout << "Choice: ";
				cin >> decision_2;

}
void gimmenumexpo()
{
        
    int num_1;  
    double num_2;
    cout << "DECISION: EXPONENTIATION" <<endl;
    cout << endl;
do
{
cout << "Give me base: ";
cin >> num_1;
cout << "Give me exponent: ";
cin >> num_2;
cout << "Result: " << num_1 << " ^ " << num_2 << " = "<<  pow(num_1,num_2)<< endl;
			cout << "(7)Back"<<endl;
            cout << "Choice: ";
				cin >> decision_2;

}while (num_1=0);
}
void nooptions()
{
       
    cout << "Error: There is no option at this MENU!" << endl;
         cout << "(7)Back"<<endl;
            cout << "Choice: ";
				cin >> decision_2;
}

