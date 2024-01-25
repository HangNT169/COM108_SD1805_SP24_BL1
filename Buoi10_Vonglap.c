#include <stdio.h>

int main()
{
    // Vong lap: Dung de lap di lap lai 1 cong viec nhieu lan 
    // Co 3 loai vong lap:
        // 1. for
        // 2. while
        // 3. do...while 
    // for(gia tri khoi tao; dieu kien; buoc nhay){
    //     // code => se duoc lap di lap lai
    // }
    // VD: In cac so tu 0 - 10 
    for(int i = 0 ; i < 11 ; i++){
        printf("%d\n",i);
    }
    // 1. In cac so tu 1- 50 
    // 2. In cac so tu 0 - 20 
    // 3. In cac so chan tu 0 - 50 
    // 4. In cac so le tu 0 - 50
    // int i =0; // BIEN TOAN CUC - CO GIA TRI O MOI NOI
    // for(;i < 21;i++){
    //     printf("%d\n",i);
    // }
    // printf("After:\n");
    // printf("%d\n",i);
    // printf("day la bai 1");
    // for(int i =1;i < 51;i++){ // Bien cuc bo 
    //     printf("%d\n",i);
    // }
    // case 1:
    // case 2:{
    // }
    // for(int i =1;i < 51;i++){ // Bien cuc bo 
    //     printf("%d\n",i);
    // }
    // Co 2 loai bien trong lap trinh
    // 1. Bien toan cuc - Co gia tri o khap moi noi 
    // 2. Bien cuc bo - Co gia tri o trong khoi lenh cua no 
    // for(int i = 0 ; i < 51 ; i++){
    //     if(i % 2 == 0){
    //         printf("%d,",i);
    //     }
    // }
    // // Tang len/Giam di 1 don vi
    //     // C1: i++;i--; => CACH NHAU 1 DON VI THI MOI CO CACH 1 
    //     // C2: i=i+1;i=i-1;
    //     // C3: i+=1;i-=1;
    // // Tang len/Giam di x don vi 
    //     // C1: i=i+x;i=i-x;
    //     // C2: i+=x;i-=x;
    // for(int i = 0; i < 51; i+=2){
    //     printf("%d,",i);
    // }
     // 1. In cac so chia het cho 5 tu 0 - 20 
    // 2. In cac so chia het cho 3 va 5 tu 1 - 50 
    // 3. Nhap vao so nguyen n. In cac so tu 0-n 
    // 4. Nhap vao so nguyen n. In cac so chan tu 0 - n 
    // 5. Nhap vao so nguyen n . Tinh tong cac so tu 0 - n 
    // 6. Nhap vao so nguyen n. Tinh tich cac so tu 1 - n
     for(int a=0;a<21;a++){
        if(a%5==0){
          printf("%d,",a);
        }
    }
    for(int a=1;a<51;a++){
        if(a%3==0 && a%5==0){
          printf("%d",a);
        }
    }
    // B1: Nhap n tu ban phim 
    int n;
    printf("Moi nhap n:");
    scanf("%d",&n);
    // // B2: In cac so tu 0 - n
    // printf("In cac so:");
    // for(int i = 0 ; i < n +1; i++){
    //     printf("%d\n",i);
    // }
    int tong = 0;// tao bien tong co gia tri khoi tao la 0 
    // n = 10 : 0+1+2+3+...+n  => tong+i
    for(int i = 0; i< n+1;i++){
        tong = tong +i; // CONG THUC TINH TONG CHUNG 
    }
    printf(" Tong = %d\n",tong);
    return 0;
}
