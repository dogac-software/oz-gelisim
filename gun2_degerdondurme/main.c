#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// test adl� fonksiyon olu�turdum.
int test(int x , int y);


int main() {
   //de�i�ken tan�mlad�m.
    int x, y;

//kullan�c�dan giri� ald�m.
	printf("2 sayi giriniz:");
	scanf("%d %d",&x,&y);
	
//do�ruysa 1 yanl��sa 0 verecek �ekilde c�k�� verecek.
	printf("%d",test(x,y));

}

int test(int x,int y){
	
	
	return x == 100 || y == 100 || x + y == 100;
}
