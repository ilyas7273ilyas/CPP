#include<iostream>
using namespace std;

int main() {
    int i=3;
    int *t=&i;
    cout<<(*t)++<<endl;
    (*t)++;
    cout<<(*t)++<<endl;
    cout<<(*t)<<endl;
    *t=(*t)+1;
    cout<<(*t)<<endl;
    cout<<"Before t: "<<t<<endl;
    t=t+1;
    cout<<"After t: "<<t<<endl;

    double j=5, *p=&j;
    cout<<"Before p: "<<p<<endl;
    p++;
    cout<<"After p: "<<p<<endl;

    // char ch='a', *c=&ch;
    // cout<<*c<<endl;
    // cout<<"Address of ch before: "<<c<<endl;
    // c++;
    // cout<<"Address of ch after: "<<c<<endl;
    // c++;
    // cout<<"Address of ch last: "<<c<<endl;



}