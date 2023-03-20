#include<iostream>
#include<map>
#include<string>
using namespace std;

//Map is an associative array

int main()
{
    map<string, int> marksMap;
    marksMap["Azam"] = 98;
    marksMap["Armaan"] = 85;
    marksMap["Arbaz"] = 90;

    marksMap.insert({{"Ilaix",180},{"Pedri", 8}});
    map<string, int> :: iterator iter;
    for(iter= marksMap.begin(); iter!=marksMap.end(); iter++) {
        cout<< (*iter).first<<" "<<(*iter).second<<endl;  // Printing the pair
    }

    cout<<"The size is: "<<marksMap.size()<<endl;
    cout<<"The maiximum size is: "<<marksMap.max_size()<<endl;
    cout<<"The Empty's return value is: "<<marksMap.empty()<<endl;

    return 0;
}