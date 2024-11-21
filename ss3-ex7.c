#include <stdio.h>

int main() {
    int so;

    printf("Nhap mot so nguyen co 4 chu so: ");
    scanf("%d", &so);

    printf("Tong cac chu so cua so da nhap la: %d\n", (so / 1000) + ((so / 100) % 10) + ((so / 10) % 10) + (so % 10));

    return 0;
}

