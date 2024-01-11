#include<stdio.h>
int main(){
    // Nhap vao thang so nguyen.
    // In ra day la thang nao cua nam 
    // VD: 1 => Thang mot 
    int thang;
    printf("Vui long nhap thang");
    scanf("%d",&thang);
    if(thang==1){
        printf("Day la thang mot");
    }else if(thang==2){
        printf("Day la thang hai");
    }else if(thang==3){
        printf("Day la thang ba");
    }else if(thang==4){
        printf("Day la thang bon");
    }else if(thang==5){
        printf("Day la thang nam");
    }else if(thang==6){
        printf("Day la thang sau");
    }else if(thang==7){
        printf("Day la thang bay");
    }else if(thang==8){
        printf("Day la thang tam");
    }else{
        printf("Day la thang khong ton tai");
    }
    // switch .. case => Re nhanh(Co nhieu truong hop xay ra)
    // Cu phap 
    // switch(ten bien){
    //     case gia tri:{
    //         // code 
    //         break;
    //     }
    //     // Co the co rat nhieu cau 
    //     default:{
    //         // cac truong hop con lai
    //         break;
    //     }
    // }
    // Chu y:
    // 1. Ket thuc moi case luon luon la break 
    // 2. Ket thuc switch luon luon la default 
    
    return 0;
}