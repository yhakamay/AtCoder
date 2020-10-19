#include <stdio.h>

int main(void) {
    int x;
    int rate;

    do {
        scanf("%d", &x);
    } while(x < 400 || 2000 <= x);
    
    if (400 <= x && x < 600) {
        rate = 8;
    }
    else if (600 <= x && x < 800) {
        rate = 7;
    }
    else if (800 <= x && x < 1000) {
        rate = 6;
    }
    else if (1000 <= x && x < 1200) {
        rate = 5;
    }
    else if (1200 <= x && x < 1400) {
        rate = 4;
        
    }
    else if (1400 <= x && x < 1600) {
        rate = 3;
    }
    else if (1600 <= x && x < 1800) {
        rate = 2;
        
    }
    else {
        rate = 1;
    }
    
    printf("%d\n", rate);
    return 0;
}
