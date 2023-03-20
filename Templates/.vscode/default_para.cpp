#include<iostream>
using namespace std;

template <class T1=int, class T2=float, class T3=char>
class Billy{
    public:
    T1 a;
    T2 b;
    T3 c;
    Billy(T1 x,T2 y,T3 z) {
        a=x;
        b=y;
        c=z;
    }
    void display() {
        cout<<"The Value of a is: "<<a<<endl;
        cout<<"The Value of b is: "<<b<<endl;
        cout<<"The Value of c is: "<<c<<endl;
    }
};

int main()
{
    Billy<> ob1(4, 6.4, 'c');   // Default
    ob1.display();
    cout<<endl;
    Billy<float, char, char> ob2(1.6, 'a', 'b');
    ob2.display();
    return 0;
}