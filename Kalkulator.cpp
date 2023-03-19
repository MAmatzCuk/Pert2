#include <iostream>

using namespace std;

int main() {
    int a, b, hasil;
    char operasi;

    cout << "Kalkulator Sederhana" << endl;
    cout << "Masukkan angka pertama: ";
    cin >> a;
    cout << "Masukkan operator (+,-,*,/): ";
    cin >> operasi;
    cout << "Masukkan angka kedua: ";
    cin >> b;

    switch (operasi) {
        case '+':
            hasil = a + b;
            break;
        case '-':
            hasil = a - b;
            break;
        case '*':
            hasil = a * b;
            break;
        case '/':
            hasil = a / b;
            break;
        default:
            cout << "Operator yang dimasukkan salah" << endl;
            return 0;
    }

    cout << "Hasil: " << hasil << endl;

    return 0;
}