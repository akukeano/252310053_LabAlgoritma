#include <iostream>
#include <string.h>
using namespace std;

int main ()
{
	char kalimat [100] = "KAMPUS UNGU INSTITUT BISNIS INFORMATIKA KESATUAN";
	
	cout << kalimat << endl;
	cout << "\nJika kalimat tersebut di balik = " << strrev(kalimat);
	cout << "\nJika di ubah menjadi huruf kecil = " << strlwr(kalimat);
}
