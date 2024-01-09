// 1. Tính tổng, hiệu, tích thương của 2 số nguyen có giá trị tuỳ ý 
// 2. Tính TBC điểm toán, lý , của sinh viên với điểm toán, lý, hoá 
// là số nguyên và có giá trị tuỳ ý 
// 3. Tính chu vi, diện tích của hình chữ nhật với 2 cạnh của hcn 
// là số nguyên và có giá trị tuỳ ý
#include<stdio.h>
int main (){
    // B2
    int diemtoan = 8;
    int diemly = 5;
    int diemhoa = 3;
    float diemtbc = (float)(diemtoan + diemly + diemhoa)/3;
    printf("Diem TBC = %f",diemtbc);
    // B3
    int chieuDai = 8;
    int chieuRong = 5;
    int chuVi = 2*(chieuDai + chieuRong);
    int dienTich = chieuDai * chieuRong;
    printf("chuVi:%d\n",chuVi);
    printf("dienTich:%d",dienTich);
    return 0;
}