// Tao 1 menu. Menu lap lai toi khi chon 3 thi dung 
// 1. Tinh tong cua 2 so nguyen nhap tu ban phim
// 2. Tinh tich cua cac so nguyen le hoac chia het cho 3 tu 0 - n 
// 3. Thoat
// Co 2 loai ham 
// 1. Ham co kieu du lieu tra ve (RETURN)
// 2. Ham khong co kieu du lieu tra ve : VOID 
// CU PHAP HAM 
// KIEU DU LIEU TRA VE TEN HAM(CAC THAM SO TRUYEN VAO NEU CO){
// }
// DAT TREN MAIN
#include <stdio.h>
void tinhTong(int soThuNhat, int soThuhai){
    int tong = soThuNhat + soThuhai;
    printf("Tong = %d\n",tong);
}
// Ham co kieu tra ve 
int tinhTong2(int so1,int so2){
    int tong = so1 + so2;
    return tong;
}
int main(){
    int chucnang;
    do{
        printf("1.chucnang\n");
        printf("2.chucnang\n");
        printf("3.chucnang\n");
        printf("0.thoat\n");
        printf("nhap chucnang:");
        scanf("%d",&chucnang);
        switch(chucnang){
            case 1:{
                printf("chucnang1");
                int s1;
			    int s2;
				printf("\nMoi nhap so thu nhat: ");
				scanf("%d", &s1);
				printf("\nMoi nhap so thu hai: ");
				scanf("%d", &s2);
				int a = tinhTong2(s1,s2);
				printf("Tong = %d\n",a);
				// int tong=s1+s2;
				// printf("\nTong = %d",tong);
                break;
            }
            case 2:{
                int n;
				printf("\nMoi nhap so bat ki: ");
				scanf("%d", &n);
				int i=1;
				int tich=1;
				while(i<n+1){
					if(i%2!=0){
						tich=tich*i;
					}
					i++;
				}
				printf("\nTich = %d", tich);
                break;
            }
            case 3:{
                printf("chucnang3");
                break;
            }
            default:{
                printf("khongtontai");
                break;
            }
        }
    }while(chucnang!=3);
    
    return 0;
}
