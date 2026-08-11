#include <iostream>
using namespace std;

// Question 1: Pass by Value of Pointers (p2.cpp)
void second(int *p1, int *p2) {
    p1 = p2;
    *p1 = 2;
}

void testQuestion1() {
    cout << "=== Question 1 (p2.cpp) ===" << endl;
    int i = 0, j = 1;
    second(&i, &j);
    cout << i << " " << j << endl; // Output: 0 2
}

// Question 2: Multi-level Pointers in Function (p4.cpp)
int four(int x, int *py, int **ppz) {
    int y, z;
    **ppz += 1;
    z = **ppz;
    *py += 2;
    y = *py;
    x += 3;
    return x + y + z;
}

void testQuestion2() {
    cout << "\n=== Question 2 (p4.cpp) ===" << endl;
    int c = 4, *b, **a;
    b = &c;
    a = &b;
    cout << four(c, b, a) << endl; // Output: 19
}

// Question 3: String Copy via Pointers (p5.cpp)
void five(char *str1, char *str2) {
    while ((*str1 = *str2)) {
        str1++;
        str2++;
    }
}

void testQuestion3() {
    cout << "\n=== Question 3 (p5.cpp) ===" << endl;
    char first[] = "Mohit";
    char second[] = "Rohan";
    five(first, second);
    cout << first << endl; // Output: Rohan
}

int main() {
    testQuestion1();
    testQuestion2();
    testQuestion3();
    return 0;
}