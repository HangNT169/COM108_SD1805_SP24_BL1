// 1. Nhap 1 mang so nguyen tu ban phim 
// vs size nhap tu ban phim
// In cac so nguyen trong mang ra man hinh
#include <stdio.h>

int main(){
    // B1: Nhap size cua mang 
    int size ;
    printf("Moi nhap size:");
    scanf("%d",&size);
    // B2: Nhap mang tu ban phim 
    int arr[100]; // CO DINH SO PHAN TU MAX TRONG MANG
    // MANG SE CHUA MAX LA 100 PHAN TU 
    printf("Moi nhap cac phan tu trong mang\n");
    for(int i = 0 ; i < size ;i++){
        scanf("%d",&arr[i]); // NHAP GIA TRI CUA MANG 
    }
    printf("Cac phan tu trong mang la:\n");
    for(int i = 0 ;i < size; i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}
