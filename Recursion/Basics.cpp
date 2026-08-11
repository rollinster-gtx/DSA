#include <iostream> 
using namespace std; 

void fun3(int n)
{
    // Base Case: jab n 0 ho jaye toh ruk jao
    if(n==0)
    {
        cout<<"Happy Birthday\n"; // Final wish print karega
        return;                   // Function se wapas laut jayega
    }

    cout<<n<<" days left for birthday\n"; // Baki bache din print karega
    fun3(n-1);                            // Next day ke liye khud ko call karega
}

int main()
{
    int n = 3;

    fun3(n); // Recursion call
}