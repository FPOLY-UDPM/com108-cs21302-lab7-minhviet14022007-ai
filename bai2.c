/******************************************************************************
 * Họ và tên: [Trương Minh Việt]
 * MSSV:      [PS48885]
 * Lớp:       [COM108]
 *****************************************************************************/

//  BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH ĐĂNG NHẬP BẰNG USERNAME VÀ PASSWORD 
//  Input: Nhập vào username và password 
//  Output: Đăng nhập thành công hay không thành công

// VIẾT CODE Ở ĐÂY
#include <stdio.h>
#include <string.h>
void dangNhap() {
    char tiepTuc;
    do {
        char username[100], password[100];    
        printf("Ban hay nhap vao username: \n");
        scanf("%s", username);       
        printf("Ban hay nhap vao password: \n");
        scanf("%s", password);      
        if (strcmp(username, "vietisme1402") == 0 && strcmp(password, "014022007Viet@") == 0) {
            printf("Dang nhap thanh cong!\n");
        }
        else {
            printf("Dang nhap khong thanh cong!\n");
        }   
        printf("Ban co muon tiep tuc khong? (y/n): ");
        scanf(" %c", &tiepTuc);        
    } while (tiepTuc == 'y' || tiepTuc == 'Y');
}
int main() {
    dangNhap();
    return 0;
}