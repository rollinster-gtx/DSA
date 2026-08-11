#include <iostream>
using namespace std;

int main() {
    // Part 1: Char array and pointer printing behavior
    char arr[5] = "1234";
    char *ptr = arr;

    cout << "--- Direct Character Output ---" << endl;
    cout << arr << endl; // Prints "1234"
    cout << ptr << endl; // Prints "1234"

    // Part 2: Printing actual Memory Addresses using void* typecasting
    cout << "\n--- Memory Addresses (void* typecasting) ---" << endl;
    cout << (void*)arr << endl;
    cout << (void*)ptr << endl;

    // Part 3: Single Char Variable Address
    char name = 'a';
    char *ptr1 = &name;

    cout << (void*)&name << endl;
    cout << (void*)ptr1 << endl;

    return 0;
}