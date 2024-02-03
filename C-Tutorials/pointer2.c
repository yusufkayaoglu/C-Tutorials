#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
	int i=5;
	
	int *p=&i;
	
	
	printf("%x",p);
	printf("\n%d",*p);
	
	//& adres bilgisini veriyo.
	//* adresteki degeri verir.

	/***************************************/
	/*int a =5,*ap;
	float b=3.2,*bp;
	double c=3.412,*cp;
	char d='a',*dp;
	int sayilar[5]={1,2,3,4,5};
	
	int *arrp;
	ap=&a;
	bp=&b;
	cp=&c;
	dp=&d;
	arrp=&sayilar[1];
	printf("%u adresindeki intin degeri %d dir\n ",ap,*ap);
	printf("%u adresindeki floatin degeri %f dir\n ",bp,*bp);
	printf("%u adresindeki doublein degeri %lf dir\n ",cp,*cp);
	printf("%u adresindeki charin degeri %c dir\n ",dp,*dp);
	printf("%u adresindeki sayilarin elemaninin  degeri %d dir\n ",arrp,*arrp);*/
	/************************************************************************/
	/*int i,j=1;
	
	int *jp1,*jp2=&j;
	jp1=jp2;
	i=++(*jp2);
	*jp2=*jp1+i;
	printf("i= %d,j= %d,*jp1= %d,*jp2= %d\n",i,j,*jp1,*jp2);*/
	
/*************************************************************************/
//call by referance(adres ile gönderme)
/*void degerdegistir(int *a,int *b){
  int gecici=*a;
  *a=*b;
  *b=gecici;	
	
	
}
	int main(){

    int x=5,y=10;
    degerdegistir(&x,&y);
    printf("x=%d y=%d",x,y);
}*/ 
/*int main(){

int dizi[5]={1,2,3,4,5};
int *p=dizi;   //int *p=&dizi[0] demekle ayný þeydir!!
printf("%d\n",*p);
printf("%d\n",*(p+1));
printf("%d\n",*(p+2));
printf("%d\n",*(p+3));
printf("%d\n",*(p+4));//*(p+4)=p[4] demekle ayný þeydir!!!!!!


}*//*int main(){
char yazi[]="tura";
char *p=yazi;
printf("%d",strlen(yazi));
}*/


/*int benimstrlen(char *p){
	int i=0;
	int uzunluk=0;
	for(;p[i]!='\0';i++){
	 uzunluk++;
	}
return uzunluk;	
}
int main(){
	char yazi[]="YusufKayaoglu";
	printf("%d",benimstrlen(yazi));
	}*/
	/*char *dondur(char *p,int indeks){
	int uzunluk=strlen(p);
	if(indeks>uzunluk){
		return NULL;
	}
	else{
		
		return p+indeks;
	}
		
		
	}
	
	
	
	
	int main(){
	char dizi[]="YusufKayaoglu";
	char *p=dondur(dizi,2);
	if(p==NULL){
		printf("Pointer NULL");
	}
	else{
		
		printf("%s",p);
	}
			
	}*/
	
	// pointer dizileri
	
	/*char *gunismi(char *gundizisi[],int uzunluk,int hangigun){
		if(hangigun>=1 &&hangigun<=7){
			
			return gundizisi[hangigun-1];
			
		}
		else{
			
			return NULL;
			
		}
	}
	int main(){
	char *gunler[7]={"pazartesi","sali","carsamba","persembe","cuma","cumartesi","pazar"};
	char *p=gunismi(gunler,7,5);
	if(p==NULL){
		printf("NULL");
	}
	else{
		printf("%s",p);
	}
		
	*/	
		
		
	}
	
	
	
	
	























