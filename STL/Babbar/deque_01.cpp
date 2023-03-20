#include<iostream>
#include<deque>
using namespace std;
int main()  {

   deque<int> d;
   d.push_back(1);
   d.push_back(2);
   d.push_back(3);
   d.push_front(5);
   d.push_front(8);

   for(int i:d) {
    cout<<i<<" ";
   }cout<<endl;

   d.pop_back();  //Delete the element from end

   d.pop_front();   //Delete the element from front

   for(int i:d) {
    cout<<i<<" ";
   }cout<<endl;

   cout<<"Element at index 1: "<<d.at(1)<<endl;
   cout<<"Element at front: "<<d.front()<<endl;
   cout<<"Element at end: "<<d.back()<<endl;

   cout<<"Empty or not: "<<d.empty()<<endl;

   cout<<"Size, Before Erase: "<<d.size()<<endl;
   d.erase(d.begin(),d.begin()+1);  //Erase first element
   cout<<"Size, After Erase: "<<d.size()<<endl; 
   cout<<"Elements after erasing first element: ";
   for(int i:d) {
    cout<<i<<" ";
   } cout<<endl;




    return 0;
}