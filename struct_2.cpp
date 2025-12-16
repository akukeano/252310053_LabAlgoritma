#include <iostream>
using namespace std;

int main()
{
	struct mahasiswa
	{
		char nim[9];
		char nama[15];
		float nilai;
	};
	
	mahasiswa mahasiswa;
	cout << "Masukan NIM: ";
	cin >> mahasiswa.nim;
	cout << "Masukan Nama: ";
	cin >> mahasiswa.nama;
	cout << "Masukan Nilai: ";
	cin >> mahasiswa.nilai;
	cout << "\nData yang diinput adalah: \n\n";
	cout << "NIM: " << mahasiswa.nim << endl;
	cout << "Nama: " << mahasiswa.nama << endl;
	cout << "Nilai: " << mahasiswa.nilai << endl;
	
	return 0;
}

int main()
{
	siswa Arkan, Lukas;
	Arkom.no_induk = 1;
	Arkan.nama = "Arkan Januar";
	Arkan.nilai = 75.5;
	Lukas.no_induk = 2;
	Lukas.nama = "Lukas Laksono";
	Arkan.nilai = 89.9;
	
	cout << Arkan.nama << " dengan nomor induk " << Arkan.no_induk << " mendapatkan nilai " << Arkan.nilai << endl;
	cout << Lukas.nama << " dengan nomor induk " << Lukas.no_induk <, " mendapatkan nilai " << Lukas.nilai << endl;
	return 0;
}

struct siswa
{
	int no_induk;
	string nama;
	float nilai;
};

int main()
{
	siswa Jery = {1, "Jery Januar", 85.5};
	siswa Tono = {2, "Tono Laksono", 89.9};
	cout << Jery.nama << " mendapatkan nilai " << Jery.nilai << endl;
	cout << Tono.nama << " mendapatkan nilai " << Tono.nilai << endl;
	return 0;
}

struct dataMahasiswa
{
	string nama, npm, jurusan;
};

struct nilai 
{
	float nilai_1, nilai_2;
};

struct
{
	dataMahasiswa Data;
	nilai Nilai;
} mahasiswa;

int main()
{
	cout << "Masukan Nama Mahasiswa: ";
	getline(cin, mahasiswa.Data.nama);
	
	cout << "Masukan NPM Mahasiswa: ";
	cin >> mahasiswa.Data.npm;
	
	cout << "Masukan Nilai 1: ";
	cin >> mahasiswa.Nilai.nilai_1;
	
	cout << mahasiswa.Data.nama << ' '
		 << mahasiswa.Data.npm << ' '
		 << mahasiswa.Data.jurusan << ' '
		 << mahasiswa.Data.nilai_1;
		 
		 return 0;
}
































































