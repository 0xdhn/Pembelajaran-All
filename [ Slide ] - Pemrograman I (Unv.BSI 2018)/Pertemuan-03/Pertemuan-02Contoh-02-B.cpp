/* Penggunakaan Notasi Dibelakang Variabel */
#include <stdio.h>
#include <conio.h>
#include <cstdlib>

void clrscr() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

main(){
    int a=10, b=5; 
    clrscr();

    printf("Nilai A = %d",a);
    printf("\nNilai A++ = %d", a++);
    printf("\nNilai B = %d",b);
    printf("\nNilai B-- = %d", b--);
    printf("\nNilai B = %d", b);

    getch();
    return 0;
    
}
