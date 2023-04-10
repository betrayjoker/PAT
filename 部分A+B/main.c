#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int Find(long long num, long long D) {//12124
	int count = 0;
	while (num!=0) {
		if ((num % 10) == D)
			count++;
		num = num / 10;
	}
	return count;
}
long long Combination(long long D, int count) {
	long long sum = 0;
	for (int i = 0; i < count; i++) {
		sum = sum * 10 + D;
	}
	return sum;
}

int main() {
	long long A, B, DA, DB;
	scanf("%lld%lld%lld%lld", &A, &DA, &B, &DB);
	printf("%lld", Combination(DA, Find(A, DA)) + Combination(DB, Find(B, DB)));
	return 0;
}