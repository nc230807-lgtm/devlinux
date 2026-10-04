#include <stdio.h>

int main(){

    int so_nam_gui = 0;
    float tien_goc = 0.0f, lai_suat = 0.0f;

    printf("Nhap tien goc (principal): ");
    scanf("%f", &tien_goc);

    printf("Nhap lai suat (%): ");
    scanf("%f", &lai_suat);

    printf("Nhap so nam muon gui: ");
    scanf("%d", &so_nam_gui);
    
    float tien_lai = ( tien_goc * lai_suat * so_nam_gui ) / 100;
    float tong_tien = tien_goc + tien_lai;

    printf("Tien lai: %.2f\nTong tien nhan duoc: %.2f", tien_lai, tong_tien);

    return 0;
}