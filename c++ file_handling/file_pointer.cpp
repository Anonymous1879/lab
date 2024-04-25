//  ios :: in
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    char name[25], email[25];
    fstream myfile;
    myfile.open("newfile.doc", ios::out);
    cout << "Enter Name 1: ";
    cin >> name;
    myfile << name << "\n";
    cout << "enter email 1: ";
    cin >> email;
    myfile << email << "\n";
    int mypos = myfile.tellg();
    cout << "position before seek" << mypos;
    myfile.seekg(5, ios::beg);
    mypos = myfile.tellg();
    cout << "position after seek" << mypos;
    cout << "Enter Name 2: ";
    cin >> name;
    myfile << name << "\n";
    cout << "enter email 2: ";
    cin >> email;
    myfile << email << "\n";
    myfile.close();

    myfile.open("newfile.doc", ios::in);
    if (myfile)
    {
        cout << "file exists lets continue" << endl;
    }

    else
    {
        cout << "cant open file, make sure the file exist";
        exit(0);
    }
    // myfile.seekp(10, ios::beg);
    // myfile.seekp(5, ios::cur);
    // // myfile.seekp(-20, ios::end);

    myfile >> name;
    myfile >> email;
    cout << "data from file" << endl;
    cout << "name is: " << name << endl;
    cout << "email is: " << email << endl;
    return 0;
}