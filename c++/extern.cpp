#include <iostream>
using namespace std;

// variable declarations
extern int a, b;
extern float f;
int g;
// main
int main(){
    int a, b;
    cout<<"\nlocal variable a and b\n"<<a<<":"<<b<<":"<<g;
    float f;
    a = 10, b = 30; 
    f = float(a +b);
    cout<<"\nsum of "<<a<<" and "<<b<< " is: "<<f<<"\n";

enum color {blue, red=5, green};
cout<<"\nblue:"<<blue<<"\nred::"<<red<<"\ngreen:"<<green<<endl;
}


