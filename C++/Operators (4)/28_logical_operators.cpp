/*Operators & Operands
"Symbols To Operate To Data"

- Logucal Operators
"For Logic Between Values"

--- && And
--- || Or
--- !  Not
 */
 
 #include <iostream>
using namespace std;

int main()
{
    
    int age = 18;
    int points = 800;
    cout << (age >= 18 && points >= 500) << endl;                        // True 1
    
    int age_two = 16;
    int points_two = 800;
    cout << (age_two >= 18 && points_two >= 500) << endl;                // False 0



    int name = 16;
    int price = 500;
	  cout << (name >= 18 || price >= 450) << endl;                        // 1

    int name_two = 16;
    int price_three = 450;
    cout << (name_two >= 18 || price_three >= 500) << endl;             // False 0
    cout << (100 == 100 || 50 == 10 || 20 == 10 || 10 == 10) << endl;   // True 1
    
    
    
    cout << (10 == 10) << endl;                                         // True 1
    cout << !(10 == 10) << endl;                                        // False 0
    cout << !(100 == 10) << endl;                                       // True 1        

    return 0;
}