#include<iostream>
using namespace std;


int main()
{




int num=5;
    int a=num;
    cout<<"a Before: "<<num<<endl;
    a++;
    cout<<"a Afer: "<<num<<endl;


    int *p=&num;
    cout<<"Before: "<<num<<endl;
    (*p)++;
    cout<<"After: "<<num<<endl;

    // Copying a Pointer
    int *q=p;
    cout<<p<<"--"<<q<<endl;
    cout<<*p<<"--"<<*q<<endl;
    (*q)++;
    cout<<"After: "<<num<<endl;
    return 0;

}