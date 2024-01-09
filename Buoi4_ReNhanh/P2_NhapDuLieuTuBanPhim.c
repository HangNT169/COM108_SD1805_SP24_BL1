// 3. Tính chu vi, diện tích của hình chữ nhật với 2 cạnh của hcn 
// là số nguyên và có giá trị tuỳ ý
#include<stdio.h>
int main(){
    // Nhap du lieu tu ban phim 
    // => scanf 
    // Cu phap:
    // scanf("%kieu du lieu tuong ung",&ten bien);
    // VD: Nhap 1 so nguyen tu ban phim
    // va in gia tri cua so nguyen vua 
    // nhap ra man hinh
    int a;
    printf("Vui long nhap so:");
    scanf("%d",&a);
    printf("a = %d",a);
    // 1. Nhap 2 so thuc tu ban phim.
    // In thong tin cua 2 so vua nhap 
    // 2. Tinh tong,hieu, tich, thuong
    // cua 2 so nguyen nhap tu ban phim 
    // float a;
    // printf("Moi ban vui long nhap so 1:");
    // scanf("%f",&a);
    // float b;
    // printf("Moi ban vui long nhap so 2:");
    // scanf("%f",&b);
    // printf("a = %f",a);
    // printf("b = %f",b);
    // int sn1 = 9;
    // int sn2 = 5;
    // // B1: Nhap du lieu tu ban phim
    // printf("Vui long nhap so thu nhat:");
    // scanf("%d",&sn1);
    // printf("Vui long nhap so thu hai:");
    // scanf("%d",&sn2);
    // int tong = sn1 + sn2;
    // int hieu = sn1 - sn2;
    // int tich = sn1 * sn2;
    // float thuong = (float)sn1 / sn2;
    // printf("\nTong = %d",tong);
    // 1. Nhap vao chieu cao - int, can nang - float tu ban phim .
    // In ra chi so BMI
    // 2. Tinh chu vi dien tich hinh tron
    // Voi ban kinh la so nguyen nhap tu ban phim 
    int Bankinh;
    printf("Vui long nhap ban kinh:");
    scanf("%d",&Bankinh);
    float a = (float)2 * 3.14 * Bankinh;
    float b = (float)3.14 * (Bankinh * Bankinh);
    printf("Chu vi la = %f",a);
    printf("\nDien tich la = %f",b);
    return 0;
}