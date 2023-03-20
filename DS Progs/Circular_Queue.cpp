// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#define size 5

int front=-1,rear=-1,queue[size], elem;

void enqueue() {
    if(front==(rear+1)%size)
    cout<<"\nOverflow";
    else if(rear==-1&&front==-1) {
        cout<<"\nEnter the element into Circular Queue: ";  cin>>elem;
        front=0;
        rear++;
        queue[rear]=elem;
    }
    else {
        cout<<"\nEnter the element into Circular Queue: ";  cin>>elem;
        rear=(rear+1)%size;
        queue[rear]=elem;
    }
}

void dequeue()  {
    if(front==-1&&rear==-1)
    //if(front==(rear+1)%size)
    cout<<"\nCircular Queue is Empty";
    else if(front==rear) {     //Onle one Element left in Queue
    cout<<"\nDeleted element is "<<queue[front];
    front=rear=-1;
    }
    else {
        cout<<"\nDeleted element is "<<queue[front];
        front=(front+1)%size;
        //front++;
    }
}

void peek() {
    if(front==-1&&rear==-1)
    cout<<"\nQueue is empty";
    else
    cout<<endl<<queue[front];
}

void display() {
    if(front==-1&&rear==-1)
    cout<<"\nQueue is empty";
    else {
        int i;
        cout<<"\nElements of Circular Queue: ";
        for(i=front;i<size;i++)
        cout<<"\t"<<queue[i];
        for(i=0;i<=rear;i++)
        cout<<"\t"<<queue[i];
        
        
        // int i=front;
        
        // while(i!=rear) {
        //     cout<<"\t"<<queue[i];
        //     i=(i+1)%size;
        // }
        // cout<<"\t"<<queue[rear];
        
        
        // do {
        //     cout<<"\t"<<queue[i];
        //     i=(i+1)%size;
        // }while(i!=rear);
    }
}

int main() {
    int ch;
    while(1) {
        cout<<"\nOperations for Circular Queue";
        cout<<"\n1.Insert\n2.Delete\n3.Peek Value\n4.Display\n5.Exit";
        cout<<"\nEnter choice: ";
        cin>>ch;
        switch(ch) {
            case 1:enqueue(); break;
            case 2:dequeue(); break;
            case 3:peek(); break;
            case 4:display(); break;
            case 5:exit(1);
            default:cout<<"\nWrong Choice";
        }
    }
    return 0;
}
