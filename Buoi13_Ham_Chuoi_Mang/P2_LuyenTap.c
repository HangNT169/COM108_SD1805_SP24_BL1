// Nhap 1 so nguyen duong. 
// Nhap di nhap lai den khi nao so day la so nguyen duong thi dung.
// In so vua nhap ra man hinh
#include<stdio.h>
int main(){
    int number;
    while(1){
        printf("Moi nhap:");
        scanf("%d",&number);
        if(number > 0){
            break;
        }else{
            printf("Moi nhap lai:\n");
        }
    }
    printf("number = %d\n",number);
    return 0;
}
