#include <stdio.h>
#include <stdlib.h>

// Struktur untuk node pohon pencarian biner
struct TreeNode {
    int nilai;
    struct TreeNode *kiri;
    struct TreeNode *kanan;
};

// Fungsi untuk membuat node baru
struct TreeNode* buatNode(int nilai) {
    struct TreeNode* nodeBaru = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    nodeBaru->nilai = nilai;
    nodeBaru->kiri = NULL;
    nodeBaru->kanan = NULL;
    return nodeBaru;
}

// Fungsi untuk memasukkan nilai ke dalam pohon pencarian biner
struct TreeNode* sisipkan(struct TreeNode* akar, int nilai) {
    if (akar == NULL) {
        return buatNode(nilai);
    }
    if (nilai < akar->nilai) {
        akar->kiri = sisipkan(akar->kiri, nilai);
    } else if (nilai > akar->nilai) {
        akar->kanan = sisipkan(akar->kanan, nilai);
    }
    return akar;
}

// Fungsi untuk menghitung jumlah node dalam pohon
int hitungNode(struct TreeNode* akar) {
    if (akar == NULL) {
        return 0;
    }
    return 1 + hitungNode(akar->kiri) + hitungNode(akar->kanan);
}

int main() {
    struct TreeNode* akar = NULL;
    akar = sisipkan(akar, 50);
    sisipkan(akar, 30);
    sisipkan(akar, 20);
    sisipkan(akar, 40);
    sisipkan(akar, 70);
    sisipkan(akar, 60);
    sisipkan(akar, 80);

    printf("Jumlah node dalam pohon : %d\n", hitungNode(akar));

    return 0;
}
