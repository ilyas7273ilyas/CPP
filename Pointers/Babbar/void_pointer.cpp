#include<iostream>
using namespace std;
int main() {
    void *ptr;
    int x=10;
    ptr=&x;
    cout<<ptr<<endl;
   // cout<<*ptr<<endl;
   cout<<*(int *)ptr<<endl;    //TypeCasting the pointer to integer

   double y=4.5;
   ptr=&y;
   cout<<ptr<<endl;
   cout<<*(double*)ptr<<endl;   //TypeCasting the pointer to double
}