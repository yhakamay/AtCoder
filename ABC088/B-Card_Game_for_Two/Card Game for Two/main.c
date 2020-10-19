#include <stdio.h>

//  N枚のカード
//  1 <= ai <= 100
//  交互にカードを取り、Aliceが先
//  とったカードに書かれた数の合計の差を求める

int main(void) {
    int aNum, bNum;     //  AliceとBobがとった数の合計
    int n;              //  カードの合計枚数
    int i, j, k, l, m;
    int tmp;
    
    scanf("%d", &n);    //  カードの枚数が決定
    int a[n];           //  カードに書かれた数字（枚数はscanf）

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]); //  カードの枚数分だけ値を決定
    }
    
    for (j = 0; j < n; j++) {
        for (k = j + 1; k < n; k++) {
            if (a[j] < a[k]) {
                tmp = a[j];
                a[j] = a[k];
                a[k] = tmp;
            }
        }
    }
    
//    for (l = 0; l < n; l++) {     //  ちゃんと大きい順に並んでるか確かめる
//        printf("%d ", a[l]);
//    }
//    printf("\n");

    aNum = 0;
    bNum = 0;
    for (l = 0; l < n; l += 2) {
        aNum += a[l];
    }
    
    for (m = 1; m < n; m += 2) {
        bNum += a[m];
    }
    
    
    printf("%d\n", aNum - bNum);
    return 0;
}
