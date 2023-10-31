#include <stdio.h>

int main() {
    int n, hari, tanggal, bulan, tahun;
    int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    char* nama_hari[] = {"Minggu", "Senin", "Selasa", "Rabu", "Kamis", "Jumat", "Sabtu"};

    printf("Masukkan jumlah hari yang ingin ditambahkan: \n");
    scanf("%d", &n);

    printf("Masukkan hari saat ini (dalam angka, 1-7): \n");
    scanf("%d", &hari);

    printf("Masukkan tanggal saat ini: \n");
    scanf("%d", &tanggal);

    printf("Masukkan bulan saat ini: \n");
    scanf("%d", &bulan);

    printf("Masukkan tahun saat ini: \n");
    scanf("%d", &tahun);

    // Tambahkan n hari ke dalam hari saat ini
    hari = (hari + n) % 7;
    if (hari == 0) {
        hari = 7;
    }

    // Tambahkan n hari ke dalam tanggal saat ini
    tanggal += n;

    // Ubah bulan jika tanggal melebihi jumlah hari dalam bulan tersebut
    while (tanggal > days_in_month[bulan - 1]) {
        tanggal -= days_in_month[bulan - 1];
        bulan++;

        // Ubah tahun jika bulan melebihi 12
        if (bulan > 12) {
            bulan = 1;
            tahun++;
        }
    }

    printf("Setelah %d hari, hari adalah %s, tanggal %d bulan %d tahun %d\n", n, nama_hari[hari-1], tanggal, bulan, tahun);

    return 0;
}
