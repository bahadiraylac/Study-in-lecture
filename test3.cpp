
#include <iostream>
using namespace std;

int main() {
    double sayi1, sayi2;
    char islem;
    
    cout << "Ilk sayiyi girin: ";
    cin >> sayi1;
    
    cout << "Islem secin (+, -, *, /): ";
    cin >> islem;
    
    cout << "Ikinci sayiyi girin: ";
    cin >> sayi2;
    
    switch(islem) {
        case '+':
            cout << sayi1 << " + " << sayi2 << " = " << sayi1 + sayi2 << endl;
            break;
        case '-':
            cout << sayi1 << " - " << sayi2 << " = " << sayi1 - sayi2 << endl;
            break;
        case '*':
            cout << sayi1 << " * " << sayi2 << " = " << sayi1 * sayi2 << endl;
            break;
        case '/':
            if(sayi2 != 0)
                cout << sayi1 << " / " << sayi2 << " = " << sayi1 / sayi2 << endl;
            else
                cout << "Sifira bolme hatasi!" << endl;
            break;
        default:
            cout << "Gecersiz islem!" << endl;
    }
    
    return 0;
}