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

// Fungsi untuk mencari nilai minimum dalam pohon
struct TreeNode* nodeNilaiMin(struct TreeNode* node) {
    struct TreeNode* saatIni = node;
    while (saatIni && saatIni->kiri != NULL) {
        saatIni = saatIni->kiri;
    }
    return saatIni;
}

// Fungsi untuk menghapus node dari pohon pencarian biner
struct TreeNode* hapusNode(struct TreeNode* akar, int nilai) {
    if (akar == NULL) return akar;

    if (nilai < akar->nilai) {
        akar->kiri = hapusNode(akar->kiri, nilai);
    } else if (nilai > akar->nilai) {
        akar->kanan = hapusNode(akar->kanan, nilai);
    } else {
        if (akar->kiri == NULL) {
            struct TreeNode* temp = akar->kanan;
            free(akar);
            return temp;
        } else if (akar->kanan == NULL) {
            struct TreeNode* temp = akar->kiri;
            free(akar);
            return temp;
        }

        struct TreeNode* temp = nodeNilaiMin(akar->kanan);
        akar->nilai = temp->nilai;
        akar->kanan = hapusNode(akar->kanan, temp->nilai);
    }
    return akar;
}

// Fungsi untuk mencetak pohon secara inorder
void inorder(struct TreeNode* akar) {
    if (akar != NULL) {
        inorder(akar->kiri);
        printf("%d ", akar->nilai);
        inorder(akar->kanan);
    }
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

    printf("Penelusuran inorder dari pohon yang diberikan : ");
    inorder(akar);
    printf("\n");

    printf("Hapus 20\n");
    akar = hapusNode(akar, 20);
    printf("Penelusuran inorder setelah penghapusan 20 : ");
    inorder(akar);
    printf("\n");

    return 0;
}
