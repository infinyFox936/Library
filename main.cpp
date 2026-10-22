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
    cout << "What enters, remains (ExcEpt if all thE" << endl;
    cout << "library would catch on firE)" << endl;
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
                cout << "More featues probably coming but I`m not sure yet" << endl;
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
            {
                string n;
                bool found = false; //check is there was a book found to display inalid name
                                    //outside of for
                cout << "Name: ";
                cin >> n;
                for(int i = 0; i < books.size(); i++)
                {
                    if(n == books[i].name)
                    {
                        books[i].take();
                        found = true;
                        break;
                    }
                }
                if(!found)
                {
                    cout << "Invalid name" << endl;
                }
                break;
            }

            case 'g':
            {
                string n;
                bool found = false; //check is there was a book found to display inalid name
                                    //outside of for
                cout << "Name: ";
                cin >> n;
                for(int i = 0; i < books.size(); i++)
                {
                    if(n == books[i].name)
                    {
                        books[i].give();
                        found = true;
                        break;
                    }
                }
                if(!found)
                {
                    cout << "Invalid name" << endl;
                }
                break;
            }

            case 'c':
            {
                string n;
                cout << "Name: ";
                cin >> n;
                for(int i = 0; i < books.size(); i++)
                {
                    if(n == books[i].name)
                    {
                        if (books[i].is_taken())
                        {
                            cout << "The book is taken" << endl;
                        }
                        else
                        {
                            cout << "The book is not taken" << endl;
                        }
                        break;
                    }
                }
                break;
            }

            case 'E':
                books.clear();
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
