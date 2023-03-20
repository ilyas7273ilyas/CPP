#include<iostream>
using namespace std;

struct Node {
    int info;
    struct Node *left, *right;
} ;
typedef struct Node node;
node* root=NULL;

//Creation
void create(int e){
    node *newptr, *curptr, *ptr;
    newptr=(node *)malloc(sizeof(node));
    newptr->info=e;
    newptr->left=NULL;
    newptr->right=NULL;
    if(root==NULL)
    root=newptr;
    else {
        curptr=root;
        while(curptr!=NULL) {
            ptr=curptr;
            curptr=(e>curptr->info ? curptr->right : curptr->left);
        }
        if(e<ptr->info)
        ptr->left=newptr;
        else
        ptr->right=newptr;
    }
}

//Display
void display(node* ptr,int level) {
    int i;
    if(ptr!=NULL) {
        display(ptr->right, level+1);
        for(i=0;i<level;i++)
        cout<<"   ";
        cout<<"  "<<ptr->info;
        display(ptr->left,level+1);
    }
}

int main() {
    int ch,e,i,n;
    while(1) {
        cout<<"\n1.Create\n2.Display\n3.Exit";
        cout<<"\nEnter Your Choice: ";
        cin>>ch;
        switch(ch) {
            case 1:cout<<"\nEnter how many nodes: ";
                   cin>>n;
                   for(i=0;i<n;i++) {
                    cout<<"Enter the Element: ";
                    cin>>e;
                    create(e);
                   }
                   break;
            case 2:cout<<"\nBST is:\n";
                   display(root,1);
                   break;
            case 4:exit(1);
            default:cout<<"\nWrong Choice";
        }
    }
}