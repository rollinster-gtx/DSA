#include <iostream>
using namespace std;

void print(int n)
{
    // Base case: Jab n ki value 1 ho jaye toh ruk jao
    if(n==1)
    {
        cout<<1<<endl; // 1 print karo
        return;        // Function se wapas laut jao (stop recursion)
    }

    cout<<n<<endl;   // Current number n print karo
    print(n-1);      // Next number (n-1) ke liye function call karo
}

int main()
{
    int n = 5;       // Initial value set ki

    print(n);        // Recursion call n se 1 tak print karne ke liye
}