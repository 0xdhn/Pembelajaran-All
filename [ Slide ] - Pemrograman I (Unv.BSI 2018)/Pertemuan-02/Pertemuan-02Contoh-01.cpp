/*------------------------------*/
/* Program: Scanf.cpp */
/*------------------------------*/

#include <stdio.h>
main (){
	int nilai, tugas;
	printf("Masukan sebuah nilai: "); scanf("%d",&nilai);
	printf("Masukan nilai tugas: ");scanf("%d", &tugas);
	/*- Bagian ini di slide ini hilang jadi aku tambahkan script ini saja -*/
	if(nilai>=75 && tugas>=75){
		printf("Kamu Lulus Ujian");
	} 
	else{
		printf("Kamu Gagal Ujian");
	}
	
	return 0;
}
