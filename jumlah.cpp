#include <iostream>
using namespace std;
#define harga 4500.02 //..meneangntukan harga dengan definei

int main()
{
	float jumlah,total;
	
	cout<<"jumlah barang = " ;
	cin>> jumlah;
	total = harga * jumlah;
	cout<<"\nYang harus dibayar = "<<total;
	
}
