#include<iostream>
using namespace std;

// Function 1: Reverse a String (Image 3)
void rev(string &str, int start, int end)
{
    // Base Condition
    if(start >= end)
        return;

    // Swap characters
    char c = str[start];
    str[start] = str[end];
    str[end] = c;

    // Recursive Call
    rev(str, start + 1, end - 1);
}

// Function 2: Lowercase to Uppercase Conversion (Image 4)
void lowertoupper(string &str, int index)
{
    // Base Condition
    if(index == -1)
        return;

    // Convert current char to upper
    str[index] = 'A' + str[index] - 'a';

    // Recursive Call for rest of the string
    lowertoupper(str, index - 1);
}

int main()
{
    // 1. Reverse String
    string str1 = "rohit";
    rev(str1, 0, str1.length() - 1);
    cout << "Reversed String: " << str1 << endl;

    // 2. Lower to Upper
    string str2 = "rohitnegi";
    lowertoupper(str2, str2.length() - 1);
    cout << "Uppercase String: " << str2 << endl;

    return 0;
}