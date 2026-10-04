#include <stdio.h>

int main(){

    float cel;

    printf("Nhap nhiet do Celcius: ");
    scanf("%f", &cel);

    float fah = ( cel * 9)/5 + 32;
    printf("Do Fahrenheit: %.2f", fah);

    return 0;
 }