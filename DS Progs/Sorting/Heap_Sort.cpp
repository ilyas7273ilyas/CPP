#include<iostream>
using namespace std;

void maxheapify(int a[], int, int);
void maxheap(int a[], int beg, int end) {
    int i;
    for(i=end/2;i>=beg;i--)
    maxheapify(a,i,end);
}

void maxheapify(int a[], int f, int size) {
    int max=f, l=f*2, r=(f*2)+1, t;
    if(l<=size&&a[l]>a[max])
    max=l;
    if(r<=size&&a[r]>a[max])
    max=r;
    if(f!=max) {
        t=a[f];
        a[f]=a[max];
        a[max]=t;
        maxheapify(a,max,size);
    }
}

void heapsort(int a[], int size) {
    int i,t;
    for(i=size;i>=2;i--) {
        t=a[1];
        a[1]=a[i];
        a[i]=t;
        maxheapify(a,1,i-1);
    }
}

int main() {
    int a[10], i;
    cout<<"Enter the array Elements: ";
    for(i=1;i<10;i++)
    cin>>a[i];
    maxheap(a,1,9);
    heapsort(a,9);
    cout<<"\nSorted Array:\n";
    for(i=1;i<10;i++)
    cout<<"    "<<a[i];

    return 0;
}