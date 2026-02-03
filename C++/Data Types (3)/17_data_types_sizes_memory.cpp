/*
    Data Types

    - Ram [R]andom [A]ccess [M]emory
    --- Computer Memory Has Locations

    - Data Size
    --- Bit => [Bi]nary Digi[t] => Smallest Unit in Store Only 0 Or 1
    --- Byte => A Group of 8 => store single Character
    --- Kilo Byte => 1024 Byte
    --- Mega Byte => 1024 Kilobytes
    --- Giga Byte => 1024 Megabyte
    --- Tera Byte => 1024 Gigabytes

    Data Types With size
    int => 2 or 4 Bytes => will cover later why
    float => 4 Bytes [18.65656565]
    double => 8 Bytes [18.65656565656]
    Number . Fractional Component
    Char => 1 Byte => "A" "X" "9"
    boolean => 1 Byte => true , false

    The Story Behind creating A Variable
    --- Declare A Varible
    --- Tell Computer That We Need To Reserve X Byte Of Memory Depend On Data Type
    --- Resrtict Type Of Data To The Type We Choosed

    - Declare Varible Without Type
    - See Memory Address &

    - Application To Create
    --- Create App Ask You To Type Number Of Kilobytes
    --- Write 3 Lines Contains
    ------- [1] The Number Of Kilobytes That User Input
    ------- [2] The Number Of Bytes
    ------- [3] The Number Of Bits
*/





#include <iomanip>
#include <iostream>
using namespace std;

int mian()
{
    // Cout << setprecision(13);
    float fl = 10.1234567891;
    cout << fl << "\n";
    double dob = 10.1234567891;
    cout << dob << "\n";

    auto num = 10;
    cout << num << "\n";

    int nums = 100;
    cout << &nums ;
    return 0;
}