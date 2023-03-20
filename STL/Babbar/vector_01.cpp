#include<iostream>
#include<vector>
using namespace std;
int main()
{

    vector<int> v;

    vector<int> a(5,1);  // five 1's
    cout<<"Print a"<<endl;
    for(int i:a) {
        cout<<i<<" ";
    }
    cout<<endl;

    // Copy a list
    vector<int> last(a);  // elements of 'a' are copy in last
    cout<<"Print last"<<endl;
    for(int i:last) {
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Capacity: "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Capacity after inserting one element: "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Capacity after inserting two element: "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Capacity after inserting three element: "<<v.capacity()<<endl;

    cout<<"Size after inserting three elements: "<<v.size()<<endl;

    cout<<"Element at 2nd index: "<<v.at(2)<<endl;

    cout<<"Front Element: "<<v.front()<<endl;
    cout<<"Last Element: "<<v.back()<<endl;

    cout<<"Before pop"<<endl;
    for(int i:v) {
        cout<<i<<" ";
    }
    cout<<endl;

    v.pop_back();

    cout<<"After pop"<<endl;
    for(int i:v) {
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Before clear, size= "<<v.size()<<endl;
    v.clear();
    cout<<"After clear, size= "<<v.size()<<endl;
    cout<<"After clear, Capacity= "<<v.capacity()<<endl;
    return 0;
}