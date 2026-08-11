#include <iostream>
using namespace std;

// Function 1: Linear Search using Recursion (Image 1)
bool linearsearch(int arr[], int X, int index, int N)
{
    // Base case: Agar index N tak pahunch gaya matlab element nahi mila
    if(index == N)
        return 0;

    // Element mil gaya
    if(arr[index] == X)
        return 1;

    // Agle index ke liye recursive call
    return linearsearch(arr, X, index + 1, N);
}

// Function 2: Binary Search using Recursion (Image 2 & 3)
bool Binarysearch(int arr[], int start, int end, int X)
{
    // Base case: Jab start end ko cross kar jaye matlab element nahi mila
    if(start > end)
        return 0;

    int mid = start + (end - start) / 2;

    // Element mid par mil gaya
    if(arr[mid] == X)
        return 1;
    // Element right half me hoga
    else if(arr[mid] < X)
        return Binarysearch(arr, mid + 1, end, X);
    // Element left half me hoga
    else
        return Binarysearch(arr, start, mid - 1, X);
}

int main()
{
    // 1. Linear Search Test
    int arr1[] = {2, 3, 6, 7, 1, 5};
    int X1 = 7;
    int N1 = 6;
    cout << "Linear Search Result: " << linearsearch(arr1, X1, 0, N1) << endl;

    // 2. Binary Search Test (Sorted Array)
    int arr2[] = {2, 4, 6, 8, 10, 12};
    int X2 = 10;
    int N2 = 6;
    cout << "Binary Search Result: " << Binarysearch(arr2, 0, N2 - 1, X2) << endl;

    return 0;
}