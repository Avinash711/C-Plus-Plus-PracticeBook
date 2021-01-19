#include <iostream>
#include <string>
using namespace std;

class student{
   private:
   string name;
   int id;
   public:
   void stuFunc(int roll, string stuname){
       id = roll;
       name = stuname;

   }
   virtual void show(){
       cout<<"\n Student's id is :"<<id<<" and name is: "<<name<<".\n";
   }

};

class teacher:public student{
    private:
    string teacherName;
    int teacherId;
    public:
    void teaFunc(int tId, string tName){
        teacherId = tId;
        teacherName = tName;

    }
    void show(){
        cout<<"\n Teacher's id is :"<<teacherId<<" and name is: "<<teacherName<<".\n";
        }

};

// main
int main(){
    student *p , obj1;
    teacher obj2;
    cout<<"\nSize of pointer: "<<sizeof(*p)<<endl;
    p = &obj2;// early binding
    obj2.stuFunc(100, "Avinash");
    obj2.teaFunc(11, "Teacher");

    p->show();

    return 0;

}