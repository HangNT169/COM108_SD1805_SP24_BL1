/**1. Kiem tra so nguyen nhap tu ban phim la so chan hay le 
2. Nhập vào điểm toán lý hoá. Tính điểm trung bình. Nếu 
    Dtb >=9 & <=10 => XS 
    Dtb >= 8. & < 9:Giỏi 
    từ 6<=dtb<8: Khá 
    5<=dtb<6: TB 
    Còn lại yếu
3. Tính tổng, hiệu, tích thương của 2 số nguyên nhập từ bàn phím 
4. Tìm max của 3 số nguyên nhập từ bàn phím
5. Cửa hàng của bạn nhận gửi bán sản phẩm cho một công ty khác 
    và sau mỗi tháng bạn cần tính toán số tiền hoa hồng bạn nhận được. 
    Với mức hoa hồng theo doanh số bán hàng như sau: 
    5% nếu tổng doanh số nhỏ hơn hoặc bằng 100 triệu. 
    10% nếu tổng doanh số nhỏ hơn hoặc bằng 300 triệu. 
    nếu tổng doanh số là lớn hơn 300 triệu. 
    Dựa vào dữ liệu trên, bạn viết chương trình C để tính hoa hồng đại lý bạn sẽ nhận.
*/
#include<stdio.h>
int main(){
    // Bai 2
    // int diemtoan;
    // int diemly;
    // int diemhoa;
    // printf("\nDiem toan:");
    // scanf("%d",&diemtoan);
    // printf("\nDiem ly:");
    // scanf("%d",&diemly);
    // printf("\nDiem hoa:");
    // scanf("%d",&diemhoa);
    // float dtb = 1.0*(diemtoan + diemly + diemhoa)/3
    // if(dtb >=9 && dtb <=10){
    //     printf("\nXS");
    // }else if(dtb >=8 && dtb <9){
    //     printf("\nGioi");
    // }else if(dtb >=6 && dtb <8){
    //     printf("\nKha");
    // }else if(dtb >=5 && dtb <6){
    //     printf("\nTB");
    // }else{
    //     printf("\nYeu");
    // }
    // Bai 4: Tìm max của 3 số nguyên nhập từ bàn phím
    int so1;
    int so2;
    int so3;
    // B1: Nhap 3 so 
    printf("Vui long nhap so 1:");
    scanf("%d",&so1);
    printf("Vui long nhap so 2:");
    scanf("%d",&so2);
    printf("Vui long nhap so 3:");
    scanf("%d",&so3);
    
    // B2: Tim max 
    int max  = so1; // Gan gia tri cua max bang 1 trong 3 so 
    // SS vs cac so con lai 
    if(max < so2){
        max = so2;
    }
    if(max < so3){
        max = so3;
    }
    printf("Max = %d\n",max);
    return 0;
}