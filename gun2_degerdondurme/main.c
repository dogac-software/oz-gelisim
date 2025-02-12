#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// test adlý fonksiyon oluþturdum.
int test(int x , int y);


int main() {
   //deðiþken tanýmladým.
    int x, y;

//kullanýcýdan giriþ aldým.
	printf("2 sayi giriniz:");
	scanf("%d %d",&x,&y);
	
//doðruysa 1 yanlýþsa 0 verecek þekilde cýkýþ verecek.
	printf("%d",test(x,y));

}

int test(int x,int y){
	
	
	return x == 100 || y == 100 || x + y == 100;
}
