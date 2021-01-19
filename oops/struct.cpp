#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct employee{
        int val1, val2;
        string name;
};

employee emp_func(employee E){
    E.val1 = 100;
    E.val2 = 200;
    E.name = "Avinash Kumar Gaurav";
   
    return (E);
}

int main(){
    employee emp;
    emp = emp_func(emp);
    cout<<"c++ version "<<__cplusplus<<endl;
    cout<<"value 1: "<< setw(5)<<setiosflags(ios::left)<<emp.val1<<endl;
    cout<<"value 2: "<< setw(5)<<setiosflags(ios::left)<<emp.val2<<endl;
    cout<<"name   : "<< setw(5)<<setiosflags(ios::left)<<emp.name<<endl;
    return 0;

}