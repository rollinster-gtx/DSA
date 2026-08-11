#include <iostream>
using namespace std;

// Pass by value (original variables change nahi hote)
void swapping(int p1, int p2) {
    int temp = p1;
    p1 = p2;
    p2 = temp;
    
    cout << "Inside swapping func (addresses): " << &p1 << " " << &p2 << endl;
    cout << "Inside swapping func (values): " << p1 << " " << p2 << endl;
}

int main() {
    // Part 1: Pass by Value Demonstration
    cout << "=== Pass by Value ===" << endl;
    int first = 10, second = 20;
    cout << "Main func addresses: " << &first << " " << &second << endl;
    
    swapping(first, second);
    cout << "After swapping in main: " << first << " " << second << endl;

    // Part 2: Reference Variable Demonstration
    cout << "\n=== Reference Variable ===" << endl;
    int num = 10;
    int &temp = num; // 'temp' and 'num' refer to same memory location

    cout << "Initial temp: " << temp << endl;
    temp++; // Modifying temp updates num as well
    cout << "Updated num: " << num << endl;
    cout << "Address of temp: " << &temp << endl;
    cout << "Address of num:  " << &num << endl;

    return 0;
}