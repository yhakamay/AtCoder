#include <stdio.h>
#include <stdlib.h>

int main(void) {
    long long   n, x;
    char*       s;

    scanf("%lld %lld", &n, &x);
    s = (char *)malloc((n + 1) * sizeof(char));
    scanf("%s", s);
    for (int i = 0; i < n; i++) {
        if (s[i] == 'x' && x != 0) {
            x--;
            continue ;
        }
        else if (s[i] == 'o')
            x++;
    }
    printf("%lld", x);
    return 0;
}