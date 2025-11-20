#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char huruf[100];
    char pindah[100];
    //clrscr();
    
    cout<<"Masukkan Kalimatnya = ";
    cin >> huruf;
    
    cout<<"Panjang Kalimatnya adalah = ";
    cout<<strlen(huruf);
    
 getchar();
}
   
   
   //menggunakan for
   //kata jadi terbalik (reversed)
/*
#include <iostream>
#include <cstring>
using namespace std;

int main() 
{
    char kalimat[100];
    
	cout << "Masukkan Kalimat: ";
    cin.getline(kalimat, sizeof(kalimat));

    int x = strlen(kalimat);
    cout << "Kalimat Terbalik: ";
    
    for (int i = x - 1; i >= 0; i--) {
        cout << kalimat[i];
    }

    cout << endl;
    return 0;
}
*/
