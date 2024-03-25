//created by ketherin fathur rahma

#include <stdio.h>

// Struktur untuk menyimpan data mahasiswa
struct Mahasiswa {
    char nama[50];
    int umur;
    char jurusan[50];
};

// Fungsi untuk menampilkan data mahasiswa
void tampilkanMahasiswa(struct Mahasiswa mhs) {
    printf("Nama: %s\n", mhs.nama);
    printf("Umur: %d\n", mhs.umur);
    printf("Jurusan: %s\n", mhs.jurusan);
}

int main() {
    // Membuat objek mahasiswa
    struct Mahasiswa mhs1 = {"ketherin", 19, "Teknik Informatika"};
    struct Mahasiswa mhs2 = {"aigy", 21, "Fisika"};

    // Memanggil fungsi untuk menampilkan data mahasiswa
    printf("Data Mahasiswa 1:\n");
    tampilkanMahasiswa(mhs1);

    printf("\nData Mahasiswa 2:\n");
    tampilkanMahasiswa(mhs2);

    return 0;
}
