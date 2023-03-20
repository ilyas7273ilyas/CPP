#include<iostream>
#include<list>

using namespace std;

void display(list<int> &lst) {
    list<int> :: iterator it;
    for(it = lst.begin(); it != lst.end(); it++) {
        cout<<*it<<" ";
    }
    cout<<endl;
}
int main()
{
    list<int> list1;  //List of zero length

    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(9);
    list1.push_back(12);
    list1.push_back(9);

    list<int> :: iterator iter1;
    iter1 = list1.begin();  //iter is the reference of the first element of list1
    cout<<"\nElements of list1: ";
    cout<< *iter1<<" ";
    iter1++;
    cout<< *iter1<<" ";
    iter1++;
    cout<< *iter1<<" ";
    iter1++;
    cout<< *iter1<<" ";

    cout<<"\nDisplaying list 1 by display() function: ";
    display(list1);

    //Removing elements from list

    //list1.pop_back();  //Deleted the last element
    //list1.pop_back();  //Deleted the last element

    //list1.pop_front();  //Deleted the element from beginning

    //list1.remove(9);  //Delete a particular element which value is given in function as parameter

    //Sorting the list
    //list1.sort();

    display(list1);

    list<int> list2(3);  // Empty list of size 3
    list<int> :: iterator iter2;
    iter2 = list2.begin();
    *iter2 = 54;
    iter2++;
    *iter2 = 6;
    iter2++;
    *iter2 = 9;
    iter2++;

    cout<<"\nElements of list2: ";
    display(list2);

    //Merging the two lists
    list1.merge(list2);  //Merging the list2 into list1 
    cout<<"\nList 1 after merging: ";
    display(list1);

    //Reversin the list
    list1.reverse();
    cout<<"\nList 1 after reversing: ";
    display(list1);

    return 0;
}