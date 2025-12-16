#include <iostream>
using namespace std;

struct dosen {
	string nama;
	string umur;
};

struct matkul {
	string nama_matkul;
	double ipk;
	string status;
	
	dosen dosen1, asdos;
};

int main()
{
	dosen dosen1, asdos;
	matkul matkul1;
	
	dosen1.nama = "jemy";
	dosen1.umur = "36";
	
	asdos.nama = "helena";
	asdos.umur = "19";
	
}
