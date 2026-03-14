#include <stdio.h>

int main() {

    int pilihan;
    int jumlah;
    int total = 0;

    printf("=== SISTEM KAFETARIA KANTIN IT DEL ===\n");
    printf("Menu:\n");
    printf("1. Es Teh Manis   - Rp4000\n");
    printf("2. Es Jeruk       - Rp6000\n");
    printf("3. Mie Goreng     - Rp12000\n");
    printf("4. Nasi Goreng    - Rp15000\n");
    printf("5. Bakso          - Rp12000\n");
    printf("0. Selesai\n");

    while (1) {
        printf("\nMasukkan nomor menu: ");
        scanf("%d", &Pilihan);

        if (Pilihan == 0) {
            break;
        }

        printf("Masukkan Jumlah: ");
        scanf("%d", &jumlah);

        switch (Pilihan) {
            case 1:  
                total += 4000 * jumlah;
                break;
            case 2:
                total += 6000 * jumlah;
                break;
            case 3:
                total += 12000 * jumlah;
                break;
            case 4:
                total += 15000 * jumlah;
                break;
            case 5:
                total += 12000 * jumlah;
                break;
            default:
                printf("Menu tidak tersedia\n");
        }
    }

    printf("\nTotal yang harus dibayar: Rp%d\n", total);
    printf("Terima kasih telah membeli di Kantin IT Del\n");

    return 0;
}