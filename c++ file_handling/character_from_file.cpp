//  ios :: in
#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main()
{
    int i;
    char name[25], email[25];
    fstream file;
    // file.open("putfile.doc", ios::out);
    // cout << "Enter Name: ";
    // cin >> name;
    // cout << "enter email: ";
    // cin >> email;

    // for (i = 0; i < strlen(name); i++)
    // {
    //     file.put(name[i]);
    //     // cout << name[i];
    //     file.put('\n');
    // }

    // for (i = 0; i < strlen(email); i++)
    // {
    //     file.put(email[i]);
    //     // cout << email[i];
    //     file.put('\n');
    // }

    // file.close();

    // Read from the file in binary mode
    file.open("putfile.doc", ios::in);
    if (file)
    {
        cout << "Reading data from file:" << endl;
        char ch;
        while (file.get(ch))
        {
            cout << ch;
        }
    }
    else
    {
        cout << "Unable to open file for reading." << endl;
    }

    file.close();
    return 0;
}