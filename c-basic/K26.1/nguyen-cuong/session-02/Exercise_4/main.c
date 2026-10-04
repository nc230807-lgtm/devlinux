#include <stdio.h>

#define PI 3.14159

int main(){

    float r = 0.0f;

    printf("Nhap ban kinh duong tron: ");
    scanf("%f", &r);

    float chuvi = 2*PI*r;
    float dientich = PI*r*r;

    printf("Chu vi hinh tron = %.2f, dien tich hinh tron = %.2f", chuvi, dientich);

    return 0;
}