#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class emp{
    private:
    string name;
    static int id;//static data member
    public:
    static void setid(int empid){//static member function
        id = empid;
        
    }
    void show(){
        //cin.ignore();  
        cout<<"\nEnter the name:: "<<endl;
        getline(cin, name);
        cout<<endl;
        cout<<"\nemployee id is: "<<setw(10)<<setiosflags(ios::left)<<id<<endl;
        cout<<"\nemployee name is: "<<setw(10)<<setiosflags(ios::left)<<name<<endl;
    }
};
int emp::id = 75801;

int main(){
    emp e;
    emp::setid(75800);
    e.show();
    return 0;
}