#include <stdio.h>

int main(){

    float gia_hang = 0.0f, VAT = 0.0f;

    printf("Nhap gia tien hang: ");
    scanf("%f", &gia_hang);

    printf("Nhap VAT (%): ");
    scanf("%f", &VAT);
    
    float tien_VAT = ( gia_hang * VAT ) / 100;
    float sum = gia_hang + tien_VAT;

    printf("Tien VAT: %.2f\nTong tien: %.2f\n", tien_VAT, sum);

    return 0;
}