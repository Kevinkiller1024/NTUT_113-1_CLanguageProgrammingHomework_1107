#include <stdio.h>
#include <stdlib.h>

char a;
int change(int q);

int main() {
	printf("請輸入一個英文字母以轉換大小寫：");
	scanf_s("%c", &a);
	change(a);
	system("pause");
	return 0;
}

int change(int q) {
	if (q > 0x40 && q < 0x5B) {
		printf("輸入字為大寫%c\n小寫為%c\n", q, q + 0x20);
	}
	else if (q < 0x7B && q > 0x60) {
		printf("輸入字為小寫%c\n大寫為%c\n", q, q - 0x20);
	}
	else {
		printf("輸入錯誤\n");
	}
	return 1;
}