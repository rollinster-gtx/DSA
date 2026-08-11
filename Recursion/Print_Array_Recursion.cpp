#include<iostream>
using namespace std;

// Function 1: Array ko reverse order me print karne ke liye (Image 1)
void printReverse(int arr[], int index, int n)
{
    // Base Case: Jab index 'n' tak pahunch jaye toh ruk jao
    if(index == n)
        return;

    printReverse(arr, index + 1, n); // Pehle aage ke elements ke liye call hoga
    cout << arr[index] << " ";      // Wapas aate waqt current element print hoga
}

// Function 2: Array ko straight/forward order me print karne ke liye (Image 2)
void printForward(int arr[], int index)
{
    // Base Case: Jab index -1 tak pahunch jaye toh ruk jao
    if(index == -1)
        return;

    printForward(arr, index - 1);  // Pehle piche ke elements ke liye call hoga
    cout << arr[index] << " ";      // Wapas aate waqt current element print hoga
}

int main()
{
    int arr[] = {3, 4, 1, 2, 8};
    int n = 5;

    // 1. Reverse Print (8 2 1 4 3)
    cout << "Reverse Print: ";
    printReverse(arr, 0, n);
    cout << endl;

    // 2. Forward Print (3 4 1 2 8)
    cout << "Forward Print: ";
    printForward(arr, n - 1);
    cout << endl;

    return 0;
}