/*
    Condition Flow
    - Nested Ternary Operator
    - ALternate Syntax For If Condition
    
    Synax
    (conition Is True) ? True : False;
*/

#include <iostream>
using namespace std;

int main ()
{

    int age = 0;
    int points = 800;

    if (age >= 80)
    {
        cout << "Ok" << endl;
    }

    else 
    {
        if (age >= 18)
        {
            cout << "Ok " << endl;
        }
        else if (points >= 500)
        {
            cout << "Ok Becous Is Points " << endl;
        }
        
   //cout << "Not Ok ";
    }


    cout << (age >= 18 ? "Ok " : (points >= 500 ? "Ok P " : "Not P "))<< endl;
    
   // cout << (points >= 500 ? "Ok " :  "Not P") << endl; 
        
        if (age >= 18)
        	cout << "Ok" << endl;
        
        else
        	cout << "Not Ok" ;
    
    
    return 0;
}