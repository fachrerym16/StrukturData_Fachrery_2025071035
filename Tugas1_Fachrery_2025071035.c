#include <stdio.h>

// Bagian 1.1
void angka1_10() {
    printf("=== Angka 1 sampai 10 ===\n");
    for (int i = 1; i <= 10; i++) {
        printf("%d\n", i);
    }
}

// Bagian 1.2
void bilanganGenap() {
    printf("\n=== Bilangan Genap 1-50 ===\n");
    for (int i = 2; i <= 50; i += 2) {
        printf("%d ", i);
    }
    printf("\n");
}

// Bagian 2.1
void jumlah1_N() {
    int n, jumlah = 0;
    printf("\nMasukkan nilai N: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        jumlah += i;
    }

    printf("Jumlah 1 hingga %d = %d\n", n, jumlah);
}

// Bagian 3.1
void totalRataRata() {
    int nilai[5];
    int total = 0;
    float rata_rata;

    printf("\n=== Input 5 Nilai ===\n");
    for (int i = 0; i < 5; i++) {
        printf("Masukkan nilai ke-%d: ", i + 1);
        scanf("%d", &nilai[i]);
        total += nilai[i];
    }

    rata_rata = (float)total / 5;

    printf("\n=== Hasil ===\n");
    printf("Total Nilai   : %d\n", total);
    printf("Rata-rata     : %.2f\n", rata_rata);
}

// Satu-satunya main()
int main() {
    angka1_10();
    bilanganGenap();
    jumlah1_N();
    totalRataRata();
    return 0;
}