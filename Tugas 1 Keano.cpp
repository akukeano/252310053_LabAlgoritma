// Kalkulator Raeehan Keano Alafatah
#include <iostream>
using namespace std;


int main()
{
	// Variabel
	double a2, b2, hasilTambah;
    double a6, b3, hasilKurang;
    double a5, b5, hasilKali;

    cout << "===== Program Kalkulator =====\n";

    // Penjumlahan
    cout << "\nSoal Pertama: Penjumlahan\n";
    cout << "Masukkan 2 angka\n";
    cout << "A = ";
    cin >> a2;
    cout << "B = ";
    cin >> b2;
    hasilTambah = a2 + b2;
    cout << "Hasil A + B = " << hasilTambah << endl;

    // Pengurangan
    cout << "\nSoal Kedua: Pengurangan\n";
    cout << "Masukkan 2 angka\n";
    cout << "A = ";
    cin >> a6;
    cout << "B = ";
    cin >> b3;
    hasilKurang = a6 - b3;
    cout << "Hasil A - B = " << hasilKurang << endl;

    // Perkalian
    cout << "\nSoal Ketiga: Perkalian\n";
    cout << "Masukkan 2 angka\n";
    cout << "A = ";
    cin >> a5;
    cout << "B = ";
    cin >> b5;
    hasilKali = a5 * b5;
    cout << "Hasil A * B = " << hasilKali << endl;
}
