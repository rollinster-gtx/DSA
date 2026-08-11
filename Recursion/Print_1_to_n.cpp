#include <iostream>
using namespace std;

// Function 1: 1 se N tak print karne ke liye
void print1ToN(int N)
{
    // Base Case: Jab N 1 ho jaye toh 1 print karke ruk jao
    if(N==1)
    {
        cout<<1<<endl; // 1 print karo
        return;        // Recursion stop
    }

    print1ToN(N-1);    // Pehle chotte numbers (1 se N-1) print honge
    cout<<N<<endl;     // Wapas aate waqt current number N print hoga
}

// Function 2: N se 1 tak print karne ke liye
void printNTo1(int N)
{
    // Base Case: Jab N 1 ho jaye toh 1 print karke ruk jao
    if(N==1)
    {
        cout<<1<<endl; // 1 print karo
        return;        // Recursion stop
    }

    cout<<N<<endl;     // Pehle current number N print hoga
    printNTo1(N-1);    // Agle chotte number (N-1) ke liye call
}

int main()
{
    int N;
    cin>>N;

    cout<<"--- 1 to N ---"<<endl;
    print1ToN(N);

    cout<<"--- N to 1 ---"<<endl;
    printNTo1(N);

    return 0;
}