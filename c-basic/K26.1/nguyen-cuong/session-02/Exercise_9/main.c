#include <stdio.h>

int main(){
    // Đang xét trường hợp b != 0

    int a = 0, b = 0;

    printf("Nhap so nguyen a: ");
    scanf("%d", &a);

    printf("Nhap so nguyen b: ");
    scanf("%d", &b);

    printf("Cong: %d\nTru: %d\nNhan: %d\nChia nguyen: %d\nSo du: %d\n", a+b, a-b, a*b, a/b, a%b);

    return 0;
}