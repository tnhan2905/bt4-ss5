#include <stdio.h>

int main() {
    int n;

    printf("Nhap so nguyen duong tu 1 den 10: ");
    scanf("%d", &n);

    if (n < 1 || n > 10) {
        printf("So khong hop le!\n");
        return 1;
    }
    printf("Bang cuu chuong %d:\n", n);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
    return 0;
}
