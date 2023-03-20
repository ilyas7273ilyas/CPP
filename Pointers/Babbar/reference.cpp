#include <bits/stdc++.h>
using namespace std; 

void swap(int &x, int &y) // function definition  
{  
    int temp; // variable declaration  
    temp=x;  
    x=y;  
    y=temp;  
} 



int main()  
{  
    int x=11; 
    int z=67;  
    int &y=x; 
    cout<<"Address Before Reassingemnt "<<&y<<endl;
    y=z; 
    cout<<"Address After Reassingemnt "<<&y<<endl;

    int a=9; // variable initialization  
    int b=10; // variable initialization  
    swap(a, b); // function calling  
    cout << "value of a is :" <<a<< endl;  
    cout << "value of b is :" <<b<< endl;  

    return 0;
}  