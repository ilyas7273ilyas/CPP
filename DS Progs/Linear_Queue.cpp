#include <iostream>
using namespace std;
#define size 5

int front=-1,rear=-1,queue[size], elem;

void enqueue() {
    if(rear==size-1)
    cout<<"\nOverflow";
    // else {
    //     if(front==-1)
    //     front=0;
    //     cout<<"Enter the Number: ";
    //     cin>>elem;
    //     rear++;
    //     queue[rear]=elem;
    // }
    else if(front==-1&&rear==-1) {
        front=0;
        cout<<"Enter the Number: ";
        cin>>elem;
        rear++;
        queue[rear]=elem;
    }
    else {
        cout<<"Enter the Number: ";
        cin>>elem;
        rear++;
        queue[rear]=elem;
    }
}

void dequeue()  {
    // if(front==-1||front>rear)
    // cout<<"\nQueue is Empty";
    // else {
    //     cout<<"\nDeleted element is "<<queue[front];
    //     front++;
    // }
    if(front==-1&&rear==-1)
    cout<<"\nQueue is Empty";
    else if(front==rear) {
        cout<<"\nDeleted element is "<<queue[front];
        front=rear=-1;
    }
    else {
        cout<<"\nDeleted element is "<<queue[front];
         front++;
    }
}

void peek() {
    //if(front==-1||front>rear)
    if(front==-1&&rear==-1)
    cout<<"\nQueue is empty";
    else
    cout<<"\nPeak Value of Queue is "<<queue[front];
}

void display() {
    int i;
    // if(front==-1||front>rear)
    if(front==-1&&rear==-1)
    cout<<"\nQueue is empty";
    else {
        for(i=front;i<=rear;i++)
        cout<<endl<<queue[i];
    }
}

int main() {
    int ch;
    while(1) {
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
