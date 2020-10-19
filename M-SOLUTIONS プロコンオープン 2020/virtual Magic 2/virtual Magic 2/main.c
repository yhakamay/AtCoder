#include <stdio.h>

int main (void){
    int a, b, c;    //  A, B, Cの初期値
    int k;          //  操作可能な回数
    
    scanf("%d%d%d", &a, &b, &c);
    scanf("%d", &k);
    
    for (int i = 0; i < k; i++) {
        if (a < b && b < c) {
            continue;
        }
//        aを2倍することはありえない；問題は「bとcのどちらを2倍するか？」に尽きる
        else if (c <= b) {
            c *= 2;
        }
        else if (b <= a && b <= c) {
            b *= 2;
        }
    }

//    ループの結果、期待通りに並んで場合は「Yes」、それ以外は「No」を表示する
    if (a < b && b < c) {
        printf("Yes\n");
    }
    else {
        printf("No\n");
    }
    
    return 0;
}
