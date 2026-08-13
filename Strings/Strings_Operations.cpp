#include <iostream>
#include <string>
using namespace std;

int main()
{
    // 1. Reverse String (Image 1)
    string s = "rohit";
    
    int start = 0, end = s.size() - 1;
    while(start < end)
    {
        swap(s[start], s[end]); // Both characters ko swap karo
        start++, end--;         // Pointers shift karo
    }
    cout << s << endl;          // Output: tihor


    // 2. Size of String without size() function (Image 2)
    int size = 0;
    while(s[size] != '\0')      // Jab tak null character na mile
    {
        size++;                 // Count badhao
    }
    cout << size << endl;       // Output: 5


    // 3. Check Palindrome (Image 3)
    string s2 = "naman";
    start = 0, end = s2.size() - 1;

    while(start < end)
    {
        if(s2[start] != s2[end])
        {
            cout << "Not a Pallindrome" << endl;
            return 0;           // Agar mismatch ho toh program end kar do
        }
        start++, end--;
    }

    cout << "It is a Pallindrome" << endl;

    return 0;
}