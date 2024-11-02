#include <stdio.h>
#include <stdlib.h>

int a, b, temp, a_temp, b_temp;

int main() {
	printf("叫块ㄢ俱计璸衡程そ计(筳秨)");
	scanf_s("%d %d", &a, &b);
	a_temp = a;
	b_temp = b;
	temp = a % b;
	while (temp != 0) {
		a = b;
		b = temp;
		temp = a % b;
	}
	printf("%d ,%d程そ计%d\n", a_temp, b_temp, a_temp * b_temp / b);
	system("pause");
	return 0;
}