#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char huruf[100];

    cout << "Masukkan Kalimatnya = ";
    cin.getline(huruf, 100);   

    cout << "Panjang Kalimatnya adalah = " << strlen(huruf);

    return 0;
}

