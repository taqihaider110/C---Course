#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Creating a new file for writing
    std::ofstream outfile("new_file.txt");
    if (!outfile.is_open()) {
        std::cerr << "Error creating the file 'new_file.txt'" << std::endl;
        return 1;
    }

    // Writing data to the file
    int dataToWrite = 42;
    outfile << dataToWrite; // Writes an integer to the file

    std::string message = "Hello, world!";
    outfile << "\n" << message; // Writes a string to the file

    // Closing the file
    outfile.close();

    std::cout << "File 'new_file.txt' created and data written successfully." << std::endl;

    // Reopen the same file for reading
    std::ifstream infile("new_file.txt");
    if (!infile.is_open()) {
        std::cerr << "Error opening the file 'new_file.txt' for reading" << std::endl;
        return 1;
    }

    // Read data from the file
    int dataRead;
    infile >> dataRead; // Read the integer from the file

    std::string line;
    getline(infile, line); // Read the remaining line (containing the string)

    infile.close(); // Close the file after reading

    // Reopen the same file for writing (this will overwrite the existing content)
    std::ofstream outfile2("new_file.txt");
    if (!outfile2.is_open()) {
        std::cerr << "Error opening the file 'new_file.txt' for writing" << std::endl;
        return 1;
    }

    // Write new data to the file
    int newDataToWrite = 84;
    outfile2 << newDataToWrite; // Writes an integer to the file

    std::string newMessage = "Hello, C++!";
    outfile2 << "\n" << newMessage; // Writes a string to the file

    outfile2.close(); // Close the file after rewriting

    std::cout << "Data read and file rewritten successfully." << std::endl;

    return 0;
}
