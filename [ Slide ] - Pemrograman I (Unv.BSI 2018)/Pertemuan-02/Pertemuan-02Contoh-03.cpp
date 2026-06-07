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

main (){
    char kar;
    clrscr();

    printf("Masukan Sebuah Karakter Bebas = ");
    kar = getche();
    printf("\nTadi Anda Memasukan karakter %c", kar);
    getch ();
    return 0;
}