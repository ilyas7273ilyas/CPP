#include<iostream>
#include<queue>
using namespace std;
int main()
{
    // MAX Heap
    priority_queue<int> maxi;

    // Min Heap
    priority_queue<int, vector<int>, greater<int> > mini;

    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);
    cout<<"Size "<<maxi.size()<<endl;
    int n=maxi.size();
    for( int i=0;i<n;i++) {
        cout<<maxi.top()<<" ";
        maxi.pop();  //Deleting the greatest element in queue
    }cout<<endl;

    mini.push(5);
    mini.push(1);
    mini.push(0);
    mini.push(4);
    mini.push(3);
    int m=mini.size();
    for(int i=0;i<m;i++) {
        cout<<mini.top()<<" ";
        mini.pop();  //Deleting the smallest element in queue
    }cout<<endl;

    cout<<"Khaali h kya ?? "<<mini.empty()<<endl;
    return 0;
}