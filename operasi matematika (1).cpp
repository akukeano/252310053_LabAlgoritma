#include <iostream>
using namespace std;

int main() {
    int x = 10; // variabel utama
    int y = 5; // variabel tambahan untuk contoh

    cout << "x = " << x << ", y = " << y << endl << endl;

    // 1. Operator Perbandingan
    cout << "=== Operator Perbandingan ===" << endl;
    cout << "x > y : " << (x > y) << endl;   // 10 > 5 ? true (1)
    cout << "x < y : " << (x < y) << endl;   // 10 < 5 ? false (0)
    cout << "x >= 10 : " << (x >= 10) << endl; // 10 >= 10 ? true (1)
    cout << "x <= 10 : " << (x <= 10) << endl; // 10 <= 10 ? true (1)
    cout << "x == 10 : " << (x == 10) << endl; // x sama dengan 10 ? true (1)
    cout << "x != 10 : " << (x != 10) << endl; // x tidak sama dengan 5 ? false (0)

    cout << endl;

    // 2. Operator Logika
    cout << "=== Operator Logika ===" << endl;
    cout << "(x > 9 && x < 10) : " << (x > 9 && x < 10) << endl; // AND ? true jika keduanya benar
    cout << "(x > 9 || x < 12) : " << (x > 9 || x < 12) << endl;    // OR ? true jika salah satu benar
    cout << "!(x == 5) : " << !(x == 5) << endl;                  // NOT ? negasi, true jika x bukan 5

    return 0;
}

