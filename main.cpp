#include <iostream>
#include "encryption.hpp"

int main() {
    char inputMode;
    std::string filename;

    std::cout << "*****FILE ENCRYPTION TOOL V1.0.0*****\n"; 
    std::cout << "Please ensure you have copied the file path for the file you would like to encrypt.\n";
    std::cout << "Enter the file path below.\n\n";
    getline(std::cin >> std::ws, filename);

    std::cout << "Would you like to encrypt or decrypt a file? Press 'e' for encryption and 'd' for decryption. \n\n";
    std::cin >> inputMode;

    if (inputMode == 'e' || inputMode == 'E') {
        if (encryptFile(filename, true)) {
            std::cout << "File encryption status: SUCCESS\n\n";
        }
        else {
            std::cerr << "File encryption status: ERROR. Unable to perform encryption.\n\n";
        }
    }

    else if (inputMode == 'd' || inputMode == 'D') {
        if (encryptFile(filename, false)) {
            std::cout << "File decryption status: SUCCESS\n\n";
        }
        else {
            std::cerr << "File decryption status: ERROR. Unable to perform decryption.\n\n";
        }
    }
    
    else {
        std::cerr << "ERROR: Invalid mode. Please enter a valid character.\n\n";
    }

    return 0;
}