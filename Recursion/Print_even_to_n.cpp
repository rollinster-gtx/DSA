#include<iostream>
using namespace std;

void printeven(int N)
{
    // Base Case: Jab N 2 ho jaye toh 2 print karke ruk jao
    if(N==2)
    {
        cout<<2<<" "; // 2 print karega
        return;       // Recursion stop
    }

    printeven(N-2);   // Pehle chotte even numbers (2 se N-2) print honge
    cout<<N<<" ";     // Wapas aate waqt current even number N print hoga
}

int main()
{
    // Print even number from 1 to N
    int N;
    cin>>N;

    // Agar N odd number ho (jaise 15 ya 19), toh use previous even number bana do
    if(N%2==1)
        N--;

    printeven(N);     // Function call
}