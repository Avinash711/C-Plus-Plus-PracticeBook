#include <iostream>
using namespace std;

class deleteArray{
    private:
    int pos,size;
    int arr[10];
    public:
    void getData();
    void deleteAtPos();

};
void deleteArray::getData(){
    cout<<"\nEnter The size of the array:"<<" ";
    cin >> size;
    cout<<"\nEnter the array:"<<endl;
    for (int ele =0;ele<size;ele++){;
        cin>>arr[ele];
        cout<<" ";
    }
    cout<<endl;
    cout<<"\nEntered array is: "<<endl;
    for (int el =0 ; el<size;el++){
        cout<<arr[el]<<" ";
    }
    cout<<endl;
}

void deleteArray::deleteAtPos(){
    cout<<"\nEnter the element position to delete the element at it::"<<" ";
    cin>>pos;
    cout<<endl;
    for (pos;pos <size;pos++){
        arr[pos-1] = arr[pos];
    }
    size--;

    cout<<"\nArray after element "<<arr[pos-1]<<" got deleted as position "<<pos<<" i.e at index "<<pos-1<<endl;
    for(int el=0;el<size;el++){
        cout<<arr[el]<<" ";
    }
    cout<<endl;
}

int main(){
    deleteArray *ptr, del;
    ptr = &del;
    ptr->getData();
    ptr->deleteAtPos();
    return 0;
}