# Experiment-13-
# Constructor Overloading
# Aim:
To demonstrate the concept of function overloading in programming, showcasing how multiple functions with the same name can be defined with different parameters.

# Theory:
Function Overloading is a feature in many programming languages (like C++, Java, and Python) that allows the creation of multiple functions with the same name, provided they have different parameter lists. This increases the readability of the code and allows functions to perform similar tasks with different types or numbers of inputs.

# Key Points:

1)Same Name: Functions share the same name.

2)Different Parameters: Functions differ in type, number, or order of parameters.

3)Compile-Time Polymorphism: Overloading is resolved at compile time.
#include <iostream>
using namespace std;

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Function to add two doubles
double add(double a, double b) {
    return a + b;
}

// Function to add three integers
int add(int a, int b, int c) {
    return a + b + c;
}

int main() {
    cout << "Sum of 2 and 3: " << add(2, 3) << endl; // Calls int add(int, int)
    cout << "Sum of 2.5 and 3.5: " << add(2.5, 3.5) << endl; // Calls double add(double, double)
    cout << "Sum of 1, 2, and 3: " << add(1, 2, 3) << endl; // Calls int add(int, int, int)
    return 0;
}


### Algorithm to Define a Class with Method Overloading

1. **Define the Addition Class**:
   - Create a class named `addition`.
   - Define a public method `sum(int a, int b)`:
     - This method takes two integer parameters and returns their sum.
   - Define another public method `sum(int a, int b, int c)`:
     - This method takes three integer parameters and returns their sum.

2. **Main Function**:
   - Create an instance of the `addition` class named `obj`.
   - Declare integer variables `a`, `b`, and `c`.
   - Prompt the user to enter two numbers:
     - Read the values into `a` and `b`.
     - Call `obj.sum(a, b)` and print the result.
   - Prompt the user to enter three numbers:
     - Read the values into `a`, `b`, and `c`.
     - Call `obj.sum(a, b, c)` and print the result.


### Outcome
- The program prompts the user for input and outputs the sums:
  ```
  Enter two numbers: 3 5
  8
  Enter three numbers: 1 2 3
  6
  ```
### Algorithm for Complex Number Class with Operator Overloading

1. **Define the Complex Class**:
   - Create a class named `Complex`.
   - Declare private member variables:
     - `int real`: to store the real part of the complex number.
     - `int imag`: to store the imaginary part of the complex number.

2. **Constructors**:
   - **Parameterized Constructor**:
     - Define a constructor `Complex(int r, int i)` that initializes `real` and `imag` with the provided values (defaulting to `0` if no values are provided).
   - **Default Constructor**:
     - Define a default constructor `Complex()` that initializes `real` and `imag` to `0`.

3. **Overloaded + Operator**:
   - Define a member function `Complex operator + (Complex const& obj) const`:
     - Create a temporary `Complex` object `res`.
     - Set `res.real` to the sum of the real parts of the current object and `obj`.
     - Set `res.imag` to the sum of the imaginary parts of the current object and `obj`.
     - Return the `res` object.

4. **Print Method**:
   - Define a member function `void print() const`:
     - Print the complex number in the format `real + i imag`.

5. **Main Function**:
   - Create two `Complex` objects `c1` and `c2` initialized with `(10, 5)` and `(2, 4)` respectively.
   - Create a third `Complex` object `c3` by adding `c1` and `c2` using the overloaded `+` operator.
   - Call the `print()` method on `c3` to display the result.

### Outcome
- The program outputs:
  ```
  12+i9
  ```


