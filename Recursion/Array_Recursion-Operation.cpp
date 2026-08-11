#include<iostream>
using namespace std;

// Function 1: Array ke sabhi elements ka Sum nikalne ke liye (Image 1)
int sum(int arr[], int index, int n)
{
    // Base Case: Jab index array ki length 'n' ke barabar ho jaye
    if(index == n)
        return 0; // Addition me 0 return hoga

    return arr[index] + sum(arr, index + 1, n); // Current element + aage ka sum
}

// Function 2: Array ka Minimum Element dhoondhne ke liye (Image 2)
int minelement(int arr[], int index, int n)
{
    // Base Case: Jab hum last element par pahunch jaye
    if(index == n - 1)
        return arr[index]; // Last element hi min hoga

    return min(arr[index], minelement(arr, index + 1, n)); // Current vs Rest ka min
}

int main()
{
    int arr[] = {3, 4, 1, 2, 8};
    int n = 5;

    // 1. Array Sum Output
    cout << "Sum of array elements: " << sum(arr, 0, n) << endl;

    // 2. Minimum Element Output
    cout << "Minimum element in array: " << minelement(arr, 0, n) << endl;

    return 0;
}