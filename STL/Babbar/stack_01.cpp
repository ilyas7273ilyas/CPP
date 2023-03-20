#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<string> s;

    cout<<"Empty or not= "<<s.empty()<<endl;
    
    s.push("Ajam");
    s.push("Armaan");
    s.push("Arbaz");
    s.push("Junaid");

    cout<<"Top element= "<<s.top()<<endl;

    s.pop();

    cout<<"Top element= "<<s.top()<<endl;
    cout<<"Size of Stack= "<<s.size()<<endl;
    cout<<"Empty or not= "<<s.empty()<<endl;

    return 0;
}