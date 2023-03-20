#include <iostream>
using namespace std;

struct Node {
   int info;
   struct Node *link;
};
typedef struct Node node;
node *start=NULL;

void insert_beg() {
int elem;
node *newptr;
cout<<"Enter the element to be insert: ";
cin>>elem;
newptr=(node *)malloc(sizeof(node));
    newptr->info=elem;
    newptr->link=start;
    start=newptr;
}

void insert_end() {
int elem;
node *newptr,*curptr;
if(start==NULL)
    insert_beg();
else {
cout<<"Enter the element to be insert: ";
cin>>elem;
newptr=(node *)malloc(sizeof(node));
newptr->info=elem;
start=curptr;
while(curptr->link!=NULL)
    curptr=curptr->link;
curptr->link=newptr;
newptr->link=NULL;
}
}


void insert_pos() {
int pos,i,elem;
node *newptr,*curptr;
cout<<"Enter the position you want to insert: ";
cin>>pos;
if(start==NULL||pos==1)
    insert_beg();
else {
    cout<<"Enter the element to be insert: ";
    cin>>elem;
    newptr=(node *)malloc(sizeof(node));
    newptr->info=elem;
    curptr=start;
    for(i=1;i<pos-1;i++)
        curptr=curptr->link;
    newptr->link=curptr->link;
    curptr->link=newptr;
}
}


void delete_beg() {
node *curptr;
if(start==NULL)
    cout<<"LL is Empty";
else {
    curptr=start;
    cout<<"Deleted element is "<<curptr->info;
    start=curptr->link;
    free(curptr);
}
}


void delete_end()  {
node *curptr,*preptr;
if(start==NULL)
cout<<"LL is Empty";
else if(start->link==NULL)  {
    cout<<"Deleted element is "<<start->info;
    start=NULL;
}
else {
    curptr=start;
    preptr=NULL;
    while(curptr->link!=NULL)  {
        preptr=curptr;
        curptr=curptr->link;
    }
    cout<<"Deleted Element is "<<curptr->info;
    preptr->link=NULL;
    free(curptr);
}
}


void delete_pos() {
int i,pos;
node *curptr,*preptr;
cout<<"Enter the position from you want to delete: ";
cin>>pos;
if(pos==1||start==NULL)
    delete_beg();
else  {
    curptr=start;
    for(i=1;i<pos;i++)  {
        preptr=curptr;
        curptr=curptr->link;
    }
    cout<<"Deleted Element is "<<curptr->info;
    preptr->link=curptr->link;
    free(curptr);
}
}

void count() {
int n=0;
node *curptr;
if(start==NULL)
    cout<<"LL is Empty";
else  {
    curptr=start;
    while(curptr->link!=NULL) {
       n++;
       curptr=curptr->link;
    }
    cout<<"Number of Nodes: "<<n;
}
}

void display() {
node *curptr;
if(start==NULL)
    cout<<"LL is Empty";
else  {
    curptr=start;
    while(curptr->link!=NULL) {
        cout<<curptr->info<<"\t";
        curptr=curptr->link;
    }
}
}

int main()
{
    int ch;
    while(1)  {
    cout<<"\n1.Insert at Beginning\n2.Insert at End\n3.Insert at given Position";
    cout<<"\n4.Delete from Begin\n5.Delete from End\n6.Delete from give Position";
    cout<<"\n7.Count the Number of Nodes\n8.Display the Elements of LL";
    cout<<"\n9.Exit\nEnter your Choice :";
    cin>>ch;
    switch(ch) {
    case 1:insert_beg(); break;
    case 2:insert_end(); break;
    case 3:insert_pos(); break;
    case 4:delete_beg(); break;
    case 5:delete_end(); break;
    case 6:delete_pos(); break;
    case 7:count(); break;
    case 8:display(); break;
    case 9:exit(1);
    default:cout<<"\nWrong Choice";
    }
    }
    return 0;
}

