# clsInputValidate

`clsInputValidate` is a powerful 🔥  **C++ utility class** for handling **user input validation** in console-based applications.  
It ensures safer and cleaner input management by forcing correct values through validation loops until valid input is entered.

---

## ✨ Features

- ✅ **Validation for different data types**
  - `int`, `short`, `float`, `double`, `long long`
  - `string`, `char`, `bool`
- ✅ **Validation for numbers with conditions**
  - Positive / Negative numbers
  - Odd / Even numbers
  - Prime, Perfect, and Palindrome numbers
- ✅ **Range-based validation**
  - Ensure numbers or dates fall between given ranges
- ✅ **Date handling**
  - Validate a date
  - Check if a date lies between two other dates
- ✅ **String & Character input**
  - Read single characters or full strings safely
- ✅ **Array input**
  - Read arrays of numbers, strings, or characters with validation
- ✅ **Error handling**
  - Automatically re-prompts user on invalid input
- ✅ **Utility integrations**
  - Supports `clsDate`, `clsMath`, and `clsUtil` for extended functionality

---

## 📦 Dependencies

This class depends on the following headers:
- `clsDate.h` → Date handling and validation  
- `clsMath.h` → Mathematical checks (odd, even, prime, etc.)  
- `clsUtil.h` → Utility enums and helpers  

⚠️ Make sure these files are included in your project before using `clsInputValidate`.

---

## 🚀 Example Usage

### 1. Reading an Integer
```cpp
#include "clsInputValidate.h"
#include <iostream>
using namespace std;

int main() {
    int age = clsInputValidate::ReadIntNumber("Please enter a valid age: ");
    cout << "You entered: " << age << endl;
    return 0;
}
```

### 2. Reading an Integer Between Two Values
```cpp
int grade = clsInputValidate::ReadIntNumberBetween(0, 100, "Enter a grade between 0 and 100: ");
cout << "Valid grade: " << grade << endl;
```

### 3. Reading Positive & Negative Numbers
```cpp
double salary = clsInputValidate::ReadPositiveDoubleNumber("Enter a positive salary: ");
cout << "Your salary: " << salary << endl;

int debt = clsInputValidate::ReadNegativeIntNumber("Enter a negative debt value: ");
cout << "Your debt: " << debt << endl;
```

### 4. Validating Dates
```cpp
clsDate d1(1, 1, 2024);
clsDate d2(31, 12, 2024);
clsDate today(5, 9, 2025);

if (clsInputValidate::IsDateBetween(today, d1, d2)) {
    cout << "Date is within the range" << endl;
} else {
    cout << "Date is out of range" << endl;
}
```

### 5. Reading Special Numbers
```cpp
int odd = clsInputValidate::ReadOddNumber("Enter an odd number: ");
cout << "Odd number: " << odd << endl;

int prime = clsInputValidate::ReadPrimeNumber("Enter a prime number: ");
cout << "Prime number: " << prime << endl;

int perfect = clsInputValidate::ReadPerfectNumber("Enter a perfect number: ");
cout << "Perfect number: " << perfect << endl;

int palindrome = clsInputValidate::ReadPalindromeNumber("Enter a palindrome number: ");
cout << "Palindrome number: " << palindrome << endl;
```

### 6. Reading Strings and Characters
```cpp
string name = clsInputValidate::ReadString();
cout << "Hello, " << name << "!" << endl;

char initial = clsInputValidate::ReadCharacter("Enter your initial: ");
cout << "Your initial: " << initial << endl;
```

### 7. Reading Arrays
```cpp
int arr[5];
clsInputValidate::ReadArrayOfNumber(arr, 5);

cout << "You entered: ";
for (int i = 0; i < 5; i++) {
    cout << arr[i] << " ";
}
cout << endl;
```

---

## 🧪 Testing Example

Code:
```cpp
int num = clsInputValidate::ReadPositiveIntNumber("Enter a positive integer: ");
cout << "Valid input: " << num << endl;
```

**Console Output Example:**
```
Enter a positive integer: -5
Invalid input, enter positive number
Enter a positive integer: 0
Invalid input, enter positive number
Enter a positive integer: 12
Valid input: 12
```

---

## 📘 Best Practices

- Always provide **clear error messages** to guide the user.  
- Use **range-based validation** for numeric inputs wherever applicable.  
- Validate **date ranges** to avoid logical errors in applications.  
- Use **specific methods** (odd, prime, etc.) for strict validation.  

---

## 📄 License

This project is open-source and free to use under the **MIT License**.

