#include <iostream>
using namespace std;

struct Node {
   int info;
   struct Node *link;
};
typedef struct Node node;
node *start=NULL;

// Simple Linked List

// void insert_beg() {
// int elem;
// node *newptr;
// cout<<"Enter the element to be insert: ";
// cin>>elem;
// newptr=(node *)malloc(sizeof(node));
//     newptr->info=elem;
//     newptr->link=start;
//     start=newptr;
// }

// void insert_end() {
// int elem;
// node *newptr,*curptr;
// if(start==NULL)
//     insert_beg();
// else {
// cout<<"Enter the element to be insert: ";
// cin>>elem;
// newptr=(node *)malloc(sizeof(node));
// newptr->info=elem;
// start=curptr;
// while(curptr->link!=NULL)
//     curptr=curptr->link;
// curptr->link=newptr;
// newptr->link=NULL;
// }
// }


// void insert_pos() {
// int pos,i,elem;
// node *newptr,*curptr;
// cout<<"Enter the position you want to insert: ";
// cin>>pos;
// if(start==NULL||pos==1)
//     insert_beg();
// else {
//     cout<<"Enter the element to be insert: ";
//     cin>>elem;
//     newptr=(node *)malloc(sizeof(node));
//     newptr->info=elem;
//     curptr=start;
//     for(i=1;i<pos-1;i++)
//         curptr=curptr->link;
//     newptr->link=curptr->link;
//     curptr->link=newptr;
// }
// }


// void delete_beg() {
// node *curptr;
// if(start==NULL)
//     cout<<"LL is Empty";
// else {
//     curptr=start;
//     cout<<"Deleted element is "<<curptr->info;
//     start=curptr->link;
//     free(curptr);
// }
// }


// void delete_end()  {
// node *curptr,*preptr;
// if(start==NULL)
// cout<<"LL is Empty";
// else if(start->link==NULL)  {
//     cout<<"Deleted element is "<<start->info;
//     start=NULL;
// }
// else {
//     curptr=start;
//     preptr=NULL;
//     while(curptr->link!=NULL)  {
//         preptr=curptr;
//         curptr=curptr->link;
//     }
//     cout<<"Deleted Element is "<<curptr->info;
//     preptr->link=NULL;
//     free(curptr);
// }
// }


// void delete_pos() {
// int i,pos;
// node *curptr,*preptr;
// cout<<"Enter the position from you want to delete: ";
// cin>>pos;
// if(pos==1||start==NULL)
//     delete_beg();
// else  {
//     curptr=start;
//     for(i=1;i<pos;i++)  {
//         preptr=curptr;
//         curptr=curptr->link;
//     }
//     cout<<"Deleted Element is "<<curptr->info;
//     preptr->link=curptr->link;
//     free(curptr);
// }
// }

// void count() {
// int n=0;
// node *curptr;
// if(start==NULL)
//     cout<<"LL is Empty";
// else  {
//     curptr=start;
//     while(curptr!=NULL) {
//        n++;
//        curptr=curptr->link;
//     }
//     cout<<"Number of Nodes: "<<n;
// }
// }

// void display() {
// node *curptr;
// if(start==NULL)
//     cout<<"LL is Empty";
// else  {
//     curptr=start;
//     while(curptr!=NULL) {
//         cout<<curptr->info<<"\t";
//         curptr=curptr->link;
//     }
// }
// }

void sort() {
    node *i, *j;
    int temp;
    for(i=start;i->link!=NULL;i=i->link)
    {
        for(j=i->link;j!=NULL;j=j->link)
        {
            if(i->info>j->info) {
                temp=i->info;
                i->info=j->info;
                j->info=temp;
            }
        }
    }
}

void reverse_display(node *temp) {
    if(temp==NULL)
    return;
    reverse_display(temp->link);
    cout<<"  "<<temp->info;
}

void reverse_LL(node *preptr, node *curptr) {
    if(curptr) {
        reverse_LL(curptr,curptr->link);
        curptr->link=preptr;
    }
    else
    start=preptr;
}

//Circular Linked List Start

void insert_beg() {
    node *newptr, *curptr=start;
    newptr=(node *)malloc(sizeof(node));
    cout<<"Enter the number: ";
    cin>>newptr->info;
    if(start==NULL) {
    newptr->link=newptr;
    start=newptr;
    }
    else {
    while(curptr->link!=start)
    curptr=curptr->link;
    curptr->link=newptr;
    newptr->link=start;
    start=newptr;
    }
}




void insert_end() {
    node *newptr,*curptr=start;
    if(start==NULL)
    insert_beg();
    else {
        newptr=(node *)malloc(sizeof(node));
        cout<<"Enter the number: ";
        cin>>newptr->info;
        while(curptr->link!=start) {
        curptr=curptr->link;
    }
    curptr->link=newptr;
    newptr->link=start;
    }
}

void delete_beg() {
    node *curptr=start, *toDelete=start;;
    while(curptr->link!=start)
    curptr=curptr->link;
    cout<<"Deleted element is "<<start->info;
    curptr->link=start->link;
    start=start->link;

    delete toDelete;
}

void delete_pos() {
    int pos,i;
    node *curptr=start, *toDelete;
    cout<<"Enter the position: ";
    cin>>pos;
    if(pos==1)
    delete_beg();
    else {
        for(i=1;i<pos-1;i++)
        curptr=curptr->link;
        toDelete=curptr->link;
        cout<<"Deleted element is "<<toDelete->info;
        curptr->link=curptr->link->link;
        delete toDelete;

    }
}

void display() {
    node *curptr=start;
    if(start==NULL)
    cout<<"LL is Empty";
else  {
    curptr=start;
    do 
    {
        cout<<curptr->info<<"\t";
        curptr=curptr->link;

      } while(curptr!=start);
}
}

//Circular Linked List End

int main()
{
    int ch;
    while(1)  {
    cout<<"\n1.Insert at Beginning\n2.Insert at End\n3.Insert at given Position";
    cout<<"\n4.Delete from Begin\n5.Delete from End\n6.Delete from give Position";
    cout<<"\n7.Count the Number of Nodes\n8.Display the Elements of LL";
    cout<<"\n9.Sorting\n10.Reverse Display\n11.Reverse Linked List";
    cout<<"\n12.Exit\nEnter your Choice :";
    cin>>ch;
    switch(ch) {
    case 1:insert_beg(); break;
    case 2:insert_end(); break;
    //case 3:insert_pos(); break;
    case 4:delete_beg(); break;
   // case 5:delete(); break;
    case 6:delete_pos(); break;
    // case 7:count(); break;
    case 8:display(); break;
    case 9:sort(); break;
    case 10:reverse_display(start); break;
    case 11:reverse_LL(NULL,start); break;
    case 12:exit(1);
    default:cout<<"\nWrong Choice";
    }
    }
    return 0;
}
