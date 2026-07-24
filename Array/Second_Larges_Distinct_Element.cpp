#include <iostream>
#include <climits>
using namespace std;

int main(){
    int arr[5] ={2,3,1,7,8};
    int largest = INT_MIN;
    
    for(int i=0;i<5;i++)
    {
        if(arr[i]>largest)
        {
            largest = arr[i];
        }
    }

    int secondLargest = INT_MIN;

    for(int i=0;i<5;i++)
    {
        if(arr[i]!=largest)
        {
            if(arr[i]>secondLargest)
            {
                secondLargest = arr[i];
            }
        }
    }
    cout << "Second Largest Element : " << secondLargest;

    return 0;
}

