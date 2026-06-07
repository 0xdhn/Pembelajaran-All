/* Pekerjaan Rumah No.1 */
/* Luas(L=PXL) dan keliling(K=2X(P+L)) persegi panjang */
#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

int main (){
    float p,l,L,K;

    printf("\tRumus Luas dan Keliling Persegi Panjalng\n");
    printf("==================================================\n");
    printf("  Masukan nilai Panjang : ");
    /* Menggunakan Scanf untuk pengimputan */
    scanf("%f", &p);
    printf("  Masukan nilai Lebar : ");
    scanf("%f", &l);
    /* Menghitung luas dan keliling persegi panjang */
    L = p * l;
    K = 2 * (p+l);
    printf("  Luas Persegi Panjang : %f\n", L);
    printf("  Keliling Persegi Panjang : %f\n", K);

    getch();
    return 0;

}
