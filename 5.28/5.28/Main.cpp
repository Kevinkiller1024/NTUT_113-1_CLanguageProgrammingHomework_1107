#include <stdio.h>
#include <stdlib.h>

char a;
int change(int q);

int main() {
	printf("�п�J�@�ӭ^��r���H�ഫ�j�p�g�G");
	scanf_s("%c", &a);
	change(a);
	system("pause");
	return 0;
}

int change(int q) {
	if (q > 0x40 && q < 0x5B) {
		printf("��J�r���j�g%c\n�p�g��%c\n", q, q + 0x20);
	}
	else if (q < 0x7B && q > 0x60) {
		printf("��J�r���p�g%c\n�j�g��%c\n", q, q - 0x20);
	}
	else {
		printf("��J���~\n");
	}
	return 1;
}