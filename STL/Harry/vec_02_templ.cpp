#include<iostream>
#include<vector>
using namespace std;

template <class T>
void display(vector<T> &v) {
    cout<<"Displaying the vector"<<endl;
    for(int i=0;i<v.size();i++) {
        cout<<v[i]<<" ";
        //cout<<v.at(i)<<" ";  // It tells the element present at ith position
    }
    cout<<endl;
}

int main()
{
    vector<int> vec1; //Zeor length vector
    display(vec1);

    vector<char> vec2(4);  //4 element character vector
    vec2.push_back('g');
    display(vec2);

    vector<char> vec3(vec2);  // 4 element character vector from vec2
    display(vec3);

    vector<int> vec4(6,10);  // 6-element vector of 10
    display(vec4);
    cout<<vec4.size();
    return 0;
}