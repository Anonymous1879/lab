// Your First C++ Program

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    char name[25], email[25];
    ofstream outfile("sambal.doc");
    cout << "Enter Name: ";
    cin >> name;
    outfile << name << "\n";
    cout << "enter email: ";
    cin >> email;
    outfile << email;
    return 0;
}