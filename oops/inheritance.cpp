#include <iostream>
using namespace std;

class maruthi{
    private:
    int gears;
    public:
    void setGears(int num){
        gears = num;
        cout<<"\n Maruthi is a car\n";
        cout<<"\n It has "<<gears<< " gears"<<endl;

    }
};

class car:private maruthi{
    public:
    static int x;
    void showgears(int value){
        x = value;
        setGears(x);
    }
};
int car::x;

int main(){
    car c1;
    cout<<"\nparent gear priavte variable::\n"<<c1.x<<endl;
    //c1.setGears(10);
    c1.showgears(5);
    cout<<"\nparent gear priavte variable::\n"<<c1.x<<endl;
    return 0;
}