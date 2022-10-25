#include <stdio.h>
int main()
{
	int markah[10]; //isytihar tatasusunan 10 unsur
	int i, bil=0, jumlah=0;
	float purata;
	
	printf("Baca 10 markah ujian:\n");
	for (i=0; i<10; i++)
	{
		printf("Masukkan markah: ");
		scanf("%d",&markah[i]);
		jumlah+= markah[i];
	}
	purata = (float)jumlah/10;
	for (i=0; i<10; i++)
	{	
		if (markah[i] > purata)
			bil++;
	}
	
	printf("\nPurata keseluruhan markah = %.2f", purata);
	printf("\nBilangan markah melebihi purata = %d\n",bil);
	return 0;
}
