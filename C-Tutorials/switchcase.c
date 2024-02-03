#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
    /*int sayi;
	printf("Sayi Giriniz: ");
	scanf("%d",&sayi);
	
	switch(sayi){
	case 1:printf("Ocak");break;
	case 2:printf("Subat");break;
	case 3:printf("Mart");break;
	case 4:printf("Nisan");break;
	case 5:printf("Mayis");break;
	case 6:printf("Haziran");break;
	case 7:printf("Temmuz");break;
	case 8:printf("Agustos");break;
	case 9:printf("Eylul");break;
	case 10:printf("Ekim");break;
	case 11:printf("Kasým");break;
	case 12:printf("Aralik");break;
	default:printf("Hatali Sayi Girdiniz");break;
    }*/
    
   /*char ders;
   printf("Ders kodunu giriniz : ");
   scanf("%s",ders);
    switch(ders){
    case 't':printf("Turkce");break;
	case 'm':printf("Matematik");break;
	case 'f':printf("Fen Bilgisi");break;
	case 's':printf("Turkce");break;
	default:printf("Hatali ya da Buyuk Harf Girisi");break;
  	}*/
  	//haftanýn gunleri 
	  
	/*int sayi; 
	printf("Sayi Giriniz : ");
	scanf("%d",&sayi);
	switch(sayi){
	case 1:printf("Pazartesi");break;
	case 2:printf("Sali");break;
	case 3:printf("Carsamba");break;
	case 4:printf("Persembe");break;
	case 5:printf("Cuma");break;
	case 6:printf("Cumartesi");break;
	case 7:printf("Pazar");break;
	default:printf("Hatali Bir Sayi Girdiniz");break;
	}*/

	int sayi1,sayi2,sonuc;
	char islem;
	sayi1=75;
	sayi2=15;
	printf("islemi girin:");
	scanf("%s",&islem);
	switch(islem){
		
	case'+':
	sonuc=sayi1+sayi2;
	printf("Sonuc: %d",sonuc);
	break;
		case'-':
		sonuc=sayi1-sayi2;
	printf("Sonuc: %d",sonuc);
	break;
		case'*':
		sonuc=sayi1*sayi2;
	printf("Sonuc: %d",sonuc);
	break;
		case'/':
		sonuc=sayi1/sayi2;
	printf("Sonuc: %d",sonuc);
	break;
	default:printf("Hatali islem sembolu girdiniz");
		
		
		
		
		
		
		
	}
	
		
		
		
		
	
    
    
    
    
    
    
    
    
    
    
    
    
    
    
	return 0;
    }
