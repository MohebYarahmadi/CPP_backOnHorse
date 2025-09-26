#include <iostream>
using namespace std;

int main() {
    
  int x = 0;
  int y = 0;
    
  cout << "Please enter 2 number: ";
  cin >> x >> y;
    
  if (x > y) {
    cout << x << " is greater" << endl;
  }
  else if (x < y) {
    cout << y << " is greater" << endl;
  }
  else {
    cout << "Equal" << endl;
  }
  
  bool is_active = false;
  
//  why use static_cast<int>? boolean variable (bool) in a switch statement, but your case labels are integers (1 and 0)
  switch (static_cast<int>(is_active)) {
    case 1: {
      cout << "active now" << endl;
      break;
    }
    case 0: {
      int nn = 123;
      cout << "deactive for now" << endl;
      cout << nn << endl;
      break;
    }
    default: {
      cout << "bad luck, how?" << endl;
      break;
    }
  }
  
  int n1 = 5;
  int n2 = 9;
  int max = 0;
//  (boolean expression) ? (true expression) : (false expression);
  n1 > n2 ? max = n1 : max = n2;
  cout << "The max is: " << max << endl;
  return 0;
}