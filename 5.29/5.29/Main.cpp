#include <stdio.h>
#include <stdlib.h>

int a, b, temp, a_temp, b_temp;

int main() {
	printf("�п�J��Ӿ�ƥH�p��̤p������(�H�Ů�j�})�G");
	scanf_s("%d %d", &a, &b);
	a_temp = a;
	b_temp = b;
	temp = a % b;
	while (temp != 0) {
		a = b;
		b = temp;
		temp = a % b;
	}
	printf("%d ,%d���̤p�����Ƭ�%d\n", a_temp, b_temp, a_temp * b_temp / b);
	system("pause");
	return 0;
}