#include <stdio.h>
#include <stdlib.h>

unsigned int n;
unsigned long long int fibonacci(int k);

int main() {
    printf("請輸入要到第幾項費氏數：");
    scanf_s("%d", &n);
    if (n <= 0) {
        printf("請輸入大於0的正整數\n");
    }
    else {
        fibonacci(n);
    }
    system("pause");
    return 0;
}

unsigned long long int fibonacci(int k) {
    int a = 0, b = 1, ans;
    printf("到第%d項費氏數為：",k);
    for (int i = 1; i <= k; i++) {
        printf("%d ", a);
        ans = a + b;
        a = b;
        b = ans;
    }
    printf("\n");
    return 1;
}