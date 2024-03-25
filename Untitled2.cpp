#include <iostream>
#include <string>
using namespace std;

// Definisi struct untuk data mahasiswa
struct Mahasiswa {
    int NIM;
    string Nama;
    string TanggalLahir;
    float IPK;
};

// Fungsi untuk input data mahasiswa
void inputData(Mahasiswa &mhs) {
    cout << "Masukkan NIM: ";
    cin >> mhs.NIM;
    cout << "Masukkan Nama: ";
    cin.ignore(); // Membersihkan buffer sebelum membaca string
    getline(cin, mhs.Nama);
    cout << "Masukkan Tanggal Lahir (DD/MM/YYYY): ";
    getline(cin, mhs.TanggalLahir);
    cout << "Masukkan IPK: ";
    cin >> mhs.IPK;
}

// Fungsi untuk menampilkan data mahasiswa
void tampilkanData(const Mahasiswa &mhs) {
    cout << "NIM: " << mhs.NIM << endl;
    cout << "Nama: " << mhs.Nama << endl;
    cout << "Tanggal Lahir: " << mhs.TanggalLahir << endl;
    cout << "IPK: " << mhs.IPK << endl;
}

int main() {
    Mahasiswa mhs1;
    inputData(mhs1);
    cout << "\nData Mahasiswa:\n";
    tampilkanData(mhs1);

    return 0;
}
