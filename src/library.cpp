#include "library.hpp"
#include <iostream>
#include <string>
using namespace std;

Library::Library(string n, string a, int y, string desc)
{
    name = n;
    author = a;
    year = y;
    description = desc;
}

bool Library::is_taken()
{
    return taken;
}

void Library::take()
{
    if(taken)
    {
        cout << "Book already taken!" << endl;
    }
    else
    {
        taken = true;
        cout << "Taken";
    }
}

void Library::give()
{
    if(taken)
    {
        taken = false;
        cout << "Given";
    }
    else {
        cout << "Book already given!" << endl;
    }
}