#include <stdio.h>

int main(){

    float dai, rong;

    printf("Nhap chieu dai: ");
    scanf("%f", &dai);

    printf("Nhap chieu rong: ");
    scanf("%f", &rong);

    printf("Dien tich hinh chu nhat: %.2f", dai*rong);
    return 0;
}