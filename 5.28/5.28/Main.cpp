#include <stdio.h>
#include <stdlib.h>

char a;

int main() {
	printf("�п�J�@�ӭ^��r���H�ഫ�j�p�g�G");
	scanf_s("%c", &a);
	if (a > 0x40 && a < 0x5B) {
		printf("��J�r���j�g%c\n�p�g��%c\n", a, a + 0x20);
	}
	else if(a < 0x7B && a > 0x60){
		printf("��J�r���p�g%c\n�j�g��%c\n", a, a - 0x20);
	}
	else{
		printf("��J���~\n");
	}
	system("pause");
	return 0;
}