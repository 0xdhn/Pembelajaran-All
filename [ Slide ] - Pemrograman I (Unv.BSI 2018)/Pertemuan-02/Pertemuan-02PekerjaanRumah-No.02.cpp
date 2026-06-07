/* Pekerjaan Rumah No.2 */
/* Luas(L=2X(pxl+pxt+lxt)) dan Volume Balok(V=pxlxt) */
#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

int main(){
    float L,V,p,l,t;

    cout<<"\tRumus Luas dan Volume Balok"<<endl;
    cout<<"=============================================="<<endl;
    cout<<"  Masukan nilai Panjang : ";
    /* Menggunakan cin untuk pengimputan */
    cin>>p;
    cout<<"  Masukan nilai Lebar : ";
    cin>>l;
    cout<<"  Masukan nilai Tinggi : ";
    cin>>t;
    /* Menghitung luas dan volume balok */
    L = 2 * (p*l + p*t + l*t);
    V = p * l * t;
    cout<<"  Luas Balok : "<<L<<endl;
    cout<<"  Volume Balok : "<<V<<endl;

    getch();
    return 0;

}