#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	/*int sayi1=10;
	int sayi2=20;
	double sayi3=10.25;
	char kelime='a';
	printf("%d\n",sayi1);
	printf("%d\n",sayi2);
	printf("%f\n",sayi3);
	printf("%c",kelime);
	printf("\n\nBellek adresleri\n\n");
	printf("%x\n",&sayi1);
	printf("%x\n",&sayi2);
	printf("%x\n",&sayi3);
	printf("%x\n",&kelime);*/
	/*************************************************************/
	/*int sayi=20;
	int *s=&sayi;
	//sayiyi ekrana yazdirma
	printf("deger:d\n",sayi);
	//adresi ekrana yazdýrma
	printf("adres:%x",s);*/
	/*************************************************************/
	/*char harf='a';
	char *h=&harf;
	printf("Harf:%c\n",harf);
	printf("Adres:%x",h);*/
	/*************************************************************/
	char harf='k';
	char *pt=&harf;
	printf("Adres:%x\n",pt);//62fe17
	pt++;
	printf("Adres:%x\n",pt);//62fe18
	pt--;
	printf("Adres:%x\n",pt);//62fe17
	pt=pt+5;
	printf("Adres:%x",pt);//62fe1c
	
	
	
	return 0;
}
