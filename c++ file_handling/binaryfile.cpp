#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    // Variables to store data
    char name[20] = "Ram Hari";
    int age = 30;
    double salary = 50000.50;

    // Writing data to the file in binary mode
    ofstream outFile("data.txt", ios::binary);
    if (outFile.is_open())
    {
        // Write name
        outFile.write(reinterpret_cast<char *>(&name), sizeof(name));

        // Write age
        outFile.write(reinterpret_cast<char *>(&age), sizeof(age));

        // Write salary
        outFile.write(reinterpret_cast<char *>(&salary), sizeof(salary));

        outFile.close();
    }
    else
    {
        cerr << "Error opening file for writing." << endl;
        return 1;
    }

    // Reading data from the file in binary mode
    ifstream inFile("data.txt", ios::binary);
    if (inFile.is_open())
    {
        // Read name
        inFile.read(reinterpret_cast<char *>(&name), sizeof(name));
        inFile.read(reinterpret_cast<char *>(&age), sizeof(age));
        inFile.read(reinterpret_cast<char *>(&salary), sizeof(salary));

        inFile.close();

        // Displaying the read data
        cout << "Data read from the file:" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Salary: " << salary << endl;
    }
    else
    {
        cerr << "Error opening file for reading." << endl;
        return 1;
    }

    return 0;
}
