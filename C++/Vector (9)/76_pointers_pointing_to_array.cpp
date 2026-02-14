/*  
    Pointers
    --- Pointing To Array
*/

#include <iostream>
using namespace std;

int main()
{

    int nums[] = {10, 20, 30, 40};
    int* ptr = &nums[0];
    
    cout << "First ELement\n\n";

    cout <<"Value With Index: " << nums[0] << endl;
    cout << "Value With Pointer: " << *ptr << endl;
    cout << "Address With Index:  " << &nums[0] << endl;
    cout << "Adderss With Pointer: " << ptr << endl;
    
    cout << "Second Element\n\n";
    
    cout <<"Value With Index: " << nums[1] << endl;
    cout << "Value With Pointer: " << *(ptr + 1) << endl;
    cout << "Address With Index:  " << &nums[1] << endl;
    cout << "Adderss With Pointer: " <<  ptr + 1 << endl;


    cout << "Third Element\n\n";
    
    cout <<"Value With Index: " << nums[2] << endl;
    cout << "Value With Pointer: " << *(ptr + 2) << endl;
    cout << "Address With Index:  " << &nums[2] << endl;
    cout << "Adderss With Pointer: " <<  ptr + 2 << endl;


    cout << "Fourth Element\n\n";
    
    cout <<"Value With Index: " << nums[3] << endl;
    cout << "Value With Pointer: " << *(ptr + 3) << endl;
    cout << "Address With Index:  " << &nums[3] << endl;
    cout << "Adderss With Pointer: " <<  ptr + 3 << endl;

    return 0;
}