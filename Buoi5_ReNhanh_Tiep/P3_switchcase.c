#include <stdio.h>

int main(){
    int thang;
    printf("Vui long nhap thang");
    scanf("%d",&thang);
    switch(thang){
        case 1:{
            printf("Day la thang mot");
            break;
        }
        case 2:{
            printf("Day la thang hai");
            break;
        }
        case 3:{
            printf("Day ka thang ba");
            break;
        }
        case 4:{
            printf("Day la thang bon");
            break;
        }
        case 5:{
            printf("Day la thang nam");
            break;
        }
        case 6:{
            printf("Day la thang sau");
            break;
        }
        case 7:{
            printf("Day la thang bay");
            break;
        }
        case 8:{
            printf("Day la thang tam");
            break;
        }
        case 9:{
            printf("Day la thang chin");
            break;
        }
        case 10:{
            printf("Day la thang muoi");
            break;
        }
        case 11:{
            printf("Day la thang muoi mot");
            break;
        }
        case 12:{
            printf("Day la thang muoi hai");
            break;
        }
        default:{ // Cac truong hop con lai 
            printf("Khong ton tai thang trong trong nam");
            break;
        }
    }
    return 0;
}
