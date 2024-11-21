#include <stdio.h>

int main() {
    int so;

    printf("Nhap mot so nguyen co 4 chu so: ");
    scanf("%d", &so);

    printf("So nghich dao ca so da nhap la: %d\n", (so % 10) * 1000 + ((so / 10) % 10) * 100 + ((so / 100) % 10) * 10 + (so / 1000));

    return 0;
}

