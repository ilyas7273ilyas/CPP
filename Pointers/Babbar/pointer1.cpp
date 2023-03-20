#include<iostream>
using namespace std;
 int main() {
    int num=5;
    cout<<num<<endl;

    //Address of Operator (Hexadecimal)
    cout<<"Address of num is: "<<&num<<endl;




    //int ptr=&num;
    
   int *ptr=&num;
   cout<<"address: "<<ptr<<endl;
   cout<<"Valu: "<<*ptr<<endl;


   double d=4.5;
   double *p2=&d;

   cout<<"address: "<<p2<<endl;
   cout<<"Valu: "<<*p2<<endl;

   cout<<"Size of integer num= "<<sizeof(num)<<endl;
   cout<<"Address of integer num= "<<sizeof(ptr)<<endl;
   cout<<"Size of double p2= "<<sizeof(d)<<endl;
   cout<<"Address of double p2= "<<sizeof(p2)<<endl;


    return 0;
 }