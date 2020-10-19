#include <stdio.h>

int main(void) {
    char s[3];
    int sum = 0;
    int i;
        
    for (i = 0; i < 3; i++) {
        scanf("%s", &s[i]);
        if (s[i] == '1') {
            sum++;
        }
    }
    
    printf("%d", sum);
    return 0;
}
