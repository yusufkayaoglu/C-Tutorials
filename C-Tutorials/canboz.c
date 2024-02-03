#include <stdio.h>
#include <stdlib.h>


int main() {
	int i;
	int faktor=1;
	for(i=5;i>=1;i--){
	 faktor=faktor*i;
	}
	printf("%d",faktor);
	return 0;
}
