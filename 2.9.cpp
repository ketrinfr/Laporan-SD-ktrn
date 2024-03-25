#include <stdio.h>
#include <stdlib.h>

typedef struct{
	char nama[25];
	int nik;
	char alamat[30];
	char status[25];
	
}ktp;

int main (){
	ktp myktp;
	
	printf("Nama\t:"); scanf("%s", myktp.nama); fflush(stdin);
	printf("NIK\t:"); scanf("%i", &myktp.nik); fflush(stdin);
	printf("Alamat\t:"); scanf("%s", myktp.alamat);
	printf("kewarganegaraan\t:"); scanf("%s", myktp.status);
	
	return 0;
}
