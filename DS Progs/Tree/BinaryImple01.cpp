#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};
typedef struct Node node;

node* createNode(int data) {
    node* n;
    n=(node *)malloc(sizeof(node));  //Allocating memory in heap
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
}

void display(node *ptr,int level) {
    if(ptr!=NULL) {
        //display(ptr->right, level+1);
        for(int i=0;i<level;i++)
        cout<<"   ";
        cout<<""<<ptr->data;
        display(ptr->left, level+1);
        display(ptr->right, level+1);
    }

}

int main() {
    /*
    //Constructing the root node
    node* p;
    p=(node *)malloc(sizeof(node));
    p->data=2;
    p->left=NULL;
    p->right=NULL;
    
    //Constructing the first node
    node* p1;
    p1=(node *)malloc(sizeof(node));
    p1->data=1;
    p1->left=NULL;
    p1->right=NULL;
    
    //Constructing the second node
    node* p2;
    p2=(node *)malloc(sizeof(node));
    p2->data=4;
    p2->left=NULL;
    p2->right=NULL;

    //Linking the root node with left and right children
    p->left=p1;
    p->right=p2;
    */

   node* p=createNode(2);
   node* p1=createNode(1);
   node* p2=createNode(4);

   //Linking the root node with left and right children
    p->left=p1;
    p->right=p2;

    display(p,1);

    return 0;
}