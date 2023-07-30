#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream my_file;
    my_file.open("file2.txt", ios::out);
    if (!my_file)
    {
        cout << "File not created!\n";
    }
    else
    {
        cout << "File created successfully!\n";
        my_file.close();
    }
    my_file.open("file2.txt", ios::out);
    if (!my_file)
    {
        cout << "File not created!\n";
    }
    else
    {
        cout << "File created successfully!\n";
        my_file << "TAQi HAIDER CT-092\n";
        my_file.close();
    }
    my_file.open("file2.txt", ios::in);
    if (!my_file)
    {
        cout << "No such file!\n";
    }
    else
    {
        cout << "File opened successfully!\n";
        char ch;
        while (my_file.get(ch))
        {
            cout << ch;
        }
        my_file.close();
    }
    ifstream openFile("file2.txt");
    char ch;
    if (!openFile)
    {
        cout << "No such file";
    }
    else
    {
        while (!openFile.eof())
        {
            openFile.get(ch);
            cout << ch;
        }
    }
    openFile.close();
}
