#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int N, M;
	int count = 0;
	scanf("%d%d", &N, &M);
	//if (N < 1 || N>100 || M<0 || M>N) return 0;//不需要保证N>M,需要的是M%N，即保证右移的位数。
	if (N < 1 || N>100 || M<0) return 0;
	M = M % N;
	int* p = (int*)malloc(sizeof(int) * N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &p[i]);
	}
	for (int i = N-M; i < N; i++) {
		printf("%d", p[i]);
		count++;
		if (count < N) printf(" ");
	}
	for (int i = 0; i < N - M; i++) {
		printf("%d", p[i]);
		count++;
		if (count < N)printf(" ");
	}
	return 0;
}