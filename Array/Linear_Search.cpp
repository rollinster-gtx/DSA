#include <iostream>
using namespace std;

int main(){
    int arr[5] ={2,3,1,7,8};
    int target;

    cout << "Enter The Element : ";
    cin >> target;

    for(int i=0;i<5;i++)
    {
        if(arr[i]==target)
        {
            cout << "Element Found";
            return 0;
        }
    }
   cout << "Element Not Found";

    return 0;
}

