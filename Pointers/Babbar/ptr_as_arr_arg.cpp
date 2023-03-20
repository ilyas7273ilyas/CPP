#include<iostream>
using namespace std;

//int getSum(int arr[], int n) //Pointer is passing through arr[]
int getSum(int *arr, int n)    //Here is also pointer is passing through argument *arr and both are same 
{     
    //cout<<"size: "<<sizeof(arr)<<endl;

    int sum=0;
    for(int i=0;i<n;i++) {
        sum+=arr[i];
    }
    return sum;
}


int main() {
    int arr[5]={1,2,3,4,5};

    cout<<"Sum is: "<<getSum(arr,5)<<endl;

    return 0;
}