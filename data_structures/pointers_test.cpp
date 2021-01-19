#include <iostream>
using namespace std;

int main(){
    int a[5]={1,2,3,4,5};
    int *p = a;
    cout<<"\nres:"<<*a<<"::"<<p<<endl;

    int b[5];
    int *q = b;

    for(int i=0; i<5;i++){
        cout<<"\nEnter element at index:"<<i<<endl;
        cin>>*(q+i);
    }
    cout<<"\narray is:"<<endl;
    for (int ele =0; ele<5;ele++){
        cout<<*(q+ele)<<" ";
    }
    cout<<endl;
    return 0;
}