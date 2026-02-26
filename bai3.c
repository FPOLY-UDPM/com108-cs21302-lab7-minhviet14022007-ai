/******************************************************************************
 * Họ và tên: [Trương Minh Việt]
 * MSSV:      [PS48885]
 * Lớp:       [COM108]
 *****************************************************************************/

//  BÀI 3: XÂY DỰNG CHƯƠNG TRÌNH SẮP XẾP CHUỖI THEO CHỮ CÁI 
//  Input: Nhập 5 chuỗi bất kỳ 
//  Output: Thứ tự các chuỗi đã được sắp xếp  

// VIẾT CODE Ở ĐÂY

#include <stdio.h>
#include <string.h>
void sapXepChuoi() {
    char chuoi[5][100];
    printf("Nhap vao 5 chuoi bat ky:\n");
    for (int i = 0; i < 5; i++) {
        printf("Chuoi %d: ", i + 1);
        scanf("%s", chuoi[i]);
    }
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (strcmp(chuoi[i], chuoi[j]) > 0) {
                char temp[100];
                strcpy(temp, chuoi[i]);
                strcpy(chuoi[i], chuoi[j]);
                strcpy(chuoi[j], temp);
            }
        }
    }
    printf("\nCac chuoi da duoc sap xep:\n");
    for (int i = 0; i < 5; i++) {
        printf("%s\n", chuoi[i]);
    }
}
int main() {
    sapXepChuoi();
    return 0;
}