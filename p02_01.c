#include <stdio.h>
#include <string.h>

int main() {

    char kode[10];
    char kotaTujuan[20];

    int berat;
    int ongkirPerKg;

    int beratButet = 0;
    int beratUcok = 0;

    int totalBerat = 0;
    int totalOngkir = 0;

    int paket = 1;
    int luarPulau = 0;

    while (1) {

        scanf("%s", kode);

        if (strcmp(kode, "END") == 0) {
            break;
        }

        scanf("%d", &berat);

        if (strcmp(kode, "MDN") == 0) {
            ongkirPerKg = 8000;
            strcpy(kotaTujuan, "Medan");
        }
        else if (strcmp(kode, "BLG") == 0) {
            ongkirPerKg = 5000;
            strcpy(kotaTujuan, "Balige");
        }
        else if (strcmp(kode, "JKT") == 0) {
            ongkirPerKg = 12000;
            strcpy(kotaTujuan, "Jakarta");
            luarPulau = 1;
        }
        else if (strcmp(kode, "SBY") == 0) {
            ongkirPerKg = 13000;
            strcpy(kotaTujuan, "Surabaya");
            luarPulau = 1;
        }

        if (paket == 1)
            beratButet = berat;
        else if (paket == 2)
            beratUcok = berat;

        totalBerat += berat;
        totalOngkir += berat * ongkirPerKg;

        paket++;
    }

    float diskon = 0;

    if (totalBerat >= 10) {
        diskon = totalOngkir * 0.10;
    }

    float totalBayar = totalOngkir - diskon;

    printf("\nSTRUK PEMBAYARAN DEL EXPRESS\n");
    printf("-----------------------------\n");
    printf("Kota Tujuan      : %s\n", kotaTujuan);
    printf("Berat Butet      : %d kg\n", beratButet);
    printf("Berat Ucok       : %d kg\n", beratUcok);
    printf("Total Berat      : %d kg\n", totalBerat);
    printf("Total Ongkir     : Rp %d\n", totalOngkir);   

    if (totalBerat >= 10)
        printf("Promo Lebaran    : Diskon 10%%\n");
    else
        printf("Promo Lebaran    : Tidak ada\n");

    if (luarPulau)
        printf("Asuransi         : Gratis\n");
    else
        printf("Asuransi         : Tidak ada\n");

    printf("Total Bayar      : Rp %.0f\n", totalBayar);

    return 0;
}