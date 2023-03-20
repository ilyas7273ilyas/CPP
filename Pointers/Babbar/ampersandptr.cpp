#include<iostream>
using namespace std;

int main() {
    int a[10]={1,2,3,4,5};
    cout<<"1st "<<&a[0]<<endl;
    cout<<"2nd "<<&a<<endl;
    cout<<"3rd "<<a<<endl;


    int *p=&a[0];
    cout<<"4th "<<p<<endl;
    cout<<"5th "<<&p<<endl;
    cout<<"6th "<<*p<<endl;

    return 0;
}