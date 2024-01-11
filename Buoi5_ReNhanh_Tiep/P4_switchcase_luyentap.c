// Nhap vao 1 so nguyen. Kiem tra no thuoc quy nao trong nam 
#include<stdio.h>
int main (){
    int songuyen;
    printf("Vui long nhap songuyen: ");
    scanf("%d",&songuyen);
    switch(songuyen){
        case 1: case 2: case 3:{
            printf("quy mot");
            break;
        }case 4: case 5: case 6:{
            printf("quy hai");
            break;
        }case 7: case 8: case 9:{
            printf("quy ba");
            break;
        }case 10: case 11: case 12:{
            printf("quy bon");
            break;
        }default:{ // Cac truong hop con lai 
            printf("Khong ton tai thang trong trong nam");
            break;
        }
    }
}