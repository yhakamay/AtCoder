#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    long long   r1, r2, c1, c2;
    size_t      count, moveMax = llabs(r1 - r2) + llabs(c1 - c2);

    scanf("%lld %lld\n%lld %lld", &r1, &c1, &r2, &c2);
    for (count = 0; count <= moveMax; count++) {
        if ((r1 == r2 && llabs(c1 - c2) <= 3) || (llabs(r1 - r2) <= 2 && llabs(c1 - c2) <= 2) || (r1 - c1 == r2 - c2)) {
            printf("%lu", count + 1);
            return 0;
        }
        else {
            if (r1 == r2) {
                r1 += (c1 < c2) ? 3 : -3;
                continue ;
            }
            if (c1 == c2) {
                c1 += (r1 < r2) ? 3 : -3;
                continue ;
            }
            if (llabs(r1 - r2) <= 2) {
                c1 = c2;
                continue ;
            }
            if (llabs(c1 - c2) <= 2) {
                r1 = r2;
                continue ;
            }
            r1 += (r1 < r2) ? 2 : -2;
            c1 += (c1 < c2) ? 2 : -2;
            count++;
        }
    }
}