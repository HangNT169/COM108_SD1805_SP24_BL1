#include <stdio.h>
int main(){
    // 2. while 
    // Cu phap:
    // while(dieu kien){
        // Code  => Muon lam gi thi lam 
    // }
    // VD: In cac so tu 0 - 10 
    // int i = 0;
    // while(i < 11){
    //     printf("%d\n",i);
    //     i++; // TANG BUOC NHAY LEN 1 DON VI 
    // }
    // 1. Tinh tong cac so tu 1 - 10 
    // 2. Tinh tich cac so tu 1- 10 
    // 3. Tinh tong cac so le tu 1 - n 
    // 4. Tinh tich cac so chia het cho 5
    // va la so le tu 1- n
    //  int i = 1;
    // int tong = 0;
    // while(i<11){
    //     tong = tong+i;
    //     i++;
    // }
    // printf("Tong = %d",tong);
    // Bai 3: 
    // int n;
    // int i = 1;
    // printf("Vui long nhap so");
    // scanf("%d",&n);
    // int tong = 0;
    // while(i < n+1){
    //   if(i%2!=0){
    //       tong = tong + i;
    //   }
    //   i++;
    // }
    // printf("Tong = %d",tong);
    // Nhập n. In các số từ 0 -n bỏ qua số 4  
    // Nhập n. In các số từ 0 -n gặp số 4 thì dừng 
    // n = 10 
    // 0 1 2 3 5 6 7 8 9 10 
    // 0 1 2 3 
    // int n;
    // printf("Vui long nhap n:");
    // scanf("%d",&n);
    // for(int i = 0; i<n+1; i++){
    //     if(i%4!=0){
    //         printf("\n%d",i);
    //     }
    // }
    // BREAK & CONTINUE 
    // int n;
    // printf("Nhap n :");
    // scanf("%d",&n);
    // for(int i = 0;i<n+1;i++){
    //     // // C1: SUY NGHI BINH THUONG 
    //     // // if(i<4){
    //     // //     printf("%d",i);
    //     // // }
    //     // // C2: SU DUNG TU KHOA BREAK
    //     // if(i == 4){
    //     //     break; // NEU VONG LAP I = 4 => THI DUNG HAN VONG LAP 
    //     // }
    //     // printf("%d\n",i);
    //     // C1: Binh thuong : GAP SO 4 THI BO QUA 
    //     // if(i%4!=0){
    //     //     printf("\n%d",i);
    //     // }
    //     if(i == 4){
    //         continue; // bo qua vong lap i == 4
    //     }
    //     printf("%d\n",i);
    //     // CHU Y: BREAK,CONTINUE => CHI CO THE DUNG TRONG VONG LAP 
    //     // NGOAI RA BREAK : CO THE DUNG TRONG SWITCH CASE 
    // }
    // 3. do..while 
    // Cu phap 
    // do{
    //     // code 
    // }while(dieu kien);
    // VD: In cac so tu 0 - 10 
    // int i = 0;
    // do{
    //     printf("%d\n",i);
    //     i++;
    // }while(i < 11);
    // In so 5 neu i = 3 
    // int i = 6;
    // while(i == 3){
    //     printf("So 5");
    // }
    // do{
    //   printf("So 3"); 
    // }while(i == 3);
    // 1. Tinh tong cac so tu 0 - 10 
    // 2. Tinh tich cac so le tu 1 - n 
    
    return 0;
}