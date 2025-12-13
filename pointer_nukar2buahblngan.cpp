#include <iostream>
using namespace std;

// Fungsi untuk menukar dua nilai menggunakan pointer
void tukar(int *a, int *b) {
    int temp = *a;  
    *a = *b;        
    *b = temp;      
}

int main() {
    int A, B;

    cout << "Masukkan nilai A: ";
    cin >> A;
    cout << "Masukkan nilai B: ";
    cin >> B;

    cout << "\nSebelum ditukar:" << endl;
    cout << "A = " << A << endl;
    cout << "B = " << B << endl;

    // Panggil fungsi tukar
    tukar(&A, &B);

    cout << "\nSetelah ditukar:" << endl;
    cout << "A = " << A << endl;
    cout << "B = " << B << endl;

    return 0;
}

