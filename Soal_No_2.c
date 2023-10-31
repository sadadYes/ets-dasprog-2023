#include <stdio.h>

// Deklarasi fungsi faktorial
int faktorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * faktorial(n - 1);
}

int main() {
    int n, r;
    int faktorial_n, faktorial_r, faktorial_n_minus_r;
    int kombinasi;

    // Meminta pengguna memasukkan nilai n dan r
    printf("Masukkan nilai n: \n");
    scanf("%d", &n);
    printf("Masukkan nilai r: \n");
    scanf("%d", &r);

    // Menghitung faktorial n, r, dan (n - r)
    faktorial_n = faktorial(n);
    faktorial_r = faktorial(r);
    faktorial_n_minus_r = faktorial(n - r);

    // Menghitung kombinasi
    kombinasi = faktorial_n / (faktorial_r * faktorial_n_minus_r);

    // Menampilkan nilai kombinasi
    printf("Kombinasi = %d\n", kombinasi);

    return 0;
}
