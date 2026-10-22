#pragma once
#include <string>

class Library
{
public:
    Library(std::string n, std::string a, int y, std::string desc);
    bool is_taken();
    void take();
    void give();

    std::string name;
    std::string author;
    int year;
    std::string description;
private:
    bool taken = true;
};