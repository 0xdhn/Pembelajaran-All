#include <stdio.h>

main(){
    int jumlah;
    float harga_per_satuan, harga_total;
    jumlah=50;
    /* dislide ini penulisan seperti ini Harga_persatuan=15.7;, tugas menganalisa program ini berjalan atau tidak jadi saya perbaiki atau **typo** */
    harga_per_satuan=15.7;
    harga_total=jumlah*harga_per_satuan;
    printf("Harga Total= %f \n", harga_total);
    return 0;

}