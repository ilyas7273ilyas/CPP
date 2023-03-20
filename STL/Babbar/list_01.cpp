#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int> l;

    list<int> n(5, 100);  //Five time 100
    cout<<"Printin n: ";
    for(int i:n) {
        cout<<i<<" ";
    }cout<<endl;

    l.push_back(1);
    l.push_front(2);
    l.push_back(7);
    l.push_front(5);

    for(int i:l) {
        cout<<i<<" ";
    }cout<<endl;

    l.erase(l.begin());
    cout<<"After deleting front element: ";
    for(int i:l) {
        cout<<i<<" ";
    }cout<<endl;

    cout<<"Size of list l: "<<l.size()<<endl;
    return 0;
}