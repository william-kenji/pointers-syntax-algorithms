#include <iostream>
using namespace std;

/*
    Dynamic memory allocation:
    - memory allocated at RUN TIME
    Static Memory allocation:
    - Memory allocated at COMPILE TIME (e.g., int i; double x; string h;)
*/
// Kewords for dynamic memory allocation:
// new, delete;

int main()
{
    // For all "new", you NEED to have an equivalent "delete"
    // else you get memory leaks
    // eventually you can run out of memory

    int* n = new int; // ask the operating system to give it four bytes during run time. "new" returns a memory address.
    // we access this new int via a pointer, not a simple name
    // you end up with n, which was already allocated, and the new int executes, it gets created
    // n was statically allocated at compile time, and an unnamed variable -- dynamically allocated at run time

    // no need to use &new, because it is already a memory address

    *n = 8; // dereferenced the memory address in "n", and new lives in "n" address
    
    int * o;
    o = new int;

    *o = 2;


    int sum = *n + *o;

    cout << "The sum of " << *n << " and " << *o << " is:\n";
    cout << sum << endl;





    delete n; // this releases the new memory allocation.
    delete o;

    return 0;
}