#include <iostream>
#include "clsRead.h"
using namespace std;

int main() {
    cout << "=== clsRead Test Program ===\n\n";

    // Test integer input
    int age = clsRead::ReadIntNumber("Enter your age");
    cout << "You entered age: " << age << "\n\n";

    // Test string input
    string name = clsRead::ReadString("Enter your name");
    cout << "Hello, " << name << "!\n\n";

    // Test range input
    int score = clsRead::ReadNumberInRange("Enter your score", 0, 100);
    cout << "Valid score: " << score << "\n\n";

    // Test positive number
    int posNum = clsRead::ReadPositiveIntNumber("Enter a positive integer");
    cout << "Positive number: " << posNum << "\n\n";

    // Test negative number
    int negNum = clsRead::ReadNegativeIntNumber("Enter a negative integer");
    cout << "Negative number: " << negNum << "\n\n";

    // Test number properties
    int oddNum = clsRead::ReadOddNumber();
    cout << "Odd number: " << oddNum << "\n";

    int evenNum = clsRead::ReadEvenNumber();
    cout << "Even number: " << evenNum << "\n";

    int primeNum = clsRead::ReadPrimeNumber();
    cout << "Prime number: " << primeNum << "\n";

    int palindromeNum = clsRead::ReadPalindromeNum();
    cout << "Palindrome number: " << palindromeNum << "\n";

    int perfectNum = clsRead::ReadPerfectNumber();
    cout << "Perfect number: " << perfectNum << "\n\n";

    cout << "=== Test Completed Successfully ===\n";
    return 0;
}
