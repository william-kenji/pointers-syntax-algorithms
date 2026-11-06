#include <iostream>
using namespace std;

void foo(int p)
{
    cout << *p << endl;
}


int main()
{
    int x = 9;
    int *p = &x;
    foo(&x)


    return 0;
}