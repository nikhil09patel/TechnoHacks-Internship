#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

std::string generateRandomPassword(int length) {
    std::string password;
    std::string characters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()";

    srand(time(0));

    for (int i = 0; i < length; i++) {
        int randomIndex = rand() % characters.length();
        password += characters[randomIndex];
    }

    return password;
}

int main() {
    int passwordLength;

    std::cout << "Random Password Generator" << std::endl;
    std::cout << "Enter the desired password length: ";
    std::cin >> passwordLength;

    std::string password = generateRandomPassword(passwordLength);

    std::cout << "Generated Password: " << password << std::endl;

    return 0;
}
