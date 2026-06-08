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

main (){
    int x,y,a=0,b=0,c=0,d=0;
    clrscr();
    cout<<"Masukan Nilai A : "; cin>>x;
    cout<<"MAsukan Nilai B : "; cin>>y;
    a=x+y; c=x%y;
    b=x-y; d=x*y;
    printf("Hasil Dari A = X + Y = %i\n" ,a);
    printf("Hasil Dari B = X - Y = %i\n" ,b);
    cout<<"Hasil Dari C = X % Y = "<<c<<endl;
    cout<<"Hasil Dari D = X * Y = "<<d<<endl;

    getch();
    return 0;
}