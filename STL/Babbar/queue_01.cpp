#include<iostream>
#include<queue>

using namespace std;
int main()
{
    queue<string> q;

    q.push("Azam");
    q.push("Armaan");
    q.push("Arbaz");
    q.push("Junaid");

    cout<<"size before pop: "<<q.size()<<endl;
    cout<<"First Element before pop: "<<q.front()<<endl;
    cout<<"Last Element before pop: "<<q.back()<<endl;
    q.pop();
    cout<<"First Element after pop: "<<q.front()<<endl;
    cout<<"Last Element after pop: "<<q.back()<<endl;
    cout<<"size after pop: "<<q.size()<<endl;
    return 0;
}