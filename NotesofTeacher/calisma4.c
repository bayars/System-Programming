#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int eleman_sayisi, *ptr, i, toplam;

	printf("Dizide kac eleman olacagini giriniz: ");
	scanf("%d", &eleman_sayisi);
	

	ptr = (int *) malloc(eleman_sayisi * sizeof(int));
	if(ptr == NULL) 
	{
		printf("Belirtec icin yer ayrilamadi!\n");
		exit(-1);
	}

	printf("Dizinin elemanlarini giriniz\n");

	toplam = 0;
	for (i = 0; i < eleman_sayisi; ++i)
	{
		scanf("%d", ptr + i);
		toplam += *(ptr + i);
	}

	printf("Dizideki elemanlarin toplami: %d\n", toplam);
	free(ptr);

	return 0;
}