#include <iostream>
#include <string>  // For std::string [web:1]

using namespace std;  // Avoids std:: prefix (good for labs, debate scope later).

int main() {
    // Primitives: size matters (int: 4B, char:1B, float:4B) [web:3]
    // int num = 42;              // Whole number [-2^31 to 2^31-1].
    // char letter = 'A';         // Single char, single quotes.
    // char name[] = "Alex";      // C-string array (null-terminated).
    // string fullName = "Alex Nowicki";  // std::string (needs #include <string>).
    // float pi = 3.14f;          // Float literal (f suffix).
    // double bigPi = 3.14159;    // More precision (8B).
    // const int MAX = 100;       // Immutable (error if changed).

    // cout << "Num: " << num << endl;
    // cout << "Letter: " << letter << endl;
    // cout << "Name: " << name << endl;
    // cout << "Full: " << fullName << endl;
    // cout << "Pi: " << pi << ", Big: " << bigPi << endl;
    // cout << "Max: " << MAX << endl;

    // int a, b; cout << "Enter two ints: "; cin >> a >> b;
    // cout << "Sum: " << (a + b) << ", Prod: " << (a * b) << endl;

    return 0;
}

