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

void inorder(node* root) {
    if(root!=NULL) {
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
        
    }
}

node* inOrderSuccessor(node* root) {
    root=root->right;
    while(root->left!=NULL){
        root=root->left;
    }
    return root;
}

node* deleteNode(node* root, int value) {
    node* iPost;
    if(root==NULL){
        return NULL;
    }
    if(root->left==NULL&&root->right==NULL) {
        free(root);
        return NULL;
    }
    //Search for the node to be deleted
    if(value<root->data) {
        root->left=deleteNode(root->left, value);
    }
    else if(value>root->data) {
        root->right=deleteNode(root->right, value);
    }

    //Deletion Strategy when the node is found
    else{
        iPost=inOrderSuccessor(root);
        root->data=iPost->data;
        root->right=deleteNode(root->right,iPost->data);
       // root->left=deleteNode(root->left,iPost->data);
    }
    return root;
}

int main() {
   node* p=createNode(5);
   node* p1=createNode(3);
   node* p2=createNode(6);
   node* p3=createNode(1);
   node* p4=createNode(4);

   //Linking the root node with left and right children
    p->left=p1;
    p->right=p2;

    p1->left=p3;
    p1->right=p4;

    inorder(p);
    deleteNode(p, 5);
    cout<<endl;
    cout<<"Replaced(Successor) element is: "<<p->data<<endl;
    inorder(p);

    

    

    return 0;
}