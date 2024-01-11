#include <stdio.h>

int main(){
   // Tao 1 menu gom cac chuc nang sau :
   // 1. Tinh tong cua 2 so nguyen nhap tu ban phim 
   // 2. Tinh tuoi khi nhap vao nam sinh
   // 3. Thoat 
    int chucNang;
    printf("Moi nhap menu:");
    scanf("%d",&chucNang);
    // in menu (neu thich)
    switch(chucNang){
        case 1:{
           // Code 
           printf("Case 1");
          int sn1;
          int sn2;
          printf("Vui long nhap so1:");
          scanf("%d",&sn1);
          printf("Vui long nhap so2:");
          scanf("%d",&sn2);
          int tong = sn1 + sn2;
          printf("Tong,%d",tong);
          
        
           break;
        }
        case 2:{
           printf("Case 2");
           
           break;
        }
        case 3:{
           printf("Case 3");
           break;
        }
        default:{
            printf("Chuc nang khong ton tai");
            break;
        }
   }

    return 0;
}
