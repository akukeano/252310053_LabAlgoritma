#include <iostream>
using namespace std;

// Fungsi: menerima jenis tujuan + suhu (dalam Celcius)
// lalu mengembalikan hasil konversi
float konversiSujuTujuan(char tujuan, float celcius) {

    if (tujuan == 'C' || tujuan == 'c') {
        return celcius;
    }
    else if (tujuan == 'F' || tujuan == 'f') {
        return (celcius * 9/5) + 32;
    }
    else if (tujuan == 'K' || tujuan == 'k') {
        return celcius + 273.15;
    }

    return 0;
}

int main() {
    char asal, tujuan;
    float nilai, celcius;

    cout << "Masukkan jenis suhu asal (C/F/K): ";
    cin >> asal;

    cout << "Masukkan nilai suhu: ";
    cin >> nilai;

    cout << "Ingin dikonversi ke jenis apa? (C/F/K): ";
    cin >> tujuan;

    // Tahap 1: ubah asal -> Celcius dulu
    if (asal == 'C' || asal == 'c') {
        celcius = nilai;
    }
    else if (asal == 'F' || asal == 'f') {
        celcius = (nilai - 32) * 5/9;
    }
    else if (asal == 'K' || asal == 'k') {
        celcius = nilai - 273.15;
    }
    else {
        cout << "Jenis asal tidak valid!\n";
        return 0;
    }

    // Tahap 2: fungsi hanya menerima TUJUAN + CELCIUS
    float hasil = konversiSujuTujuan(tujuan, celcius);

    cout << "Hasil konversi: " << hasil << endl;

    return 0;
}

