#include <iostream>
#include <string>

using namespace std;
typedef int myType;

myType main(){
	std::cout<<"\nHi!! Now i Wont stop here\n";
        static int val = 1;
        val++;
        string yes = "greater than 1";
        string no = "less than 1";
        bool boolean = true;
        string data = (val>1 ? yes : no);
        cout<<"\ndata is:"<<data<<endl;
        std::cout << "\nval is::" <<val<<std::endl;
        return 0;
}

