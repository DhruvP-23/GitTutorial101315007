#ifndef FILE_H
#define FILE_H

#include <iostream>
#include <string>
#include <iomanip>
#include "Date.h"

using namespace std;

class File
{
public:
    File();
    File(string, string, Date &);

    bool lessThan(Date &date);
    bool lessThan(File &f);
    void print();
    void printContents();
    Date &getDate();
    bool isName(string s);

private:
    string name;
    string content;
    Date lastMod;
};
#endif