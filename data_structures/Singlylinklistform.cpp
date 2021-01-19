#include <iostream>
using namespace std;

class node{
    private:
        int data;
        node* next;
    public:
    void createSingly();
};

void node::createSingly(){
    node* head = NULL;
    node* second = NULL;
    node* third = NULL;

    head = new node();
    second = new node();
    third = new node();

    head->data = 11;
    head->next = second;

    second->data = 22;
    second->next = third;

    third->data = 33;
    third->next = NULL;
    cout << "\nList contains values as:"<<endl;
    while (head->next != NULL){
        cout<<head->data<<" ";
        head = head->next;
        if(head->next == NULL){
            cout<<head->data<<endl;
            break;
        }
    }
    cout<<endl;
}

int main(){
    node *ptr, obj;
    ptr = &obj;
    ptr->createSingly();
    return 0;
}