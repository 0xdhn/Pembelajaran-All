#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <cstdlib>

void clrscr() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

using namespace std;

main(){
    char nama[]="dita";
    int nilai =100;
    clrscr();
    printf("hai %s, Kamu mendapatkan nilai %i", nama, nilai);
    return 0;
}