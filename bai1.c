/******************************************************************************
 * Họ và tên: [Lê Minh Tường]
 * MSSV :      [PS37909]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

//  BÀI 1: TÍNH TRUNG BÌNH TỔNG CÁC SỐ CHIA HẾT CHO 3 TRONG MẢNG
//  Input: Nhập vào từ bàn phím 1 mảng các số nguyên. Mảng gồm n phần tử
//  Output: Xuất ra màn hình kết quả của trung bình tổng các số chia hết cho 3 trong mảng

// VIẾT CODE Ở ĐÂY
#include <stdio.h>

int main()
{
    int soPT;
    printf("Nhập số phần tử của mảng: ");
    scanf("%d", &soPT);

    int mang[soPT];
    int tong = 0, dem = 0;
    float tbTong;

    for (int i = 0; i < soPT; i++)
    {
        printf("Nhập giá trị cho phần tử thứ %d: ", i);
        scanf("%d", &mang[i]);
        if (mang[i] % 3 == 0)
        {
            tong += mang[i];
            dem++;
        }
    }

    tbTong = (float)tong / dem;
    printf("Trung bình tổng của các số chia hết cho 3 của mảng là: %.2f", tbTong);
    return 0;
}
