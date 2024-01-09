#include<stdio.h>
int main(){
    // 2. Re nhanh 
    // if... else 
    // Cu phap:
    // if(dieu kien){
    //     // code - muon lam gi thi lam 
    // }else if(dieu kien){
    //     // code
    // }...(co the co nhieu else if)
    // else{
    //     // code 
    // }
    // Chu y :
    // LUON LUON CHI CO 1 IF , 1 ELSE 
    // DIEU CON THUA THI LA ELSE IF 
    // VD: Nhap vao so nguyen.
    // Kiem tra so vua nhap 
    // lon hon 5 hay bang 5 hay nho hon 5
    int a = 6;
    printf("Vui long nhap so:");
    scanf("%d",&a);
    if(a<5){
        printf("Day la so be hon 5");
    }else if(a == 5){
        printf("Day la so 5");
    }else{
        printf("Day la so lon hon 5");
    }
    // Kiem tra 1 so nguyen nhap tu ban phim
    // la so chan hay so le 
    int songuyen;
    printf("Vui long nhap so:");
    scanf("%d",&songuyen);
    if(songuyen %2 == 0){
        printf("Day la so chan");
    }else{
        printf("Day la so le");
    }
    
    return 0;
}