/* Tugas Kelompok Pemrograman C and CPP */
/* Kalau tidak salah 5 orang termasuk aku */

#include <iostream>
#include <conio.h>
#include <stdlib.h>

/* Untuk save struk dalam bentuk .txt */
#include <fstream>

/* Time */
#include <ctime>

using namespace std;

int main ( int argc, char *argv[] ){
    
    time_t now = time(0);
    tm *ltm = localtime(&now);

    int pilihan;
    char namastruk[50];

    sprintf(namastruk,
            "struk_%04d%02d%02d_%02d%02d%02d.txt",
            1900 + ltm->tm_year,
            1 + ltm->tm_mon,
            ltm->tm_mday,
            ltm->tm_hour,
            ltm->tm_min,
            ltm->tm_sec);

    benner:
    cout<<endl;
    cout<<"\033[36m==========\033[31m==========\033[33m==========\033[35m==========\033[36m==========\033[31m==="<<endl;
    cout<<"\033[35m==========\033[36m==========\033[32m==========\033[36m==========\033[34m==========\033[35m==="<<endl;
    cout<<"\033[37m\t\tSelamat Datang Di Toko Kami\t\t\033[37m"<<endl;
    cout<<"\033[31m==========\033[36m==========\033[32m==========\033[31m==========\033[33m==========\033[31m==="<<endl;
    cout<<"\033[33m==========\033[32m==========\033[31m==========\033[36m==========\033[34m==========\033[31m==="<<endl;

    menu:
    cout<<endl;
    cout<<" [ 1 ] Baju"<<endl;
    cout<<" [ 2 ] Celana"<<endl;
    cout<<" [ 3 ] Sepatu"<<endl;
    cout<<" [ 4 ] Keluar"<<endl;
    cout<<endl;
    
    /* Print Struk */
    print:
    ofstream struk(namastruk);
    struk<<"======================================================"<<endl;
    struk<<""<<endl;
    struk<<"\t\t\tOutFit'Z\t\t"<<endl;
    struk<<""<<endl;
    struk<<"======================================================"<<endl;
    struk<<"	Baju Gamis	1	75.000          75.000"<<endl;
    struk<<"======================================================"<<endl;
    struk<<"------------------------------------------------------"<<endl;
    struk<<"	Total Item      1                       75.000"<<endl;
    struk<<"	Tunai                                  100.000"<<endl;
    struk<<"	Kembalian                               25.000"<<endl;
    struk<<"======================================================"<<endl;
    struk<<"	Tanggal.                    " << 1900 + ltm->tm_year << "-" << 1 + ltm->tm_mon << "-" << ltm->tm_mday << " " << ltm->tm_hour << ":" << ltm->tm_min << ":" << ltm->tm_sec << endl;


    struk.close();

    cout << "\t~ Struk berhasil disimpan ~" << namastruk << endl;
    /* Auto Print Struk dengan menjalankan notepad*/
    //system(("notepad /p " + std::string(namastruk)).c_str());

    exit:
    //system("cls");

    getch();
    return 0;

}