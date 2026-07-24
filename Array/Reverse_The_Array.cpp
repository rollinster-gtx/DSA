#include <iostream>
#include <climits>
using namespace std;

int main(){
   int arr[5] = {2,3,1,7,8};
   int start = 0;
   int end = 4;

   while(start<end)
   {
    swap(arr[start],arr[end]);

    start++;
    end--;
   }

   cout << "Reverse The Array : ";

   for(int i = 0;i<5;i++)
   {
    cout << arr[i] << "";
   }
    return 0;
}

