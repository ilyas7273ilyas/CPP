#include<iostream>
#include <cmath>
using namespace std;
template<class T1, class T2>
float funcAverage(T1 a, T2 b){
    float avg = (a+b)/2.0;
    return avg;
}

template<class T>
void swapp(T &a,T &b) {
    T temp=a;
    a=b;
    b=temp;
}

int main()
{
    float a;
    a = funcAverage(3,2);
    //cout<<"The average is: "<<fixed<<setprecision(3)<<a;
    cout<<"The average is: "<<a<<endl;
    int x=6,y=99;
    swapp(x,y);
    cout<<x<<" "<<y;
    return 0;
}