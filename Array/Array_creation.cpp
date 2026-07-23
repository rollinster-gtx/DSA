#include<iostream>
using namespace std;

int main(){
    // Array Declaration
    int a[5];

    // Array Initialization
    int arr[5]={1,2,3,4,5};

    //Size Automatically Determined
    int name[] = {1,2,3,4,5};

    //User Input
    int arr2[10];

    cout<<"Enter 10 numbers:";
    for(int i=0;i<10;i++){
        cin>> arr2[i];
    }

    //Print User Input Array
    cout<< "\nElements are:";
    for(int i=0;i<10;i++)
    {
        cin>>arr2[i];

    }
    cout<<endl;

    //Partial Initialisation
    int arr3[5]={8,4};

    cout<< "\n Partial Intialised Array";
    for(int i=0;i<5;i++)
    {
        cout<<arr3[i]<<"";
    }
    cout<<endl;

    //All Elements Initialised to 0
    int arr4[5] = {0};

    cout<< "\nZero Initialised Array:";
    for(int i=0;i<5;i++)
    {
        cout <<arr4[i];

    }
    cout<<endl;

    return 0;


}