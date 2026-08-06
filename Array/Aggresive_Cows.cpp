#include <iostream>
#include <algorithm>
using namespace std;

bool isPossible(int arr[], int n, int k, int mid)
{
    int cows = 1;
    int lastPos = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] - lastPos >= mid)
        {
            cows++;
            lastPos = arr[i];

            if (cows == k)
                return true;
        }
    }

    return false;
}

int aggressiveCows(int arr[], int n, int k)
{
    sort(arr, arr + n);

    int start = 1;
    int end = arr[n - 1] - arr[0];
    int ans = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (isPossible(arr, n, k, mid))
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return ans;
}

int main()
{
    int arr[] = {1, 2, 4, 8, 9};
    int n = 5;
    int k = 3;

    cout << "Maximum Minimum Distance = " << aggressiveCows(arr, n, k);

    return 0;
}