#include <stdio.h>
#include <stdlib.h>
//parametreden buyuk sayilarin toplam�n� d�nd�ren fonksiyon
 parametredenbuyukleritopla(int dizi[5],int sayi){
int i;
int toplam=0;
for(i=0;i<5;i++){
	if(dizi[i]>sayi){
		toplam=toplam+dizi[i];
	}
}
 	
 return toplam;	
 	
 }


int main() {
   int dizi[5]={1,3,9,27,15};
   int sayi;
   int k;
   for(k=0;k<5;k++){
   	printf("%d\n",dizi[k]);
   }
   
   printf("hangi sayidan buyuk sayilari toplamak istiyorsun ?: ");
   scanf("%d",&sayi);
   printf("Girdi�iniz sayidan b�y�k sayilarin toplam�: %d",parametredenbuyukleritopla(dizi,sayi));
   return 0;
	
	
	
	
	return 0;
}
