#include <iostream>
using namespace std;

class emp2;
class emp
{
    private:
        int a, b;

    public:
        void setdata(int x, int y);
        friend void fun(emp e1, emp2 e2);
};

class emp2
{
    private:
        int m, n;

    public:
        friend void fun(emp e1, emp2 e2);
        void setdata2(int i, int j);
};

void emp :: setdata(int x, int y)
{
    a = x;
    b = y;
}
void emp2 :: setdata2(int i, int j)
{
    m = i;
    n = j;
}
void fun(emp e, emp2 es)
{
    cout << "\nsum of ist pair is:: " << e.a + es.m << endl;
    cout << "\nsum of 2nd pair is:: " << e.b + es.n << endl;
}

int main()
{
    emp e1;
    emp2 es;
    e1.setdata(2, 10);
    es.setdata2(10, 20);
    fun(e1, es);
    return 0;
}