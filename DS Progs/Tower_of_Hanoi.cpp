#include <iostream>
#include<math.h>
using namespace std;

void tower(int n, char beg, char aux, char end) {
    if(n<=0)
    cout<<"\nIllegal Entry";
    else if(n==1) {
   // cout<<"\nMove disc "<<(end-beg)<<" from "<<beg<<" to "<<end;
    cout<<"\nMove disc from "<<beg<<" to "<<end; }
    else {
        tower(n-1, beg, end, aux);
        tower(1, beg, aux, end);
        tower(n-1, aux, beg, end);
    }
}

int main() {
    int n;
    char a,b,c;
    cout<<"Enter the no. of disc: ";
    cin>>n;
    cout<<"Tower of Hanoi of "<<n<<" disc";
    tower(n, 'a' , 'b' , 'c');

    cout<<"\nTotal Steps: "<<(pow(2,n)-1);

    return 0;
}