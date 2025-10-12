#include <iostream>
using namespace std;

int main()
{
	int n1, n2, n3;
	string nama;
	int rata;
	string hadiah;
	
	cout << "perlombaan laporan nilai" << endl;
	cout << "\nMasukan Nama Anda : ";
	getline(cin, nama);
	cout << "Masukan Nilai 1 : ";
	cin >> n1;
	cout << "Masukan Nilai 2 : ";
	cin >> n2;
	cout << "Masukan Nilai 3 : ";
	cin >> n3;
	
	rata = (n1 + n2 + n3) / 3;
	if (rata >= 85){
		hadiah = " Honda Vario 250 ";
	}
	else {
		if (rata >= 70){
			hadiah = " Iphone 25 promaxxx ";
		}
		else{
			hadiah = "Hiburan"	;
		}
	}
	
	cout << "-------------------------------" << endl;
	cout << "\nSiswa Yang Bernama : " << nama << endl;
	cout << "Memperoleh nilai rata - rata : " << rata << endl;
	cout << "Hasil dari Perlombaan yang diikutinya hadiah yang didapat adalah : " << hadiah;

}
