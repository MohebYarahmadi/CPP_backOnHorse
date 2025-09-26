#include <iostream>
using namespace std;

int main() {
  int i = 1;
  const int MAX = 0;
  
  while (i <= MAX) {
    cout << "WHILE: We're in the while loop " << i << endl;
    i++;
  }
  
  do {
    cout << "DO: We're in the do while loop " << i << endl;
  } while (i <= MAX);
  
  for (int i = 10; i >= MAX; i--) {
    cout << "FOR: The current iteration is: " << i << endl;
  }
  
  
  return 0;
}