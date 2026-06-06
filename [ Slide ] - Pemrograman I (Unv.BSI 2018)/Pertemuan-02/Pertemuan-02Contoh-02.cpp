#include <stdio.h>
#include <conio.h>
#include <cstdlib> /* Untuk mengaktifkan clear line pada DevCPP dan mingw */

/* Script untuk mengaktifkan mode clear line */
void clrscr() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

int main() {
	int a, b, c;
    clrscr();
    printf("Masukkan nilai a = "); scanf("%d", &a);
    printf("Masukkan nilai b = "); scanf("%d", &b);
    c = a + b;
    printf("Hasil Penjumlahan = %d", c);
    clrscr();
    printf("HITUNG NILAI \n");
    printf("NILAI A :%d\n", a);
    printf("NILAI B :%d\n", b);
    printf("--------------------\n");
    printf("NILAI C :%d\n", c);
    return 0;
}

