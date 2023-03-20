#include<iostream>
#include<array>
using namespace std;
int main()
{
    array<int,4> a = {1,2,3,4};  // Array declaration in STL

    //int size = a.size();

    for(int i=0;i<a.size();i++) {
        //cout<<a[i]<<endl;
        cout<<a.at(i)<<endl;
    }

    cout<<"Element at 2nd index: "<<a.at(2)<<endl;
    cout<<"Empty or not -> "<<a.empty()<<endl;
    cout<<"First Element: "<<a.front()<<endl;
    cout<<"Last element: "<<a.back()<<endl;

    return 0;
}