#include <stdio.h>

int main ()
{
	int ua, total, jb;
	
	printf("Perhitungan Kafe\n");
	
	printf("Uang Awal (Ribu)	:Rp");
	scanf("%d", &ua);
	
	printf("Harga Kafe (Ribu)	:Rp30\n");
	
	printf("Suku Bunga (Persen)	:10\n");
	
	printf("Jumlah Bulan		:");
	scanf("%d", &jb);
	
	printf("----------\n");
	
	total = ua * ( 1 + ( 10 / 100) ) * jb;
	
	printf("Uang setelah %d bulan	:Rp%dk\n", jb, total); 
	
	if (total>30)
	{
		printf("Bisa Membuka!");
	}
	return 0;
}
