#include<iostream>
using namespace std;

// Function 1: Factorial calculate karne ke liye
int fact(int n)
{
    // Base case: 0! aur 1! dono 1 hote hain
    if(n==1 || n==0)
        return 1; // Base case reach hone par 1 return hoga

    return n * fact(n-1); // Recursive call: n * (n-1)!
}

// Function 2: First N natural numbers ka Sum
int sum(int n)
{
    // Base case: First 1 natural number ka sum 1 hota hai
    if(n==1)
        return 1; // Base case reach hone par 1 return hoga

    return n + sum(n-1); // Recursive call: n + sum(n-1)
}

// Function 3: Sum of Squares of First N Natural Numbers
int sumOfSquares(int n)
{
    // Base case: 1^2 = 1 hota hai
    if(n==1)
        return 1; // Base case reach hone par 1 return hoga

    return (n * n) + sumOfSquares(n-1); // Recursive call: n^2 + sumOfSquares(n-1)
}

// Function 4: Power calculate karne ke liye (num^n)
int pow(int num, int n)
{
    // Base case: kisi bhi number ki power 1 wo number khud hota hai
    if(n==1)
        return num; // Base case reach hone par num return hoga

    return num * pow(num, n-1); // Recursive call: num * pow(num, n-1)
}

int main()
{
    int n;
    cout << "Enter a number n: ";
    cin >> n;

    // 1. Factorial Output
    cout << "Factorial of " << n << " : " << fact(n) << endl;

    // 2. Sum of First N Numbers Output
    cout << "Sum of first " << n << " natural numbers : " << sum(n) << endl;

    // 3. Sum of Squares Output
    cout << "Sum of squares of first " << n << " natural numbers : " << sumOfSquares(n) << endl;

    // 4. Power of 2 (2^n) Output
    cout << "Power (2^" << n << ") : " << pow(2, n) << endl;

    return 0;
}