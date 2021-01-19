// array insertion program, at given position.
#include <iostream>
using namespace std;

class arrInsertion
{
private:
    int arr_size = 0, pos;
    int arr[50] = {0};
    int element;

public:
    void getData();
    void newArray();
};
void arrInsertion::getData()
{
    try
    {
        cout << "\nThis is Insertion of element at given position, pos" << endl;
        cout << "\nEnter the size of array:" << endl;
        cin >> arr_size;

        //----Array Input-----//
        for (int index = 0; index < arr_size; index++)
        {
            cout << "\nEnter the element, at postion:" << (index + 1) << endl;
            cin >> arr[index];
        }
        cout << "\nEntered Array Elements are:" << endl;
        for (int ind = 0; ind < arr_size; ind++)
        {
            cout << arr[ind] << " ";
        }

        //--------------------//
        cout << endl;
        cout << "\nEnter the Position at which element is to be inserted:" << endl;
        cin >> pos;
        cout << endl;
        if (pos < 0 || pos >= arr_size)
        {
            throw pos;
        }
        cout << "\nEnter the Element you want to Insert in the array at position " << pos << endl;
        cin >> element;
    }
    catch (int invalidPos)
    {
        cout << "\nEntered Position " << invalidPos << " is Invalid!!, Please validate!:)" << endl;
    }
}

void arrInsertion::newArray()
{
    try
    {
        int top_index = arr_size - 1;
        for (int top_index; top_index >= pos; top_index--)
        {
            arr[top_index + 1] = arr[top_index];
        }
        arr[pos] = element;
        arr_size++;
        cout << "\nElement " << element << " got inserted at position " << pos << " Successfully:)" << endl;
        cout << "\nYour New array after successful insertion is:" << endl;
        for (int ele = 0; ele < arr_size; ele++)
        {
            cout << arr[ele] << " ";
        }
        cout << endl;
    }catch(...)
    {
        cout << "\nException caught in function newarray()" << endl;
    }
}

// main
int main()
{
    arrInsertion *p, arr;
    p = &arr;
    p->getData();
    p->newArray();
    return 0;
}
