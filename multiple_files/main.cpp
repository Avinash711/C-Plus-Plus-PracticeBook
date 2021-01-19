#include <iostream>
using namespace std;

extern void write(int val);
int main(){
    int val = 5;
    while(val--){
         write(val);
    }
   


}