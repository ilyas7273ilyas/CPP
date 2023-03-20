#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &v) {
    for(int i=0;i<v.size();i++) {
        cout<<v[i]<<" ";
        cout<<v.at(i)<<" ";  // It tells the element present at ith position
    }
    cout<<v.at(1)<<" ";
    cout<<v.at(0)<<" ";
    cout<<endl;
}

int main()
{
    vector<int> vec;  //Zero length vector
    int elem, size;
    cout<<"Enter the size of vector: ";
    cin>>size;
    for(int i=0;i<size;i++) {
        cout<<"Enter the elemnet of vector: ";
        cin>>elem;
        vec.push_back(elem);  // Insert at the end of vector
    }

    //vec.pop_back();   // Delete the elast element of vector
    
    display(vec);
    
    vector<int> :: iterator iter = vec.begin();  //Creating an iterator
    //vec.insert(iter, 566);   //Insert at beginning
    //vec.insert(iter+1, 78);   //Insert on second place
    //vec.insert(iter+1, 5, 145);  // Five copy of 145 inserted from second place
    display(vec);
    return 0;
}