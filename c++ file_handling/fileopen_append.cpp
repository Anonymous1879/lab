//  ios :: in
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    char name[25], email[25];
    fstream myfile;
    // myfile.open("newfile.doc", ios::app);
    cout << "Enter Name: ";
    cin >> name;
    myfile << name << "\n";
    cout << "enter email: ";
    cin >> email;
    myfile << email << "\n";
    myfile.close();

    fstream myfile;
    char name[25], email[25];
    myfile.open("newfile.txt", ios::in);
    // myfile.open("newfile.doc", ios::in|ios::ate);
    if (myfile)
    {
        cout << "file exists lets continue" << endl;
    }

    else
    {
        cout << "cant open file, make sure the file exist";
        exit(0);
    }

    myfile >> name;
    myfile >> email;
    cout << "data from file" << endl;
    cout << "name is: " << name << endl;
    cout << "email is: " << email << endl;
    return 0;
}