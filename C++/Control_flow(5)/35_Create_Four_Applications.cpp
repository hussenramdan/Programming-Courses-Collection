/*  
    condition Flow
    - If Condition Trainings
    
    4 Trainings Apps
    - Even / Odd Checker
    - Find Greatest Number
    - User Rank Checker
    - Simple Calculator
*/

#include <iostream>
using namespace std;

int main(){

    // App 1 => Even / Odd Checker

    int num;
    cin >> num;

    if(num %2 == 0)
        cout << "The Number " << num  << " Is Even"<< endl;
    else
        cout << "The Number " << num << " Is Odd" << endl;
    
    
    
    // App 2 => Find Greatest Number
    
    int num_one , num_two , num_three;

    cin >> num_one;
    cin >> num_two;
    cin >> num_three;

    if( num_one > num_two && num_one > num_three)
    {
        cout << "The big Number " << num_one << " Is Num_One" << endl;
    }
    else if  (num_two > num_one && num_two > num_three)
    {
        cout << "The big Number " << num_two << " Is Num_Two" << endl;
    }
    else
        cout << "The big Number " << num_three << " Is Num_Three" << endl;


        // App 3 => User Rank Checker

       int points;
    cin >> points;

    if (points > 0 && points <= 500)
    {
    cout << "Not Bad" << endl;
    }
    else if (points > 500 && points <= 1000)
    {
    cout << "Very Good" << endl;
    }
    else if (points > 1000)
    {
    cout << "VIP" << endl;
    }
    else 
    {
    cout << "No Rank Points" << endl;
    }   





    // App 4 => Simple Calculator
    
    int number_one , number_two , op;


    cout << "Type Number One";
    cin >> number_one; 
    cout << "Type Number Two";
    cin >> number_two;

    cout << "Choose The Operation Number";
    cout << "[1] + \n";
    cout << "[2] - \n";
    cout << "[3] / \n";
    cout << "[4] * \n";
    cin >> op;

    if(op == 1)
    {
    cout << number_one + number_two ;  
    }
    else if (op == 2)
    {
        cout << number_one - number_two;
    }
    else if (op == 3)
    {
        cout << number_one / number_two;
    }
    else if (op == 4)
    {
        cout << number_one * number_two;
    }
    else
    {
    cout << "Opeation Not Found";
    }


        return 0;
}

