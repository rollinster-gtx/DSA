#include <iostream>
#include <string>
using namespace std;

int main()
{
    // 1. Basic Declaration & Output (Image 1)
    string s = "Rohit";
    cout << s << endl;

    // 2. Input with spaces using getline (Image 2 & 3)
    string fullName;
    // cin >> fullName; // Single word padhta hai (space par ruk jata hai)
    getline(cin, fullName); // Puri line padhta hai including spaces
    cout << fullName << endl;

    // 3. Size / Length of String (Image 3)
    cout << "Size: " << fullName.size() << endl;

    // 4. String Concatenation: '+' and append() (Image 4 & 5)
    string s1 = "rohit";
    string s2 = "mohit";
    
    string s3 = s1 + s2; // '+' operator se combine karna
    cout << s3 << endl;

    string s4 = s1.append(s2); // append() function se combine karna
    cout << s4 << endl;

    // 5. push_back() and pop_back() (Image 6 & 7)
    s1.push_back('p'); // End me single character add karega
    cout << s1 << endl;

    s1.pop_back(); // End se last character remove karega
    cout << s1 << endl;

    // 6. Escape Characters (Image 8, 9, 10)
    string quoteStr = "rohit negi is a \"good\" boy"; // Double quotes print karne ke liye \"
    cout << quoteStr << endl;

    string nullStr = "\0"; // Null character (screen par kuch print nahi hoga)
    cout << nullStr << endl;

    string backslashStr = "\\0"; // Literal \0 print karne ke liye \\ use hota hai
    cout << backslashStr << endl;

    return 0;
}