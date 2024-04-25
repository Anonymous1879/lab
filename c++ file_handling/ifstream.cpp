#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    char myname[50], myemail[50];
    ifstream file("sambal.doc");
    file >> myname;
    file >> myemail;
    // cout << "data from file" << endl;
    cout << "name is" << myname << endl;
    cout << "email is" << myemail << endl;
    return 0;
}