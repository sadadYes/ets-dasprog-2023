#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Fungsi untuk membandingkan elemen dalam fungsi qsort
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int n;
    
    // Menerima input jumlah data
    printf("Masukkan jumlah data: \n");
    scanf("%d", &n);
    
    int data_set[n];
    
    // Menerima input data set
    printf("Masukkan data set:\n");
    for (int i = 0; i < n; i++) {
        printf("Data %d: \n", i+1);
        scanf("%d", &data_set[i]);
    }
    
    // Mengurutkan data set secara ascending
    qsort(data_set, n, sizeof(int), compare);
    
    // Menghitung posisi kuartil
    float q1_pos = (n + 1) / 4.0;
    float q2_pos = (2 * (n + 1)) / 4.0;
    float q3_pos = (3 * (n + 1)) / 4.0;
    
    int q1, q2, q3;
    
    // Jika posisi kuartil bukan bilangan bulat, ambil nilai di posisi tersebut sebagai kuartil
    if (q1_pos != floor(q1_pos)) {
        q1 = data_set[(int)floor(q1_pos)];
    } else {
        q1 = (data_set[(int)q1_pos - 1] + data_set[(int)q1_pos]) / 2;
    }
    
    if (q2_pos != floor(q2_pos)) {
        q2 = data_set[(int)floor(q2_pos)];
    } else {
        q2 = (data_set[(int)q2_pos - 1] + data_set[(int)q2_pos]) / 2;
    }
    
    if (q3_pos != floor(q3_pos)) {
        q3 = data_set[(int)floor(q3_pos)];
    } else {
        q3 = (data_set[(int)q3_pos - 1] + data_set[(int)q3_pos]) / 2;
    }
    
    // Menampilkan nilai kuartil
    printf("Kuartil 1: %d\n", q1);
    printf("Kuartil 2: %d\n", q2);
    printf("Kuartil 3: %d\n", q3);
    
    return 0;
}
