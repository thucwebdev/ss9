#include <stdio.h>

int main() {
    int n;
    long long tong = 0;
    
    // Nhập số n từ người dùng
    printf("Nhap so nguyen n: ");
    scanf("%d", &n);
    
    // Kiểm tra n có hợp lệ không
    if (n < 1) {
        printf("So n phai lon hon hoac bang 1!\n");
        return 1;
    }
    
    // Tính tổng các số từ 1 đến n
    for (int i = 1; i <= n; i++) {
        tong += i;
    }
    
    // Hoặc có thể dùng công thức: tong = n * (n + 1) / 2
    
    // In kết quả
    printf("Tong cac so nguyen tu 1 den %d la: %lld\n", n, tong);
    
    return 0;
}

