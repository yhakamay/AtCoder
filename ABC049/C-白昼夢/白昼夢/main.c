#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

typedef char String[100000];

void main() {
    String words[] = {"dream", "dreamer", "erase", "eraser"};
    String t = {};
    String s;
    
    scanf("%s", s);
    
    for (int i = 0; i < 100000; i++) {
        for (int j = 0; j < i; j++) {
            for (int k = 0; k < 3; k++) {
                strcat(t, words[k]);
            }
        }
    }
}
