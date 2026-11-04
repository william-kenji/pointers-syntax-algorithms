#include <iostream>
#include <string>
using namespace std;
int main()
{
    char choice;
    string sep = "----\n";
    string declare = "Assume we declared:\n\nint m = 10; // assumed to be at address 20300\n\nint n = 20; // assumed to be at address 20304\n\nint* p = &m; // pointer\n\n";
    // Syntax for pointers:
    cout << declare << endl << endl << sep;

    cout << "p is the address of m\n" << sep;
    cout << "string c = \"Hello\"; int* p = c; // This is an ERROR: pointers must match the type of data they are pointing to!\n" << sep;
    cout << "*p is the value stored at that address\n" << sep;
    cout << "&n is the address of n\n" << sep;
    cout << "p = &n; // Set p to the address of n.\n" << sep;
    cout << "*p is the value stored at the changed address. It will be equal to 20.\n" << sep;
    cout << "m = p; // This is an error because m is an int, and p is an int* (pointer). These are NOT compatible\n" << sep;
    cout << "m = *p; // This is perfectly fine. It stores 20 into m.\n" << sep;
    cout << "&10 // ERROR - you can only take the address of a variable.\n" << sep;
    cout << "&p is the address of p, perhaps 20308. It is the location of a pointer variable, not the location of an integer.\n" << sep;
    cout << endl << endl;
    for (int c = 0; c < declare.length(); c++)
        cout << "-";
    cout << endl << "Let's see if you understood:\n" << endl;
    cout << "Will this code work?:\n";
    cout << "+--------------+" << endl;
    cout << "|double x = 0; |" << endl;
    cout << "|p = &x;       |" << endl;
    cout << "+--------------+" << endl;
    cout << endl << "Enter you choice (Y/N): ";
    cin >> choice;
    string explanation = "Pointers have to be compatible with the data type whose memory address they point to.";
    if (choice == 'N' || choice == 'n')
    {
        cout << "That's right! " << explanation << endl;
        cout << "Well done!\n";
    }
    else
    {
        cout << "That's not right! Here's why: " << explanation << endl;
    }
    return 0;
}