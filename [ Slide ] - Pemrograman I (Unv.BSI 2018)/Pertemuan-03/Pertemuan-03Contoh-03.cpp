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
    float a,b,c,d,e,f,x,y;
    clrscr();
    cout<<"Masukkan Nilai X = ";
    cin>>x;
    cout<<"Masukan Nilai y = ";
    cin>>y;
    a = x==y;
    b = x!=y;
    c = x>y;
    d = x<y;
    e = x>=y;
    f = x<=y;
    cout<<endl;
    cout<<"Hasil dari"<<x<<"=="<<y<<"="<<a<<endl;
    cout<<"Hasil dari"<<x<<"!="<<y<<"="<<b<<endl;
    cout<<"Hasil dari"<<x<<">"<<y<<"="<<c<<endl;
    cout<<"Hasil dari"<<x<<"<"<<y<<"="<<d<<endl;
    cout<<"Hasil dari"<<x<<">="<<y<<"="<<e<<endl;
    cout<<"Hasil dari"<<x<<"<="<<y<<"="<<f<<endl;
    getch();
    return 0;
}