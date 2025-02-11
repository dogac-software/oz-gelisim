#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main() {
    
    float x1, x2, y1, y2, easy, calculation;
    
    printf("Birinci cismin konumunu giriniz (x1,y1):\n");
    scanf("%f %f", &x1, &y1);
    
    printf("ikinci cismin konumunu giriniz (x2,y2):\n");
    scanf("%f %f", &x2, &y2);
    
    easy = (y2 - y1) * (y2 - y1) + (x2 - x1) * (x2 - x1);
    calculation = sqrt(easy);
    
    printf("Sonuc = %f\n", calculation);
    
    return 0;
}

