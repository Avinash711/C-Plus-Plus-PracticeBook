
#include <iostream>
#include <string>
using namespace std;

class emp{
    private:
    int id;
    //char name[20];
    string name;
    string email;
    public:
    void getDet();
    void printDet();
};

void emp::getDet(){
    cout << "What is your id?";
	cin>>id;
    cout<<endl;
    cin.ignore();
    cout << "What is your name?";
	getline(cin, name);
    cout<<endl;
    cout << "What is your email?";
	cin>>email;
    cout<<endl;
}
void emp::printDet(){
    cout<<"\nEmployee id is: "<<id<<endl;
    cout<<"\nEmplyee's name is: "<<name<<endl;
    cout<<"\nEmplyee's email is: "<<email<<endl;
}

int main(){
    //object declaration
    emp s;
    s.getDet();
    s.printDet();
    return 0;

}
/*
#include <iostream>
#include <string>

using namespace std;

int main ()
{
	string x;

	cout << "What is your name?";
	getline(cin, x);
	cout <<"Hello, "<<x;

  //system("pause");
  return 0;
}
*/
