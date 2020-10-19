#include <stdio.h>

int main(void) {
    int n;      //  黒板に書かれる整数の数
    int i;      //  for文のカウンタ
    long val[1024];    //  書かれる整数の値
    int count = 0;  //  この関数が返す値
    int flag = 0;
    
    scanf("%d", &n);
    
//    先に宣言された個数だけ値を格納する
    for (i = 0; i < n; i++) {
        scanf("%ld", &val[i]);
    }
    
//    値をできるだけ2で除する
    for (count = 0; count < 200; count++) {
        for (i = 0; i < n; i++) {
            if (val[i] % 2 == 0) {
                val[i] = val[i] / 2;
            } else {
                flag++;
            }
        } if (flag != 0) {
            break;
        }
    }
    
    printf("%d", count);
    return 0;
}
