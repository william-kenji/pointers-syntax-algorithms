#include <iostream>
using namespace std;
 int main()
 {
    int size; // statically allocated
    int* aptr; // statically allocated
    cout << "Enter the size of an array: ";
    cin >> size;

    // create an array using DYNAMIC
    aptr = new int[size];

    // let the user populate the array:
    for (int i = 0; i < size; i++)
    {
        cout << "Enter a number for element " << i  << ": ";
        cin >> aptr[i];
    }

    // show the array to the user:
    for (auto i = 0; i < size; i++)
    {
        cout << *(aptr + i) << " ";
    }
    cout << endl;
    /*
    cout << "For a range-based for loop:\n";
    for(auto i : aptr)
    {
        cout << i << " ";
    }
    cout << endl;
    */

    // this doesn't work for arrays:    delete aptr;
    // to delete an array, you tell the compiler that you're not deleting just 4 bytes, but all the array
    delete [] aptr;


    /* // This thing below works, but it is not the best way to do it:
    int a[size];
    cout << "e:";
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    for (auto i : a)
    {
        cout << i;
    }
    */
 }