
#include <iostream>
using namespace std;

int * returnArr(int arr[10]){
    const int size = *(&arr + 1) - arr;
    static int  r[10];
    for(int i=0;i<size;i++){
        cout<<"\niteration : "<<i<<endl;
        cout<<"arr["<<i<<"]"<< " is"<<arr[i]<<endl;
        r[i] = arr[i] + 5;
    }
    cout<<"\nr array is::"<<r<<endl;
    return r;// r should be declared with static above, currently with static
            // reference is returned else withiout static, address is returned, and is invalid

}

int main(){
    int arr[10];
    int size = *(&arr + 1) - arr;
    for (int i=0,j =100;i<size; i++,j+=100){
        cout<<"i is: "<<i<<" j is:: "<<j<<endl;
        arr[i] = j;
    }
    int *p = returnArr(arr);
    for (int k =0; k<size;k++){
        cout<<"\n data at:: "<<k<<"is :"<<*(p + k)<<endl;
    }
    cout<<"\narray p is:: "<<p<<endl;

}

/*
#include <iostream>
using namespace std;
int main() {
   float arr[5] = {5.0, 8.31, 1.21, 3, 6};
   cout<<&arr<<"::"<<(&arr +1)<<"::"<<*(&arr+1)<<"::"<<arr<<endl;
   int len = *(&arr + 1) - arr;
   cout << "The length of the array is: " << len<<endl;
   return 0;
}
*/
/*
#include <iostream>
using namespace std;
int main() {
   int arr[5] = {4, 1, 8, 2, 9};
   int len = sizeof(arr)/sizeof(arr[0]);
   int s = sizeof(arr);
   int a = sizeof(arr[0]);
   cout << "The length of the array is: " << len<<"::"<<s<<"::"<<a<<endl;
   return 0;
}
*/