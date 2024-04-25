// Your First C++ Program

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    char name[25], email[25];
    ifstream infile;
    infile.open("contact.doc");
    // infile >> name;
    infile >> email;
    cout << "data from file" << endl;
    cout << "name is: " << name << endl;
    cout << "email is: " << email << endl;
    return 0;
    return 0;
}