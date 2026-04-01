#include <iostream>
using namespace std;

int main() {
    int number1, number2, number3;
    cout << "enter a number: ";
    cin >> number1;
    cout << "enter another number: ";
    cin >> number2;
    cout << "enter one more number: ";
    cin >> number3;
    
    cout << "the numbers you entered are: " << number1 << ", " << number2 << ", " << number3 << endl;
    cout << "number1 + number2 + number3 = " << number1 + number2 + number3 << endl;
    cout << "the average of the number is: " << (number1 + number2 + number3) / 3.0 << endl;
    
    return 0;
}