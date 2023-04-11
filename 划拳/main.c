#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int N;
	int A1, A2, B1, B2;
	int num1 = 0, num2 = 0;
	scanf("%d", &N);
	if (N > 100) return 0;
	for (int i = 0; i < N; i++) {
		scanf("%d %d %d %d", &A1, &A2, &B1, &B2);
		if (A1 + B1 == A2 && A1 + B1 != B2)
			num2++;
		else if (A1 + B1 == B2 && A1 + B1 != A2)
			num1++;
	}
	printf("%d %d", num1, num2);
	return 0;
}