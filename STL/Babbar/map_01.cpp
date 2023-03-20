#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int, string> m;

    m[1] = "Gabbar";
    m[13] = "Mogli";
    m[2] = "Babbar";

    m.insert({5,"Cheetah"});
    cout<<"Before erase: "<<endl;
    for(auto i:m) {
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<"Finding 13: "<<m.count(13)<<endl;
    m.erase(13);
    cout<<"After Erase: "<<endl;
    for(auto i:m) {
        cout<<i.first<<" "<<i.second<<endl;
    }cout<<endl;
    auto it = m.find(2);
    for(auto i=it;i!=m.end();i++) {
        cout<<(*i).first<<endl;
    }
    return 0;
}