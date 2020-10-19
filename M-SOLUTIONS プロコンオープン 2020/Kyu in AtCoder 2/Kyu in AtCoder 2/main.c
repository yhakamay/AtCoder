#include <stdio.h>

int main(void) {
    int rate;
    
    scanf("%d", &rate);
    
    if (400 <= rate && rate < 600) {
        printf("8\n");
    }
    if (600 <= rate && rate < 800) {
        printf("7\n");
    }
    if (800 <= rate && rate < 1000) {
        printf("6\n");
    }
    if (1000 <= rate && rate < 1200) {
        printf("5\n");
    }
    if (1200 <= rate && rate < 1400) {
        printf("4\n");
    }
    if (1400 <= rate && rate < 1600) {
        printf("3\n");
    }
    if (1600 <= rate && rate < 1800) {
        printf("2\n");
    }
    if (1800 <= rate) {
        printf("1\n");
    }
    
    return 0;
}
