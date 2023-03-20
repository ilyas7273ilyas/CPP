#include<iostream>
using namespace std;

int main() {
    int arr[10]={2,3,5,8,13,15,68};

    cout<<"Address of first memory block is= "<<arr<<endl;
    cout<<arr[0]<<endl;
    cout<<"Address of first memory block is= "<<&arr[0]<<endl;
    cout<<"4th= "<<*arr<<endl;
     cout<<"5th= "<<*(arr+1)<<endl;
     cout<<"6th= "<<*arr+1<<endl;
     cout<<"7th= "<<*arr<<endl;
     cout<<"8th= "<<*arr+1<<endl;

     cout<<"9th= "<<*(arr+5)<<endl;

     int i=3;
     cout<<i[arr]<<endl;



     int temp[10];

//ERROR
     //arr=arr+1;

     int *ptr=&arr[0];
     cout<<ptr<<endl;
     ptr=ptr+1;
     cout<<ptr<<endl;

     
    return 0;
}