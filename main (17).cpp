#include <iostream>
using namespace std;

// Membuat struct untuk data mahasiswa
struct Mahasiswa {
    string namaDepan;
    string namaBelakang;
    string NIU;
    int usia;
};

int main() {
    // Membuat objek mahasiswa
    Mahasiswa mahasiswa;

    // Mengambil input dari pengguna
    cout << "Masukkan nama depan mahasiswa: ";
    cin >> mahasiswa.namaDepan;

    cout << "Masukkan nama belakang mahasiswa: ";
    cin >> mahasiswa.namaBelakang;

    cout << "Masukkan NIU mahasiswa: ";
    cin >> mahasiswa.NIU;

    cout << "Masukkan usia mahasiswa: ";
    cin >> mahasiswa.usia;

    // Menampilkan seluruh data mahasiswa dalam satu baris
    cout << mahasiswa.namaDepan << " " << mahasiswa.namaBelakang << " " << mahasiswa.NIU << " " << mahasiswa.usia << endl;

    return 0;
}
