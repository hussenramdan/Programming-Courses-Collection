/*
    Arrays
    - Two Dimensional Arrays AKA [2D Array]
    
    Search For 
    - Matrix Operaions
    - 3D Array
*/

#include <iostream>
using namespace std;

int main()
{

    int points_a[3] = {1, 2, 3};
    int points_b[3] = {4, 5, 6};
    int points_c[3] = {7, 8, 9};



    // Good Practice

    const int rows = 3;
    const int colums = 3;  
    int points[rows][colums] = {{1, 2, 3} , {4, 5, 6} , {7, 8, 9}};

    cout << points[1][2] << endl;                           // 6
    cout << points[2][0] << endl;                          // 7
    cout << points[2][2] << endl;                          // 9


    // Bad Practice

    int points2[3][3] {1, 2, 3, 4, 5, 6, 7, 8, 9};
    
    cout << points2[1][2] << endl;                           // 6
    cout << points2[2][0] << endl;                          // 7
    cout << points2[2][2] << endl;                          // 9

    return 0;
}