# Cpp-Read-Library
🔥 This highlights robustness, safety, and utility, which are attractive keywords for developers browsing GitHub.

clsRead - C++ Input Utility Class

A robust, header-only C++ library for safe input handling, validation,
and number utilities.

🚀 Features

-   Read integers, floats, doubles, strings, and characters safely
-   Validate numbers (positive, negative, odd, even, prime, palindrome,
    perfect)
-   Read numbers within a specified range
-   Read arrays of numbers, characters, or strings
-   Protect against invalid input with automatic re-prompting

📂 Project Structure

    CppInputReader/
    │
    ├── include/
    │   └── clsRead.h        # The header-only input class
    ├── src/
    │   └── main.cpp         # Example usage / test file
    └── README.md            # Documentation

🛠 Usage Example

    #include <iostream>
    #include "clsRead.h"
    using namespace std;

    int main() {
        int age = clsRead::ReadIntNumber("Enter your age");
        cout << "You entered: " << age << endl;

        string name = clsRead::ReadString("Enter your name");
        cout << "Hello, " << name << "!" << endl;

        return 0;
    }

⚡ Build & Run

    g++ src/main.cpp -Iinclude -o app
    ./app

📌 Why clsRead?

Instead of manually validating input every time, clsRead provides
reusable, safe, and flexible input functions. It saves development time
and reduces bugs caused by invalid user input.

🏷 Suggested Tags

-   cpp
-   input-validation
-   header-only
-   utility-library
-   c++17

📄 License

This project is open-source and available under the MIT License.
