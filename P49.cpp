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
    cout<<"Enter Any integer to write in file : ";
    cin>>data;
    outfile<<data;
    string name="Taqi Haider";
    outfile<<"\t"<<name;
    string name1="CT-092";
    outfile<<"\t"<<name1;
    outfile.close();
    ifstream infile("Taqi.txt");
    if(!infile.is_open()){
        cout<<"Error reading the file 'Taqi.txt' "<<endl;
    }
    int dataRead;
    infile >> dataRead; // Read the integer from the file

    string line;
    getline(infile, line); // Read the remaining line (containing the string)
    infile.close(); // Close the file after reading
    cout<<"File is read successfully and close also";
    return 0;
}