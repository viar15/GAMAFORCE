#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    map<string, double> hargaItem;
    double subtotal = 0.0;
    double total = 0.0;
    double uangDibayarkan = 0.0;
    double kembalian = 0.0;
    
    // Inisialisasi harga item
    hargaItem["item1"] = 10.0;
    hargaItem["item2"] = 15.0;
    hargaItem["item3"] = 20.0;

    cout << "Selamat datang di program kasir sederhana. Ketik 'selesai' untuk menghentikan." << endl;

    while (true) {
        string item;
        double harga = 0.0;

        cout << "Masukkan nama item: ";
        cin >> item;

        if (item == "selesai") {
            break;
        }

        if (hargaItem.find(item) != hargaItem.end()) {
            harga = hargaItem[item];
            cout << "Harga " << item << ": " << harga << endl;
        } else {
            cout << "Item tidak ditemukan!" << endl;
            continue;
        }

        subtotal += harga;
        cout << "Subtotal sementara: " << subtotal << endl;
    }

    cout << "Subtotal: " << subtotal << endl;

    do {
        cout << "Masukkan jumlah uang yang dibayarkan: ";
        cin >> uangDibayarkan;
    } while (uangDibayarkan < subtotal);

    kembalian = uangDibayarkan - subtotal;
    cout << "Total Harga: " << subtotal << endl;
    cout << "Uang Dibayarkan: " << uangDibayarkan << endl;
    cout << "Kembalian: " << kembalian << endl;

    return 0;
}