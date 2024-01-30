#include<stdio.h>
int main(){
	char ten[100];
	int tuoi;
	char diachi[100];
	int kihoc;
	char nganhhoc[100];
	printf("Moi nhap ten: ");
	gets(ten);	
	printf("Moi nhap tuoi: ");
	scanf("%d",&tuoi);
	fflush(stdin); // XOA BO NHO DEM => XOA ENTER 
	printf("Moi nhap dia chi: ");
	gets(diachi);
	printf("Moi nhap ki hoc: ");
	scanf("%d",&kihoc);
	fflush(stdin); 
	printf("Moi nhap nganh hoc: ");
	gets(nganhhoc);
	printf("Ten: %s",ten);
	printf("\nTuoi: %d",tuoi);
	printf("\nDia chi: %s",diachi);
	printf("\nKi hoc: %d",kihoc);
	printf("\nNganh hoc: %s",nganhhoc);
	return 0;
}