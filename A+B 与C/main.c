#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int n, i;
	scanf("%d", &n);
	long long* a = (int*)malloc(sizeof(long long) * n);
	long long* b = (int*)malloc(sizeof(long long) * n);
	long long* c = (int*)malloc(sizeof(long long) * n);
	for (i = 0; i < n; i++) {
		scanf("%lld%lld%lld", &a[i], &b[i], &c[i]);
	}
	for (i = 0; i < n; i++) {
		if (a[i] + b[i] > c[i]) {
			printf("Case #%d: true\n", i + 1);
		}
		else
			printf("Case #%d: false\n", i + 1);
	}
	return 0;
}