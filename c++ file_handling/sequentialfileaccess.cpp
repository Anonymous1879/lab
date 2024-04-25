#include <iostream>
#include <fstream>
using namespace std;

class student
{
private:
public:
    char name[50];
    int roll;
    void read_data()
    {
        cout << "enter name: ";
        cin >> name;
        cout << "enter roll no: ";
        cin >> roll;
    }

    void show_data()
    {
        cout << "name is : " << name << endl;
        cout << "roll no is: " << roll << endl;
    }
};

void write_to_file()
{
    student stu;
    ofstream outfile;
    outfile.open("textfile.doc", ios::binary);
    stu.read_data();
    // outfile.write(reinterpret_cast<char *>(&stu), sizeof(stu));
    outfile << stu.name << endl;
    outfile << stu.roll << endl;
    outfile.close();
}

void read_from_file()
{
    student stu;
    cout << "Data from file is \n";
    ifstream infile;
    infile.open("textfile.doc", ios::binary);
    infile >> stu.name;
    infile >> stu.roll;
    stu.show_data();
    // while (!infile.eof())
    // {
    //     if (infile.read(reinterpret_cast<char *>(&stu), sizeof(stu)))
    //     {
    //         stu.show_data();
    //     }
    // }
}

int main()
{
    write_to_file();
    read_from_file();
    return 0;
}