#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *prev;
    struct Node *next;
};

struct Node *head = NULL;
struct Node *tail = NULL;

// Tambah di awal
void tambahAwal(int nilai) {
    struct Node *baru = (struct Node*) malloc(sizeof(struct Node));
    baru->data = nilai;
    baru->prev = NULL;
    baru->next = head;

    if (head != NULL) {
        head->prev = baru;
    } else {
        tail = baru;
    }

    head = baru;
}

// Tambah di akhir
void tambahAkhir(int nilai) {
    struct Node *baru = (struct Node*) malloc(sizeof(struct Node));
    baru->data = nilai;
    baru->next = NULL;
    baru->prev = tail;

    if (tail != NULL) {
        tail->next = baru;
    } else {
        head = baru;
    }

    tail = baru;
}

// Hapus di awal
void hapusAwal() {
    if (head == NULL) {
        printf("List kosong\n");
        return;
    }

    struct Node *hapus = head;
    head = head->next;

    if (head != NULL) {
        head->prev = NULL;
    } else {
        tail = NULL;
    }

    free(hapus);
    printf("Node pertama berhasil dihapus\n");
}

// Tampil maju
void tampilMaju() {
    struct Node *temp = head;

    if (temp == NULL) {
        printf("List kosong\n");
        return;
    }

    printf("Isi Doubly Linked List:\n");
    while (temp != NULL) {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    int pilihan, nilai;

    // Membuat minimal 5 node awal
    tambahAkhir(10);
    tambahAkhir(20);
    tambahAkhir(30);
    tambahAkhir(40);
    tambahAkhir(50);

    do {
        printf("\n=== MENU DOUBLY LINKED LIST ===\n");
        printf("1. Tambah di awal\n");
        printf("2. Tambah di akhir\n");
        printf("3. Hapus di awal\n");
        printf("4. Tampil maju\n");
        printf("5. Keluar\n");
        printf("Pilih menu: ");
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1:
                printf("Masukkan nilai: ");
                scanf("%d", &nilai);
                tambahAwal(nilai);
                break;

            case 2:
                printf("Masukkan nilai: ");
                scanf("%d", &nilai);
                tambahAkhir(nilai);
                break;

            case 3:
                hapusAwal();
                break;

            case 4:
                tampilMaju();
                break;

            case 5:
                printf("Program selesai\n");
                break;

            default:
                printf("Pilihan tidak valid\n");
        }

    } while (pilihan != 5);

    return 0;
}