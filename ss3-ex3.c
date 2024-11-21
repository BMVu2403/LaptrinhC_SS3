#include <stdio.h>

int main() {
    float r;

    printf("Nhap ban kinh hinh tron (r): ");
    scanf("%f", &r);

    printf("Chu vi: %.2f\n", 2 * 3.14 * r);
    printf("Dien tich: %.2f\n", 3.14 * r * r);

    return 0;
}

