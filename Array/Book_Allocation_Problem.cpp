#include <iostream>
using namespace std;

int allocateBooks(int A[], int N, int M)
{
    if (M > N)
        return -1;

    int start = 0, end = 0, mid, ans = -1;

    for (int i = 0; i < N; i++)
    {
        if (A[i] > start)
            start = A[i];

        end += A[i];
    }

    while (start <= end)
    {
        mid = start + (end - start) / 2;

        int pages = 0, count = 1;

        for (int i = 0; i < N; i++)
        {
            pages += A[i];

            if (pages > mid)
            {
                count++;
                pages = A[i];
            }
        }

        if (count <= M)
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    return ans;
}

int main()
{
    int A[] = {12, 34, 67, 90};
    int N = 4;
    int M = 2;

    cout << allocateBooks(A, N, M);

    return 0;
}