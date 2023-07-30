#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream outfile("Taqi.txt");
    if(!outfile.is_open()){
        std::cerr << "Error creating the file 'new_file.txt'" << std::endl;
        return 1;
    }
    else{
        cout<<"File created successfully:\n";
    }
    int data;
    cout << "Enter Roll no to write in file : ";
    cin >> data;

    string name = "Taqi Haider";
    string name1 = "CT-092";

    // Writing data to the file with separators
    outfile << data << "\n";
    outfile << name << "\n";
    outfile << name1 << "\n";

    outfile.close();
    ifstream infile("Taqi.txt");
    if(!infile.is_open()){
        cout<<"Error reading the file 'Taqi.txt' "<<endl;
    }
    infile >> data; // Read the integer from the file
    cout<<"The Age is: "<<data<<endl;
    infile.ignore();
    getline(infile,name); // Read the remaining line (containing the string)
    cout<<"The Name is :"<<name<<endl;
    getline(infile,name1);
    cout<<"The Roll no is :"<<name1<<endl;
    infile.close(); // Close the file after reading
    cout<<"File is read successfully and closed!";
    return 0;
}