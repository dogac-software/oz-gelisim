#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int i,j,v,satir,sutun,vzd;
	
	printf(" kume sayisi ,sutun ve satir sayisini giriniz:");
	scanf("%d %d %d",&satir,&sutun,&vzd);
	
	for(i=0;i<satir;i++){
		for(j=0;j<sutun;j++){
		   for(v=0;v<vzd;v++){
		   	printf("*");
		   	
		   }
			printf("\n");
		}
			printf("\n");
	}
	
	
	
	
	return 0;
}
