#include <stdio.h>
#include <string.h>

#define MAX 100

int main() {

    int N;

    printf("Jumlah total data barang: ");
    scanf("%d", &N);

    char nama[MAX][50];
    char kategori[MAX][50];
    int stok[MAX];

    for(int i = 0; i < N; i++) {
        printf("\nData barang ke-%d\n", i+1);

        printf("Nama barang : ");
        scanf(" %[^\n]", nama[i]);

        printf("Kategori    : ");
        scanf(" %[^\n]", kategori[i]);

        printf("Jumlah stok : ");
        scanf("%d", &stok[i]);
    }

    char cariKategori[50];
    int total = 0;

    printf("\nMasukkan kategori yang ingin dihitung: ");
    scanf(" %[^\n]", cariKategori);

    for(int i = 0; i < N; i++) {
        if(strcmp(kategori[i], cariKategori) == 0) {
            total += stok[i];
        }   
    }   

    printf("\nTotal stok kategori %s = %d pcs\n", cariKategori, total);

    return 0;
}