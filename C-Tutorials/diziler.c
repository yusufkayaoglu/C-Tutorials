#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
//	int tekrakamlar []={1,3,5,7,9};
//	printf("%d",tekrakamlar[3]);
	
//	char sehir [4]={'a','n','k','a','r','a'};
  // printf("%s",sehir);
   
   
  /* int sayilar[4];
   sayilar[0]=40;
   sayilar[1]=41;
   sayilar[2]=42;
   sayilar[3]=43;
   sayilar[4]=44;
   printf("%d",sayilar[4]);	*/ 
   
    /*int sayilar[]={10,20,30,40,50,60,70};
	int i;
    for(i=0;i<6;i++){
	
	printf("%d\n",sayilar[i]);
    }*/
    
    /*int sayilar[]={10,20,30,40};
    int toplam=0;
    int i;
    for(i=0;i<4;i++){
    	toplam=toplam+sayilar[i];
	}
	printf("toplam=%d",toplam);*/
/*	char sehir[15];
	int i;
	for(i=0;i<2;i++){
	printf("Sehri Girin: ");
	scanf("%s",sehir);
	printf("Girdiginiz sehir: %s",sehir);
	printf("\n\n");
	}*/
	/*int dizi[100];
	int i,sayi;
	printf("Eleman sayisi: ");
	scanf("%d",&sayi);
	for(i=0;i<sayi;i++){
	     
		printf("Dizinin %d.elemani : " ,i+1);
		scanf("%d",&dizi[i]);	
	}
	printf("\n\n");
	for(i=0;i<sayi;i++){
	printf("%d ",dizi[i]);	
		
	}*/
	
	int dizi[50];
	int i,sayi,toplam,ortalama;
	
	toplam=0;
	
	printf("ELEMAN SAYISI GIRINIZ: ");
	scanf("%d",&sayi);
	
	for(i=0;i<sayi;i++)
	{
		printf("DIZININ %d.DEGERINI GIR: ",i+1);
		scanf("%d",&dizi[i]);
	} 
	for(i=0;i<sayi;i++)
	{
		toplam=toplam+dizi[i];
		
	}
	printf("\nDIZI TOPLAM: %d",toplam);
	ortalama=toplam/sayi;
	printf("\nDIZI ORTALAMA: %d",ortalama);	
    
    
   
 
	
	
	
	
	
	
	
	
	
	
	return 0;
}
