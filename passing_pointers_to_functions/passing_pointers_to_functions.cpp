#include <iostream>
using namespace std;

void foo(int*& p, int*& q) // p and q are not really pointers, they are reference parameters
{
    int *temp = p;
    p = q;
    q = temp;
}

void swap_values_only(int* &p, int* &q)
{
    int temp = *p;
    *p = *q;
    *q = temp;
}


int main()
{
    int x = 5, y = 2;
    int *xptr = &x, *yptr = &y;

    cout << "*xptr = " << xptr << endl;
    cout << "*yptr = " << yptr << endl;
    cout << *xptr << " " << *yptr << endl;

    swap_values_only(xptr, yptr); // notice we didn't write not &xptr or &yptr

    cout << "*xptr = " << xptr << endl;
    cout << "*yptr = " << yptr << endl;
    cout << *xptr << " " << *yptr << endl;


    return 0;
}