#include <iostream>
#include <vector>
using namespace std;

// Vector pass by reference (original vector update hoga)
void passVector(vector<int> &temp) {
    for (int i = 0; i < temp.size(); i++) {
        temp[i] = 20;
    }
}

// Array pass to function (arrays decay to pointers, so original array updates)
void doubleArray(int p[]) {
    for (int i = 0; i < 5; i++) {
        p[i] = p[i] * 2;
    }
}

int main() {
    // Part 1: Modifying Vector via Reference
    cout << "=== Vector Pass by Reference ===" << endl;
    vector<int> v(5, 0);
    passVector(v);
    
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    // Part 2: Modifying Array in Function
    cout << "\n=== Array in Function ===" << endl;
    int arr[5] = {1, 2, 3, 4, 5};
    doubleArray(arr);

    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}