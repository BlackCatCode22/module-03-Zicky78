#include <iostream>

using namespace std;

int main() {

    //Create a variable and a pointer
    int a = 5;
    int *p = &a;

    // Print the address and the value
    cout << "The address in p is: " << p << endl;
    cout << "The value in p is: " << *p << endl;

    // Change the value of a using the pointer
    *p = 10;

    // Print the new value
    cout << "The value in a is: " << a << endl;

    // Create an array and a pointer
    int arr[5] = {1, 2, 3, 4, 5};
    int *pArr = &arr[0];

    // Print the array using the pointer and a for loop
    for(int i = 0; i < 5; i++) {
        cout << "The value at index " << i << " is: " << *pArr << endl;
        pArr++;
    }

    // Print the array using the pointer and a while loop
    int *pArr2 = &arr[0];
    cout << "Using while loop: " << endl;
    while(pArr2 < &arr[5]) {
        cout << *pArr2 << endl;
        pArr2++;
    }

    return 0;
}