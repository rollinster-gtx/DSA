#include<iostream>
using namespace std;

void printcol(int arr[3][4],int row,int col)
{
    for(int j=0;j<col;j++)
    for(int i=0;i<row;i++)
    cout<<arr[i][j]<<" ";
}

void printrow(int arr[3][4],int row,int col)
{
    
    for(int i=0;i<row;i++)
    for(int j=0;j<col;j++)
    cout<<arr[i][j]<<" ";
}


int main()
{
    int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12}; //create

    for(int row=0;row<3;row++) //printing row wise
    for(int col=0;col<4;col++)
    cout<<arr[row][col]<<" ";
    

    for(int col=0;col<4;col++)
    for(int row=0;row<3;row++) //printing col wise
    cout<<arr[row][col]<<" ";


    printcol(arr,3,4); //funtion call se printing col wise
    printrow(arr,3,4); //funtion call se printing row wise
}
