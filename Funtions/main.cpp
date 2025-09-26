#include <iostream>
using namespace std;

//function prototype
void PrintHello();
int Sum(int n1, int n2);

int Factorial(int number);

double Diameter(double radius);
double Circumference(double radius);
double Area(double radius);

int GetIntegerInput();

const double PI = 3.14159;

int main() {
  PrintHello();   //  using the function/ call it
  int sum = Sum(12, 22);
  cout << sum << endl;
  
  int x = 5;
  cout << "Using Recurtion:" << endl;
  cout << "The factorial of " << x << " is: " << Factorial(x) << endl;
  
  double radius;
  cout << "Please enter the radius of a circle: ";
  cin >> radius;
  cout << "Diameter of the cirle is: " << Diameter(radius) << endl;
  cout << "Circumference of the cirle is: " << Circumference(radius) << endl;
  cout << "Area of the cirle is: " << Area(radius) << endl;
  
  
  int number = GetIntegerInput();
  cout << "The number is: " << number << endl;
  
  return 0;
}


//define the actual function
void PrintHello() {
  cout << "Hello and welcome" << endl;
}

int Sum(int n1, int n2) {
  return n1 + n2;
}

//recursion
int Factorial(int number) {
  if (number == 1) {
    return 1;
  }
  return number * Factorial(number -1);
}

double Diameter(double radius) {
  return 2.0 * radius;
}

double Circumference(double radius) {
  return 2.0 * radius * PI;
}

double Area(double radius) {
  return PI * radius * radius;
}

int GetIntegerInput() {
//more info: https://www.geeksforgeeks.org/cpp/how-to-use-cin-fail-method-in-cpp/
  bool failure;
  int number;
  const int IGNORE_CHARS = 256;
  
  do {
    failure = false;
    cout << "Please enter an integer: ";
    cin >> number;
    
    if (cin.fail()) {
      cin.clear();
      cin.ignore(IGNORE_CHARS, '\n');
      cout << "Input error~ Please try again." << endl;
      failure = true;
    }
  } while (failure);
  
  return number;
}