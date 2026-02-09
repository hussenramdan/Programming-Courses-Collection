/*
    Loop
    - Nested Loop For
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{

    string products[] = {"Item 1", "Item 2" ,"Item 3"};
    string sizes[] = {"Small" , "Large", "X-large"};
    
    for(int i = 0; i < 3; i++)
    {
        cout << "Products Name: \n";
        cout << products[i] << endl;
        cout << "Sizes: \n";

        for (int j = 0; j < 3; j++)
        {
            cout << sizes[j];
            if(j < 2)
            {
                cout << ", " << endl;
            }
        }
            cout << "\n====================\n";
    }
    return 0;
}