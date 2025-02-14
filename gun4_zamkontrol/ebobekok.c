#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float x, y, yuzdeartis, azamizam, u, zamlifiyat;
    
    printf("eski asgari ucret: ");
    scanf("%f", &x);
    
    printf("yeni asgari ucret: ");
    scanf("%f", &y);
    
    // Yüzde artýþý hesaplama
    yuzdeartis = ((y - x) * 100) / x;
    azamizam = yuzdeartis / 3;
    
    printf("urunun eski fiyatini girin: ");
    scanf("%f", &u);
    
    // Ürün zamlý fiyat hesaplama
    zamlifiyat = u + (azamizam * u / 100);
    
    printf("urunun yeni fiyati: %.2f\n", zamlifiyat);
    
    return 0;
}

