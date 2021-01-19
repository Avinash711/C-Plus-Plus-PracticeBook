#include <iostream>
#include <string>
using namespace std;

class studentNode{
    private:
      int nodeSize;
      string name;
      studentNode  *next = NULL, *head =NULL, *temp=NULL;
      studentNode* last=NULL;
    public:
      void addStudent(); 
      void showStudent();
};

void studentNode::addStudent(){
    cout<<"\nEnter the Number of Students to be recorded:: ";
    cin>>nodeSize;
    
    for(int num = 1;num<=nodeSize;num++){
        cin.ignore();
        cout<<"\nEnter the student name as entry number " <<num<<":"<<endl;
        cin>>name;
        cout<<endl;
        temp = new studentNode();
        temp->name = name;
        temp->next = NULL;
        if(head == NULL){// for first node only
            head = temp;
            last = head;
        }else{
             last->next = temp;
             last = temp;

        }
    }
   cout<<"Student list got created\n";
}
void studentNode::showStudent(){
    cout<<"\ndata in list are:"<<endl;
    while(head->next != NULL){
        cout<<head->name<< " ";
        head = head->next;
        if(head->next == NULL){
            cout<<head->name;
            break;
        }
    }
    cout<<endl;

}

int main(){
    studentNode *ptr, obj;
    ptr = &obj;
    ptr->addStudent();
    ptr->showStudent();
    return 0;
}