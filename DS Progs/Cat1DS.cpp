#include <iostream>
using namespace std;
struct Node { 
   int info;
   struct Node *link;
}; 
typedef struct Node node;
node *start = NULL; 
void insert() {
   node *newnode;
   newnode = (node *) malloc(sizeof(node)); 
   cout<<"enter the value of newnode ";
   cin>>newnode->info;
   newnode->link=start;
   start=newnode;
}
  
void add() {
    int sum=0;
    node *curptr=start, *preptr;
    while(curptr->link!=NULL) {
        //preptr=curptr;
        sum=(curptr->info)+((curptr->link)->info);          //Without using another node
        curptr=curptr->link;
        //sum=(curptr->info)+(preptr->info);                //By Using another node
        cout<<"\t"<<sum;
    }
    
} 

void display() {
    node *curptr=start;
    cout<<"\nElements:"<<endl;
    while(curptr!=NULL) {
        cout<<"\t"<<curptr->info;
        curptr=curptr->link;
    }
}
//   //newnode->data  = newdata;
   
//   newnode->prev = NULL; 
//   newnode->next = head;     
//   if(head !=  NULL) 
//       head->prev = newnode ;     
//       head = newnode; 
// }   
// void display() { 
//   node *ptr;
//   ptr = start;  
//   while(ptr != NULL) { 
//       cout<< ptr->info <<" "; 
//       ptr = ptr->link; 
//   } 
// } 
int main() { 
    int ch;
   while(1) {
       cout<<"\n1.Insert\n2.Add\n3.Display\n4.Exit";
       cout<<"\nYour Choice: ";
       cin>>ch;
       switch(ch) {
           case 1:insert(); break;
           case 2:add(); break;
           case 3:display(); break;
           case 4:exit(0);
           default:cout<<"\nWrong Choice";
       }
   } 
   return 0; 
}