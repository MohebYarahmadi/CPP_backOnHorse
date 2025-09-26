#include <iostream>
using namespace std;

int main() {
    char charInput;
    cout << "Type a character: ";
    cin >> charInput;
    
    int value = charInput;
    
    cout << "The ascii value of " << charInput << " is " << value << endl;
    
    return 0;
}