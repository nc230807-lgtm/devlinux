#include <stdio.h>

int main(){

    float a = 0.0f, b = 0.0f;

    printf("Giai pt bac nhat: ax + b = 0\n");

    printf("Nhap he so a: ");
    scanf("%f", &a);

    printf("Nhap he so b: ");
    scanf("%f", &b);

    if(a == 0 && b == 0){
        printf("Phuong trinh vo so nghiem!\n");
    }    
    else if(a == 0 && b != 0){
        printf("Phuong trinh vo nghiem!\n");
    }
    else if(a != 0){
        printf("Nghiem cua phuong trinh la: %.2f\n", (-b)/a);
    }

    return 0;
}