#include<iostream>
#include<functional>
using namespace std;

//Function Objects: Function wrapped in a class so that it available like an object (It is also called Functor)
int main()
{
    int arr[] = {1,33,14,120,54,77};
    //sort(arr,arr+5);  //first five element will be sorted in arr[] array (By default it sort in ascending order)
    sort(arr,arr+6, greater<int>());   // First six elements will be sorted in descending order
    for(int i=0;i<6;i++) {
        cout<<arr[i]<<endl;
    }

    return 0;
}