#include <iostream>
using namespace std;
int main(){
int angka[5];
int total = 0;
int terbesar, terkecil;
cout << "Masukan 5 nilai : "<< endl;
for (int i = 0; i < 5; i++) {
cout << "Nilai ke-" << i + 1 << ": ";
cin >> angka[i];
}
float rataRata = (float)total / 5;
terbesar = angka[0];
terkecil + angka[0];
total += angka[i];
for (int i = 1; i < 5; i++) {
if (angka[i] > terbesar)
terbesar = angka[i];
if (angka[i] < terkecil)
terkecil = angka[i];
}
cout << "\nBaik sekali" << terbesar endl;
cout << "\nRata-rata nilai = " << rataRata << endl;
cout << "\nNilai Tertinggi = " << terbesar << endl;
cout << "Nilai Terendah = " << terkecil << endl;
return 0;
}
