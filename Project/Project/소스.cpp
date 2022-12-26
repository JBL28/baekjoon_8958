#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num, count, sum, j;
	char c[100];
	scanf("%d ", &num);
	for (int i = 0; i <= num; i++) {
		scanf("%s", &c);
		count = 0;
		sum = 0;
		j = 0;
		while (c[j] != '\0') {
			if (c[j] == 'O') {
				count++;
				sum = sum + count;
			}
			else if (c[j] == 'X')
				count = 0;
			j++;
		}
		printf("%d\n", sum);
	}
	return 0;
}