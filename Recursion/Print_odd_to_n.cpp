#include<iostream>
using namespace std;

void printodd(int N)
{
    // Base Case: Jab N 1 ho jaye toh 1 print karke ruk jao
    if(N==1)
    {
        cout<<1<<" "; // 1 print karega
        return;       // Recursion stop
    }

    printodd(N-2);    // Pehle chotte odd numbers (1 se N-2) print honge
    cout<<N<<" ";     // Wapas aate waqt current odd number N print hoga
}

int main()
{
    // Print odd number from 1 to N
    int N;
    cin>>N;

    // Agar N even number ho (jaise 10 ya 20), toh use previous odd number bana do
    if(N%2==0)
        N--;

    printodd(N);      // Function call
}