#include<iostream>
using namespace std;

int main(){
    int a=10;
    cout<<&a<<endl; //print add of a


    int *ptr = &a;
    cout<<sizeof(ptr)<<endl; //print size of a 
    cout<<ptr<<endl;         //print add of a
    cout<<*ptr<<endl;        //print value of a



    float m = 2.6;
    float *ptr1 = &m;    
    cout<<ptr1<<endl;        // print add of m
    cout<<*ptr1<<endl;       // print val of m
    cout<<sizeof(ptr1)<<endl; // print size of m
}