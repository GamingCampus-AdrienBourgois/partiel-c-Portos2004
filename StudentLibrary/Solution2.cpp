#include "Solution2.h"
#include <fstream>
#include <stdexcept>

#include <ostream>

// Don't forget to enable the exercise in the SudentConfiguration.h file !
#include "StudentConfiguration.h"
#ifdef COMPILE_EXERCICE_2

float Solution2::GetBalance(const std::string& accountName)
{
    try {
        std::string fileName = "BankAccount/" + accountName + ".txt";
        std::ifstream file(fileName);

        if (!file.is_open()) {
            throw std::runtime_error("File not found");
        }

        float balance = 0.0f;
        char operation;
        float amount;

        while (file >> operation >> amount) {
            if (operation == '+') {
                balance += amount;
            }
            else if (operation == '-') {
                balance -= amount;
            }
        }

        file.close();

        return balance;
    }
    catch (const std::exception& e) {
        return -1.0f;
    }
}
#endif
