#include<iostream>
using namespace std;

template <class T1,class T2>
class myClass {
    public:
    T1 data1;
    T2 data2;
    myClass(T1 a, T2 b) {
        data1=a;
        data2=b;
    }
    void display() {
        cout<<this->data1<<endl<<this->data2;
    }
};

int main()
{
    myClass<char, float> obj('c',1.8);
    myClass<int, double>obj1(12,5.6);
    myClass<int,char>obj2(7,'a');
    obj.display();
    obj1.display();
    obj2.display();
    return 0;
}