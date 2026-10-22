#include <iostream>
#include "src/library.hpp"
#include <ostream>
#include <vector>
using namespace std;

int main()
{
    vector<Library> books;
    cout << "#############################################" << endl;
    cout << "#                  Library                  #" << endl;
    cout << "#############################################" << endl;
    cout << "What enters, remains (except if all the" << endl;
    cout << "library would catch on fire)" << endl;
    cout << endl;
    cout << endl;

    char option;
    while(true)
    {
        cout << endl;
        cout << "Options:" << endl;
        cout << "| a - list all books` names" << endl;
        cout << "| A - list all books` details (working on it)" << endl;
        cout << "| n - new book" << endl;
        cout << "| t - take a book" << endl;
        cout << "| g - give a book" << endl;
        cout << "| c - check if a book is taken" << endl;
        cout << "| E - BURN all books and the library itself" << endl;
        cout << "! r - README before adding books" << endl;
        cout << "| q - quit" << endl;
        cout << "--- option: "; cin >> option; cout << endl;
        //cout << "|" << endl;
        //cout << "|" << endl;
        //cout << "|" << endl;
        cout << endl;
        
        switch (option)
        {
            case 'a':
                for(int i = 0; i < books.size(); i++)
                {
                    cout << "| " << books[i].name << endl;
                }
                break;
                
            case 'A':
                cout << "Working on it, check github" << endl;
                break;
                
            case 'n':
            {
                string name, author, description;
                int year;
                cout << "Name: ";
                cin >> name;
                cout << "Author: ";
                cin >> author;
                cout << "Year: ";
                cin >> year;
                cout << "Short description: ";
                cin >> description;
                Library b(name, author, year, description);
                books.push_back(b);
                break;
            }
            
            case 't':
                break;
                
            case 'g':
                break;
                
            case 'c':
                break;
                
            case 'E':
                break;
                
            case 'q':
                return 0;
                break;
                
            case 'r':
                cout << "Beacuse of my prefrences, I didn`t fix the bug of names," << endl;
                cout << "authors` names and descriptions being 2+ words, which" << endl;
                cout << "usually breaks the program" << endl;
                cout << "!! USE ONLY ONE WORD FOR TEXT INPUTS" << endl;
                break;
                
            //case '':
            //    break;
            
            default:
                cout << "invalid expression";
            
        }
    }
    return 0;
}