#include <iostream>
#include <string>
using namespace std;

// Fungsi untuk menghitung jumlah karakter tertentu
int hitungKarakter(string kalimat, char dicari) {
    int jumlah = 0;
    for (int i = 0; i < kalimat.length(); i++) {
        if (kalimat[i] == dicari) {
            jumlah++;
        }
    }
    return jumlah;
}

int main() {
    string kalimat;
    char dicari;

    cout << "Masukkan sebuah kalimat: ";
    getline(cin, kalimat); // input kalimat bisa pakai spasi

    cout << "Masukkan karakter yang ingin dihitung: ";
    cin >> dicari;

    int hasil = hitungKarakter(kalimat, dicari);

    cout << "Jumlah karakter '" << dicari << "' dalam kalimat adalah: " << hasil << endl;

    return 0;
}

