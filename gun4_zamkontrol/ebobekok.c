#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float x, y, yuzdeartis, azamizam, u, zamlifiyat;
    
    printf("eski asgari ucret: ");
    scanf("%f", &x);
    
    printf("yeni asgari ucret: ");
    scanf("%f", &y);
    
    // Y�zde art��� hesaplama
    yuzdeartis = ((y - x) * 100) / x;
    azamizam = yuzdeartis / 3;
    
    printf("urunun eski fiyatini girin: ");
    scanf("%f", &u);
    
    // �r�n zaml� fiyat hesaplama
    zamlifiyat = u + (azamizam * u / 100);
    
    printf("urunun yeni fiyati: %.2f\n", zamlifiyat);
    
    return 0;
}

