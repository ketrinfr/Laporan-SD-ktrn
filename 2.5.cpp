#include <stdio.h>

struct Mahasiswa {
	char nama[50];
	char jurusan[50];
	int nilai;
};

int main (void)
{
	struct Mahasiswa mhs01;
	
	strcpy(mhs01.nama, "_____________");
	strcpy(mhs01.jurusan,"______________");
	mhs01.nilai =100;
	
	printf("%s adalah mahasiswa jurusan %s ",mhs01.nama, mhs01.jurusan);
	printf("mampu mendapat nilai uas %i \n", mhs01.nilai);
	
	return 0;
}
