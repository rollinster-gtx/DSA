#include <iostream>
using namespace std;

int main() {
    int n = 10;
    int *p = &n;       // single pointer
    int **p2 = &p;     // Double pointer
    int ***p3 = &p2;   // Triple pointer

    // --- Address/Value Printing (Commented out in original code) ---
    // cout << p << endl;
    // cout << &p << endl;
    // cout << p2 << endl;
    // cout << &p2 << endl;
    // cout << p3 << endl;

    // --- Value ko modify karna ho, jo n mein rakhi hai ---

    // 1. Single Pointer se modify karna (Image 1):
    *p = *p + 5;
    cout << "After *p = *p + 5: " << n << endl; // Output: 15

    // 2. Double Pointer se modify karna (Image 2):
    **p2 = **p2 + 5;
    cout << "After **p2 = **p2 + 5: " << n << endl; // Output: 20

    // 3. Triple Pointer se modify karna (Image 3):
    ***p3 = ***p3 + 10;
    cout << "After ***p3 = ***p3 + 10: " << n << endl; // Output: 30

    return 0;
}