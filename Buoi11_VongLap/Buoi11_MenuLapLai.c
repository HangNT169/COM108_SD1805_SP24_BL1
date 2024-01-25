// Tao 1 menu gom cac chuc nang sau. Menu lap lai toi khi chon 4 thi dung 
// 1. Tinh tich cua cac so  chan va chia het cho 4 tu 1 - n
// 2. Nhap vao thang. Kiem tra day la thang nao trong nam 
// 3. Liet ke cac so chia het cho 3 hoac 5 tu 1 - n 
// 4. Thoat 
#include<stdio.h>
int main(){
    int menu;
    do{
        // B1: In menu 
        printf("1.Chuc nang1\n");
        printf("2.Chuc nang2\n");
        printf("3.Chuc nang3\n");
        // B2: Tao menu 
        printf("Menu:");
        scanf("%d",&menu);
        switch(menu){
            case 1:{
               printf("Chuc nang 1");
               break;
            }
            case 2:{
                int a;
                printf("Vui long nhap thang: ");
                scanf("%d",&a);
                switch(a){
                    case 1:{
                        printf("Thang mot");
                        break;
                    }
                    case 2:{
                        printf("Thang hai");
                        break;
                    }
                    case 3:{
                        printf("Thang ba");
                        break;
                    }
                    case 4:{
                        printf("Thang bon");
                        break;
                    }
                    case 5:{
                        printf("Thang nam");
                        break;
                    }
                    case 6:{
                        printf("Thang sau");
                        break;
                    }
                    case 7:{
                        printf("Thang bay");
                        break;
                    }
                    case 8:{
                        printf("Thang tam");
                        break;
                    }
                    case 9:{
                        printf("Thang chin");
                        break;
                    }
                    case 10:{
                        printf("Thang muoi");
                        break;
                    }
                    case 11:{
                        printf("Thang muoi mot");
                        break;
                    }
                    case 12:{
                        printf("Thang muoi hai");
                        break;
                    }
                    default:{
                        printf("Thang khong ton tai");
                        break;
                    }
                }
                break;
            }
            case 3:{
                printf("Chuc nang 3");
                break;
            }
            case 4:{
                printf("Chuc nang 4");
                break;
            }
            default:{
                printf("Chuc nang khong ton tai");
                break;
            }
        } 
    }while(menu !=4);
   
    return 0;
}