#include<iostream>
using namespace std;
int main() {
    int arr[10], n, i, j, key;
    cout<<"Enter the no. of elements: ";
    cin>>n;
    for(i=0;i<n;i++) {
        cout<<"Enter the element "<<i+1<<" :";
        cin>>arr[i];
    }

    for(i=1;i<n;i++) {
        key=arr[i];
        for(j=i-1;j>=0 && key<arr[j];j--) {
            arr[j+1]=arr[j];
        }
        arr[j+1]=key;
    }
    cout<<"\nSorted Array: ";
    for(i=0;i<n;i++)  {
    cout<<arr[i]<<" ";
    }

return 0;


}