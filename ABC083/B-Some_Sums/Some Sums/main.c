#include <stdio.h>

//  1 以上 N 以下の整数のうち、10 進法での各桁の和が A 以上 B 以下であるものの総和を求めてください。
//  1≤N≤10^4
//  1≤A≤B≤36
//  入力はすべて整数

int main(void) {
    int a, b, n;    //  A, B, N
    int i;
    int sum = 0;
    
    scanf("%d%d%d", &n, &a, &b);
    
    for (i = 1; i <= n; i++) {
        int tmpSum = 0;
        int tmp = i;
        for (int j = 0; j < 5; j++) {
            tmpSum += tmp % 10;
            tmp /= 10;
        }
        if (a <= tmpSum && tmpSum <= b) {
            sum += i;
        }
    }
    
    printf("%d\n", sum);
    return 0;
}
