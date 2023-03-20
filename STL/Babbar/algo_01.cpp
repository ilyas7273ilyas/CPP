#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);
    v.push_back(4);
    cout<<"Elements: "<<endl;
    for(int i:v) {
        cout<<i<<" ";
    } cout<<endl;

    cout<<"Finding 5: "<<binary_search(v.begin(), v.end(), 5)<<endl;      //Search for 5 in vector v from begin to end
    cout<<"Finding 6: "<<binary_search(v.begin(), v.end(), 6)<<endl;

    cout<<"Lower Bound: "<<lower_bound(v.begin(), v.end(), 6) - v.begin()<<endl;
    cout<<"Upper Bound: "<<upper_bound(v.begin(), v.end(), 6) - v.begin()<<endl;

    int a = 3 , b = 5;

    cout<<"Max: "<<max(a,b)<<endl;
    cout<<"Min: "<<min(a,b)<<endl;

    swap(a,b);

    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;

    string abcd = "abcd";
    reverse(abcd.begin(), abcd.end());
    cout<<"Reversed String: "<<abcd<<endl;
    //cout<<"String: "<<reverse(abcd)<<endl;  //Wrong

    rotate(v.begin(), v.begin()+3, v.end());  //It will rotate first 3 elements
    cout<<"After rotate: "<<endl;
    for(int i:v) {
        cout<<i<<" ";
    } cout<<endl;

    sort(v.begin(),v.end());   //It works on INTRO Sort which is combination of
    cout<<"Sorted Elemenets: "<<endl;   // Quick, Heap, Insertion Sort
    for(int i:v) {
        cout<<i<<" ";
    } cout<<endl;
    return 0;
}