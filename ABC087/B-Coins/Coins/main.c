#include <stdio.h>

int main(void) {
    int count = 0;    //  割り切れた組み合わせの数
    int a, b, c;        //  500円玉、100円玉、50円玉の枚数（全て1枚以上）
    int x;              //  合計金額（50の倍数）
    int i, j, k;        //  for文で使うカウンタ
    
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    do {
        scanf("%d", &x);    //  まず合計金額を入力させる
    } while (x % 50 != 0);  //  50で割り切れない値が入力されたら戻ってもう一度入力させる
    
    //  合計金額を決定する
    for (i = 0; i <= a; i++) {
        for (j = 0; j <= b; j++) {
            for (k = 0; k <= c; k++) {
                int y = 500*i + 100*j + 50*k;
                if (y == x) {
                    count++;
                }
            }
        }
    }
    
    printf("%d\n", count);
    return 0;
}

