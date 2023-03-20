#include<iostream>
using namespace std;

void update(int **p2) {
    cout<<endl<<endl;   
    //p2=p2+1;     //No Change

    
 //    *p2=*p2+1;   // Value of p Changed

 
    **p2=**p2+1;   //Value of i Changed

 }



int main() {
    int i=5;
    int* p=&i;
    int** p2=&p;

    cout<<endl<<endl;
    cout<<"Before i: "<<i<<endl;
    cout<<"Before p: "<<p<<endl;
    cout<<"Before p2: "<<p2<<endl;
    update(p2);
    cout<<"Before i: "<<i<<endl;
    cout<<"Before p: "<<p<<endl;
    cout<<"Before p2: "<<p2<<endl;

    return 0;
}