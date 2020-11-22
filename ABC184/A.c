#include <stdio.h>

int main(void) {
    int a, b, c, d;

    scanf("%d %d\n%d %d", &a, &b, &c, &d);
    printf("%d", a * d - b * c);
    return 0;
}