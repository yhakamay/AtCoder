#include <stdio.h>

int main(void) {
    int x;      //  x段重ね
    int n;      //  持っている餅の枚数（1以上100以下）
    int i, j, k;    //  カウンタ
    int tmp;    //  並び替えで待避用に用いる変数
    
    scanf("%d", &n);    //  餅の枚数が確定する
    int d[n];   //  餅の直径（1以上100以下）
    for (i = 0; i < n; i++) {
        scanf("%d", &d[i]); //  餅の直径が確定する
    }
    
//    餅を大きい順に並び替える
    for (j = 0; j < n; j++) {
        for (k = j + 1; k < n; k++) {
            if (d[k] > d[j]) {
                tmp = d[k];
                d[k] = d[j];
                d[j] = tmp;
            }
        }
    }
    
    x = 0;  //  カウントを初期化する
    for (i = 0; i < n; i++) {
        if (d[i + 1] != d[i]) { //  並んでいる餅の大きさが同じじゃなかったら…
            x++;                //  1回カウントする
        }
    }
    
    printf("%d\n", x);
    return 0;
}
