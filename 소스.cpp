#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()		//OX퀴즈. O와 X의 개수에 따라 점수를 계산한다.
{
	int num, count, sum, j;
	char c[100];
	scanf("%d ", &num);
	for (int i = 0; i < num; i++) {		//케이스의 개수만큼 반복
		scanf("%s", &c);
		count = 0;
		sum = 0;
		j = 0;
		while (c[j] != '\0') {	//문자열의 길이만큼 반복
			if (c[j] == 'O') {	//O라면 count를 1 증가시키며 합한다.
				count++;
				sum = sum + count;
			}
			else if (c[j] == 'X')	//X라면 count를 0으로 초기화한다.
				count = 0;
			j++;
		}
		printf("%d\n", sum);
	}
	return 0;
}