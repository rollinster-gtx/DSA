#include <iostream>
using namespace std;

void print(int n)
{
    // Base Case: Jab n 2 ho jaye toh 2 print karke ruk jao
    if(n==2)
    {
        cout<<2<<endl; // Final even number 2 print karega
        return;        // Function stop ho jayega
    }

    cout<<n<<endl;     // Current even number n print karega
    print(n-2);        // Agle even number (n-2) ke liye call karega
}

int main()
{
    // Print even number n to 1
    int n = 10;        // Initial even value 10 set ki

    print(n);          // Function call
}