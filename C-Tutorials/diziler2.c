#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	/*int dizi[2][2];
	dizi[0][0]=10;
	dizi[0][1]=20;
	dizi[1][0]=30;
	dizi[1][1]=40;
	printf("Matrisin 0-0 da bulunan elemaný=%d\n",dizi[0][0]);
	printf("Matrisin 0-1 da bulunan elemaný=%d\n",dizi[0][1]);
	printf("Matrisin 1-0 da bulunan elemaný=%d\n",dizi[1][0]);
	printf("Matrisin 1-1 da bulunan elemaný=%d\n",dizi[1][1]);*/
	
	
/*	int matris[2][3]={10,20,30,40,50,60};
	int i,j;
	for(i=0;i<2;i++){
	for(j=0;j<3;j++){
	printf("%d ",matris[i][j]);		
			
	}
	printf("\n");
	}*/
	
	int satir,sutun,i,j,k,n;
	printf("Satir sayisi: ");
	scanf("%d",&satir);
	printf("Sutun sayisi: ");
	scanf("%d",&sutun);
	int matris[satir][sutun];
	for(i=0;i<satir;i++){
	for(j=0;j<sutun;j++){
	printf("[%d][%d]",i+1,j+1);
	scanf(" %d",&matris[i][j]);
	}
    }  
	
	for(k=0;k<satir;k++){
	for(n=0;n<sutun;n++){
	printf("%d ",matris[k][n]);
	}
	printf("\n");
	}
/*	int m1[2][2]={10,20,30,40};
	int m2[2][2]={10,20,30,40};
	int toplam[2][2];
	int i,j,k,l;
	for(i=0;i<2;i++){
	for(j=0;j<2;j++){
	toplam[i][j]=m1[i][j]+m2[i][j];
	}
	}
	for(k=0;k<2;k++){
	for(l=0;l<2;l++){
	    printf("%d ",toplam[k][l]);
	}
	printf("\n");
	}*/
		
		
		
		
		
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
