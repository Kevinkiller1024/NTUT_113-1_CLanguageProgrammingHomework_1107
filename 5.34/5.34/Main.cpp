#include <stdio.h>
#include <stdlib.h>

int n, m, ans;
int power(int p,int q);

int main() {
	printf("�п�J��ơA�p��n��m����(�H�Źj����)�G");
	scanf_s("%d %d", &n, &m);
	printf("power(%d, %d) =", n, m);
	power(n, m);
	printf("\n");
	system("pause");
	return 0;
}

int power(int p, int q) {
	printf(" %d ", p);
	if (q > 1) {
		printf("*");
		return power(p, q - 1);
	}
	else{
		return 1;
	}
}