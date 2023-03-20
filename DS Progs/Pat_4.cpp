#include<iostream>
using namespace std;

struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};
typedef struct Node node;
node* root=NULL;

void createBST(int e)  {
    node* newptr, * curptr, * ptr;
    newptr=(node *)malloc(sizeof(node));
    newptr->data=e;
    newptr->left=NULL;
    newptr->right=NULL;
    if(root==NULL)
    root=newptr;
    else {
        curptr=root;
        while(curptr!=NULL) {
            ptr=curptr;
            curptr=(e > curptr->data ? curptr->right : curptr->left);
        }
        if(e < ptr->data)
        ptr->left = newptr;
        else
        ptr->right = newptr;
    }
}

void inorder(node* root) {
    if(root!=NULL) {
        inorder(root->left);
        //cout<<root->data<<" ";
        inorder(root->right);
    }
}

void preorder(node* root) {
    if(root!=NULL) {
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(node* root) {
    if(root!=NULL) {
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }
}

node* inOrderPredecessor(node* root) {
    root=root->left;
    while(root->right!=NULL)
    root=root->right;
    return root;
}

node* deleteNode(node* root, int value) {
    node* iPrev;
    if(root==NULL)
    return NULL;
    if(root->left==NULL && root->right==NULL) {
        free(root);
        return NULL;
    }
    if(value < root->data)
    root->left = deleteNode(root->left, value);
    else if(value > root->data)
    root->right = deleteNode(root->right, value);
    else {
        iPrev=inOrderPredecessor(root);
        root->data=iPrev->data;
        root->left=deleteNode(root->left, iPrev->data);
    }
    return root;
}

int main() {
    int n,m,i,e,d;
    cout<<"Enter no. of Nodes you want to create BST: ";
    cin>>n;
    for(i=0;i<n;i++) {
        cout<<"Enter the element of BST: ";
        cin>>e;
        createBST(e);
    }

    cout<<"Elements of BST in Post Order:"<<endl;
    postorder(root);

    cout<<endl<<"Enter No. of nodes you want to delete: ";
    cin>>m;
    for(int j=0;j<m;j++) {
        cout<<"Enter the value of node you want to delete: ";
        cin>>d;
        inorder(root);
        deleteNode(root,d);
    }

    cout<<endl<<"Elements of BST in preorder after deletion:"<<endl;
    preorder(root);

    return 0;

}
