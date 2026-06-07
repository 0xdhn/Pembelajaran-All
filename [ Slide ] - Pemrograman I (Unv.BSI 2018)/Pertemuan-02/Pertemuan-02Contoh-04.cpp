#include <stdio.h>
#include <conio.h>
/* Pada slide bagian ini diketik #include <iostream.h> karena di tahun 1990-an ada perubahan sintaks */
#include <iostream> 
#include <cstdlib>

/* menambahkan namespace std agar bisa memunculkan cout dan cin */
using namespace std;

void clrscr() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

main(){
    int nilai1,nilai2,total;
    clrscr();
    cout<<"Masukan Nilai 1 : ";
    cin>>nilai1;
    cout<<"Masukan Nilai 2 : ";
    cin>>nilai2;
    total=nilai1+nilai2;
    cout<<"Masukan Total Nilai : "<<total<<endl;
    getch ();
    return 0;
}
