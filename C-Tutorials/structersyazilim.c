#include <stdio.h>
#include <stdlib.h>
#include<string.h>
/*1 -)struct student{
	char isim[15];
	char soyisim[15];
	int numara;
	int yas;		
};
*/

/*int main() {
	struct student yusuf={"yusuf","kayaoglu",10,20};
	printf("%s %s %d %d ",yusuf.isim,yusuf.soyisim,yusuf.numara,yusuf.yas);
	}*/
	/*diger bir kullaným þekili*/
	/*struct Araba{
	int teker;
	int vites;
	int model;
	float motor;
	int beygir;
	}araba1,araba2;
	
	int main(){
		araba1 = { 4,6,2011,3.0,300 };
		araba2=araba1;
		printf("%d %d %d %f %d",araba1.teker,araba1.vites,araba1.model,araba1.motor,araba1.beygir);
		
		return 0;
		
	}*/
	/*ic ice yapýlar*/
/*	struct address{
	char mahalle[15];
	char cadde[20];
	char sokak[15];
	};
	struct ogrenci{
	char isim[20];
	char soyisim[20];
	int numara;
    int yas;
    struct address adres;			
	};
	int main(){
	struct ogrenci ogrenci1;
	//ogrenc1.isim="yusuf" olamaz hata verir
	strcpy(ogrenci1.isim,"Yusuf");
	strcpy(ogrenci1.soyisim,"Kayaoglu");
	ogrenci1.numara=10;
	ogrenci1.yas=20;
	strcpy(ogrenci1.adres.sokak,"318.sok.");
	strcpy(ogrenci1.adres.mahalle,"Bahcelievler");
	strcpy(ogrenci1.adres.cadde,"10.cad");
	printf("%s %s %d %d %s %s %s",ogrenci1.isim,ogrenci1.soyisim,ogrenci1.numara,ogrenci1.yas,ogrenci1.adres.sokak,ogrenci1.adres.mahalle,ogrenci1.adres.cadde);
	}*/

//struct dizileri
/*struct ogrenci{
	char isim[20];
	char soyisim[20];
	int numara;	
};
	
int main(){
	struct ogrenci ogrenciler[3];
	int i;
	for(i=0;i<3;i++){
		
		printf("%d ninci ogrencinin bilgilerini girin",i+1);
		scanf("%s %s %d",&ogrenciler[i].isim,&ogrenciler[i].soyisim,&ogrenciler[i].numara);
	}
	for(i=0;i<3;i++){
		printf("%d ninci ogrencinin bilgileri %s %s %d",i+1,ogrenciler[i].isim,ogrenciler[i].soyisim,ogrenciler[i].numara);
	
	}*///structure ve fonksiyonlar
/*	struct ogrenci{
	char isim[20];
	char soyisim[20];
	int numara;	
};
 void goster(struct ogrenci a ){
 	printf("ogrencinin bilgileri %s %s %d ",a.isim,a.soyisim,a.numara);
 }
     degeral(){
 	struct ogrenci yeni;
 	printf("bilgileri girin");
 	scanf("%s %s %d",&yeni.isim,&yeni.soyisim,&yeni.numara);	
 	return yeni;
 }
int main(){
	struct ogrenci ogrenci1=degeral();
	goster(ogrenci1);
	}*/
	/*pointer ve structers*/
	/*struct ogrenci{
	char isim[20];
	char soyisim[20];
	int numara;	
};
int main(){
	struct ogrenci *tut;
	struct ogrenci ogrenci1;
	strcpy(ogrenci1.isim,"yusuf");
	strcpy(ogrenci1.soyisim,"kayaoglu");
	tut=&ogrenci1;
	ogrenci1.numara=100;
	printf("%s %s %d",tut->isim,tut->soyisim,tut->numara);//*tut.isim ile tut->isim ayni þey demektir!!!!
	
}*/
	/*call by referance*/
	/*struct ogrenci{
	char isim[20];
	char soyisim[20];
	int numara;	
    };
    void goster(struct ogrenci *p){
	
	printf("ogrenci bilgileri: %s %s %d ",p->isim,p->soyisim,p->numara);
	
	
    }
	int main(){
	struct ogrenci ogrenci1 = {"yusuf","kayaoglu",120};
	goster(&ogrenci1);
		
		
		
	}*/
	
	
	
	
	
	
	
	
	
	
	
	
	
