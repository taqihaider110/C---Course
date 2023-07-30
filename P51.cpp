#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    char data[100];
    // open a file in write code
    ofstream outfile;
    outfile.open("array.dat");
    cout << "Writing to the file" << endl;
    cout << "Enter your name:";
    cin.getline(data, 100);
    // write input name into the file.
    outfile << data << endl;
    cout << "Enter your age:";
    cin >> data;
    cin.ignore();
    // again write input age into the file.
    outfile << data << endl;
    // close the opened file
    outfile.close();
    // open file in read mode
    ifstream infile;
    infile.open("array.dat");
    cout << endl
         << "Reading data fom file" << endl;
    infile >> data;
    // write the name at screen
    cout << "Name:" << data << endl;
    // again read the age from the file and display it
    infile >> data;
    cout << "Age: " << data << endl;
    // close the opened file
    infile.close();
    return 0;
}