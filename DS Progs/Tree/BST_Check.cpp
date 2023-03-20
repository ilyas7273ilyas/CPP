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

// void inorder(node* root) {
//     if(root!=NULL) {
//         inorder(root->left);
//         cout<<root->data<<" ";
//         inorder(root->right);
        
//     }
// }

// int isBST(node* root) {
//     static node *prev=NULL;
//     if(root!=NULL) {
//         if(!isBST(root->left)) {
//             return 0;    //FALSE
//         }
//         if(prev!=NULL && (root->data)<=(prev->data)) {
//             return 0;    //FALSE
//         }
//         prev=root;
//         return isBST(root->right);
//     }
//     else 
//     return 1;    //TRUE
// }

// node* SearchRecur(node* root, int key) {
//     if(root==NULL) {
//     return NULL;  }
//     if(key==root->data) {
//     return root;  }
//     else if(key<root->data)  {
//     return Search(root->left, key);  }
//     else  {
//     return Search(root->right, key); }
// }

// node* SearchIter(node* root, int key) {
//     while(root!=NULL) {
//      if(key==root->data)
//       return root;
//      else if(key<root->data)
//       root=root->left;
//      else
//       root=root->right; 
//     }
//     return NULL; 
// }

void insert(node *root, int key) {
    node* prev=NULL;
    while(root!=NULL) {
        prev=root;
        if(key==root->data) {
            cout<<endl<<"Cannot Insert"; 
           return;  }
        else if(key<root->data)
           root=root->left;
        else
           root=root->right;
    }
    node* ptr=createNode(key);
      if(key<prev->data)
         prev->left=ptr;
       else
         prev->right=ptr;
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

    //inorder(p);

    // cout<<endl<<(isBST(p));
    // if(isBST(p))
    // cout<<endl<<"This is BST";
    // else
    // cout<<endl<<"This is Not BST";

    // node* n=SearchRecur(p, 10);
    // if(n!=NULL)
    // cout<<endl<<"Found: "<<n->data;
    // else
    // cout<<endl<<"Element not Found";

    // node* n=SearchIter(p, 12);
    // if(n!=NULL)
    // cout<<endl<<"Found: "<<n->data;
    // else
    // cout<<endl<<"Element not Found";

    insert(p,10);
    cout<<p->right->right->data;
    

    return 0;
}