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

void postorder(node* root) {
    if(root!=NULL) {
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }
}

int main() {
   node* p=createNode(4);
   node* p1=createNode(1);
   node* p2=createNode(6);
   node* p3=createNode(5);
   node* p4=createNode(2);

   //Linking the root node with left and right children
    p->left=p1;
    p->right=p2;

    p1->left=p3;
    p1->right=p4;

    postorder(p);

    

    return 0;
}