#include<iostream>
using namespace std;


int main()
{
    //A pointer to int is created, pointing to some garbage address
    // int *p=0;
    // int *q=0;
    //cout<<p<<endl;
  // cout<<*p<<endl;
   //cout<<*q<<endl;




    /*
    int i=5;
    int *p=0;

    p=&i;

    cout<<p<<endl;
    cout<<*p<<endl;  */


    int num=5;
    int a=num;
    cout<<"a Before: "<<num<<endl;
    a++;
    cout<<"a Afer: "<<num<<endl;


    int *p=&num;
    cout<<"Before: "<<num<<endl;
    (*p)++;
    cout<<"After: "<<num<<endl;

    return 0;
}
