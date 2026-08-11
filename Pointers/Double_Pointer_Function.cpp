#include <iostream>
using namespace std;

// Pointer ka pass-by-value (pointer ka address copy hota hai, so p++ main func ke pointer ko change nahi karega)
void fun(int *p) {
    p++;
}

int main() {
    int n = 10;
    int *p = &n;       // single pointer
    int **p2 = &p;     // Double pointer

    cout << "Before fun(p): " << p << endl;
    fun(p);
    cout << "After fun(p):  " << p << endl;

    return 0;
}