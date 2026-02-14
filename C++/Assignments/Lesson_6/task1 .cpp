#include <iostream>
#include <string>
using namespace std;

int main() {
    int nums[]{100, 300, 600, 900};
    string awards[]{"iPhone", "iPad", "PC", "Car"};

    int size = sizeof(nums) / sizeof(nums[0]);

    for (int i = 0; i < size; i++) {
        cout << "Number " << nums[i] << " Award Is: " << awards[i] << endl;
    }

    return 0;
}
