#include <iostream>
#include <string>

class Portal {
private:
    int userId;
    std::string password;

public:
    // Constructor to initialize user ID and password
    Portal(int id, const std::string& pwd) {
        userId = id;
        password = pwd;
    }

    // Method to display messages based on ID and password
    void display(int inputId, const std::string inputPwd) {
        if (inputId == userId && inputPwd == password) {
            std::cout << "Credentials matched. You are logged in successfully." << std::endl;
        } else if (inputId != userId) {
            std::cout << "ID is wrong." << std::endl;
        } else if (inputPwd != password) {
            std::cout << "Password is wrong." << std::endl;
        } else {
            std::cout << "Wrong credentials, try again." << std::endl;
        }
    }
};

int main() {
    // Create a Portal object with a user ID and password
    Portal portal(12345, "password123");

    // Test with different input values
    portal.display(12345, "password123"); // Correct credentials
    portal.display(54321, "password123"); // Incorrect ID
    portal.display(12345, "wrongpassword"); // Incorrect password
    portal.display(54321, "wrongpassword"); // Incorrect ID and password

    return 0;
}
