//  ios :: in
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    char name[25], email[25];
    ofstream myfile;
    // myfile.open("newfile.doc", ios::app);
    myfile.open("newfile.doc", ios::app);
    cout << "Enter Name: ";
    cin >> name;
    myfile << name << "\n";
    cout << "enter email: ";
    cin >> email;
    myfile << email << "\n";
    myfile.close();

    ifstream myfile2;
    myfile2.open("newfile.doc", ios::in);
    // myfile.open("newfile.doc", ios::in|ios::ate);
    if (myfile2)
    {
        cout << "file exists lets continue" << endl;
    }

    else
    {
        cout << "cant open file, make sure the file exist";
        exit(0);
    }

    myfile2 >> name;
    myfile2 >> email;
    cout << "data from file" << endl;
    cout << "name is: " << name << endl;
    cout << "email is: " << email << endl;
    return 0;
}