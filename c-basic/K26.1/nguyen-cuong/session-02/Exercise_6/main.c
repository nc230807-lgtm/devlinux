#include <stdio.h>

int main(){

    float luong_brutto = 0.0f, tile_thue = 0.0f;

    printf("Nhap tien luong brutto: ");
    scanf("%f", &luong_brutto);

    printf("Nhap ti le thue (%): ");
    scanf("%f", &tile_thue);

    float tien_thue = ( luong_brutto * tile_thue )/100;
    float luong_rong = luong_brutto - tien_thue;

    printf("Tien thue: %.2f\nLuong rong: %.2f", tien_thue, luong_rong);

    return 0;
}