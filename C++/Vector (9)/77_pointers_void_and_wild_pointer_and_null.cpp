/*  
    Pointers
    --- Void, Wild Pointer And Null
*/

#include <iostream>
using namespace std;

int main()
{

    int *ptr1;          // Wild Pointer
    int *ptr2 = NULL;
    int *ptr3 = nullptr;

    cout << ptr1 << endl;
    cout << ptr2 << endl;       // 0
    cout << ptr3 << endl;       // 0

    int a = 100;
    void *ptr = &a;

    cout << ptr << endl;

    // C-Style
    // cout << *(int *)ptr << endl;

    // Modern
    cout << *static_cast<int *>(ptr) << endl;        // 100

    return 0;
}