/******************************************************************************
 * Họ và tên: [Trương Minh Việt]
 * MSSV:      [PS48885]
 * Lớp:       [COM108]
 *****************************************************************************/

//  BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH ĐẾM NGUYÊN ÂM VÀ PHỤ ÂM CỦA 1 CHUỖI 
//  Input: nhập vào 1 chuỗi 
//  Output: Số lượng nguyên âm và phụ âm trong chuỗi 
//  Biết rằng: Nguyên âm gồm: a,e,i,o,y,u


// VIẾT CODE Ở ĐÂY
#include <stdio.h>
#include <string.h>
void kiemTraNguyenAmPhuAm() {
    char tiepTuc;
    do {
        char chuoi[100];
        int phuAm = 0, nguyenAm = 0;
        printf("Ban hay nhap vao ten Truong Minh Viet (hoac chuoi ky tu can kiem tra): \n");
        fgets(chuoi, sizeof(chuoi), stdin);
        for(int i = 0; i < strlen(chuoi); i++) {
            if(chuoi[i] == 'a' || chuoi[i] == 'e' || chuoi[i] == 'u' || chuoi[i] == 'i' || chuoi[i] == 'o' || chuoi[i] == 'y' ||
               chuoi[i] == 'A' || chuoi[i] == 'E' || chuoi[i] == 'U' || chuoi[i] == 'I' || chuoi[i] == 'O' || chuoi[i] == 'Y') {
                nguyenAm = nguyenAm + 1;
            }
            else if (chuoi[i] == ' ' || chuoi[i] == '\n') {
                continue;
            }
            else {
                phuAm = phuAm + 1;
            }
        }
        printf("Chuoi ban vua nhap co %d ky tu nguyen am\n", nguyenAm);
        printf("Chuoi ban vua nhap co %d ky tu phu am\n", phuAm);
        printf("Ban co muon tiep tuc khong? (y/n): ");
        scanf("%c", &tiepTuc);
        getchar();
    } while (tiepTuc == 'y' || tiepTuc == 'Y');
}
int main() {
    kiemTraNguyenAmPhuAm();
    return 0;
}
