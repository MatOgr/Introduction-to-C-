#include <iostream>
#include <string>
using namespace std;

// Function prototype (forward declare).
int add(int a, int b);  // Returns int, takes two ints.

// Define function: Reusable code block.
int add(int a, int b) {
    return a + b;  // Early return ok.
}

string greet(string name) {
    return "Hello, " + name + "!";  // String concat.
}

int main() {
    int sum = add(3, 4); cout << "Sum: " << sum << endl;
    string msg = greet("Class"); cout << msg << endl;

    // Exercise stub: Uncomment, call with cin inputs.
    cout << "Gimme 2 numbers (separately, plizzz)…: ";
    int x, y; 
    cin >> x >> y; 
    cout << "The sum of " << x << "+" << y << " izzzzz...: " << add(x,y) << endl;

    return 0;
}


