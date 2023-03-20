#include<iostream>
using namespace std;

int main() {
    int i=5;
    int* p=&i;
    int** p2=&p;

    cout<<"Value of P: "<<p<<endl;
    cout<<"Address of p: "<<&p<<endl;
    cout<<"*p2= "<<*p2<<endl;

    cout<<"i= "<<i<<endl;
    cout<<"*p= "<<*p<<endl;
    cout<<"**p2= "<<**p2<<endl;

    cout<<endl<<&i<<endl;
    cout<<p<<endl;
    cout<<*p2<<endl;

    cout<<endl<<&p<<endl;
    cout<<p2<<endl;

    return 0;
}