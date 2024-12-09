#include "File.h"

File::File(){
    name = "Test";
    content = "Test Content \n l2 \n l3";
    lastMod = Date();
}

File::File(string n, string c, Date &d){
    name = n;
    content = c;
    lastMod = d;
}

bool File::lessThan(Date &date){
    return lastMod.lessThan(date);
}

bool File::lessThan(File &f){
    return lastMod.lessThan(f.getDate());
}

Date & File::getDate(){
    return lastMod;
}

bool File::isName(string s)
{
    return s == name;
}

void File::print() {
    cout << "' "<<name  << " ' added on : "<< endl;
    lastMod.print();
}

void File::printContents() {
    cout << "------ Content Start ------\n\n"
    << name << " added on : "<< endl;
    lastMod.print();
    cout << "\n" <<content 
    << "\n------  Content end  ------" << endl;
}
