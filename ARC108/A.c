#include <stdio.h>
#include <stdlib.h>

int main(void) {
    long    s, p;

    scanf("%ld %ld", &s, &p);
    if (s != 1 && p == 1) {
        puts("No");
        return 0;
    }
    for (int n = 1; n < s; n++) {
        for (int m = 1; m < p; m++) {
            if (n + m > s || n * m > p)
                break ;
            else if (n + m == s)
                if (n * m == p) {
                    puts("Yes");
                    return 0;
                }
        }
    }
    puts("No");
    return 0;
}