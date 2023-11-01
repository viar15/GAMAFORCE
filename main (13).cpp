#include <iostream>
using namespace std;

int main() {
    int tinggi;

    // Input tinggi pola (setengah dari tinggi total)
    cout << "Masukkan tinggi pola: ";
    cin >> tinggi;
    
    cout << "Panah ke kanan"<< endl;
    // Loop untuk bagian atas pola
    for (int i = 1; i <= tinggi / 2 ; i++) {
        // Cetak spasi sebelum karakter "*" pada setiap baris
        for (int j = 1; j < i *2; j++) {
           cout << " ";
        }
        cout << "*\n";
    }

    // Cetak bagian tengah pola (bintang-bintang yang terpisah)
    for (int i = 1; i <= tinggi - 1; i++) {
        cout << "*";
    }
    cout << "\n";

    // Loop untuk bagian bawah pola (simetris dengan bagian atas)
    for (int i = tinggi / 2; i >= 1; i--) {
        // Cetak spasi sebelum karakter "*" pada setiap baris
        for (int j = 1; j < i*2; j++) {
            cout << " ";
        }
        cout << "*\n";
    }
    
    
    
    
     for (int i = tinggi / 2; i >= 1; i--) {
        // Cetak spasi sebelum karakter "*" pada setiap baris
        for (int j = 1; j < i*2; j++) {
            cout << " ";
        }
        cout << "*\n";
    }

    // Cetak bagian tengah pola (garis tengah)
    for (int i = 1; i <= tinggi; i++) {
        cout << "*";
    }
    cout << "\n";

    // Loop untuk bagian bawah pola (bagian kanan, simetris dengan bagian kiri)
    for (int i = 1; i <= tinggi / 2 ; i++) {
        // Cetak spasi sebelum karakter "*" pada setiap baris
        for (int j = 1; j < i *2; j++) {
           cout << " ";
        }
        cout << "*\n";
    }

    return 0;
}


