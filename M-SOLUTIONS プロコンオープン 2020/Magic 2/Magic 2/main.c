#include <stdio.h>

int main(void) {
    int a;  //  赤のカードに書かれた整数（1以上7以下）
    int b;  //  緑のカードに書かれた整数（1以上7以下）
    int c;  //  青のカードに書かれた整数（1以上7以下）
    int k;  //  操作可能な回数（1以上7以下）
    
    //  3枚のうちいずれか1枚のカードを選び、書かれた整数を2倍する
    //  赤＜緑＜青になれば成功
    scanf("%d%d%d", &a, &b, &c);
    scanf("%d", &k);
    
    for (int i = 0; i < k; i++) {
        if (c > b && b > a) {
            continue;
        } else if (c <= b) {
            c *= 2;
        } else if (c >= b && b <= a) {
            b *= 2;
        }
    }
    
    if (a < b && b < c) {
        printf("Yes\n");
    }
    else {
        printf("No\n");
    }
    return 0;
}
