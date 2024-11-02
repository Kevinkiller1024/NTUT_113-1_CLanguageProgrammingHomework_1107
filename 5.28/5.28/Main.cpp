#include <stdio.h>
#include <stdlib.h>

char a;

int main() {
	printf("請輸入一個英文字母以轉換大小寫：");
	scanf_s("%c", &a);
	if (a > 0x40 && a < 0x5B) {
		printf("輸入字為大寫%c\n小寫為%c\n", a, a + 0x20);
	}
	else if(a < 0x7B && a > 0x60){
		printf("輸入字為小寫%c\n大寫為%c\n", a, a - 0x20);
	}
	else{
		printf("輸入錯誤\n");
	}
	system("pause");
	return 0;
}