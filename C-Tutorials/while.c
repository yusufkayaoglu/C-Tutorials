#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	/*int i;
	i=1;
	while(i<=5){
	printf("Merhaba ANKARA \n");
	i++;
	}*/
	
/*int i;
i=1;
while(i<=10){
	
	
	printf(" %d",i);
	i++;
	
	
	
}*/
 /*int i;
 i=1;
 
 while(i<=20)
 {
  if(i%2==0 && i!=14)
  {
   printf(" %d",i);
  }
  i++;*/
  
int s,f;
	f=1;
	
	printf("Sayiyi Yaziniz: ");
	scanf("%d",&s);

	while (s>1)
	{
		f=f*s;
		s--;
	}
	printf("Sonuc: %d",f);


	
	

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
