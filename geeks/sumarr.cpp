#include <iostream>
using namespace std;

class sumarr{
    public:
        int sum(int arr[], int n);

};

int sumarr::sum(int arr[], int n){
    int sum = 0;
    for (int i = 0; i<n;i++){
        sum+= arr[i];
    }
    cout<<"\nresult is :\n"<<sum<<endl;


}



int main(){
    int t;
    cout <<"\nEnter the test cases:\n";
    cin >>t;
    for (int iter=0;iter<t;iter++){
        int n;
        int arr[n];
        cout<< "\nEnter the size of array\n";
        cin>>n;
        cout<<"\nEnter the array Elements\n";
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sumarr ob;
        ob.sum(arr, n);
        //cout << "\nResult is:\n"<<ans<<endl;

    }
    return 0;
}