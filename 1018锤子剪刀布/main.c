#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int change(char c) {
	if (c == 'B') return 1;
	if (c == 'C') return 2;
	if (c == 'J') return 3;
}

int main() {
	char dirt[3] = { 'B','C','J' };
	char temp[2] = { 0 };
	int result_A[3] = { 0 }, result_B[3] = { 0 };
	int hands_A[3] = { 0 }, hands_B[3] = { 0 };
	long long N;
	int max1 = 0,max2 = 0;
	scanf("%lld", &N);
	if (N > 1e5) return 0;
	for (int i = 0; i < N; i++) {
		getchar();
		scanf("%c %c", &temp[0], &temp[1]);
		if (change(temp[0]) % 3 + 1== change(temp[1])) {
			result_A[0]++;
			result_B[2]++;
			hands_A[change(temp[0])-1]++;
		}
		else if (change(temp[0]) == change(temp[1])) {
			result_A[1]++;
			result_B[1]++;
		}
		else {
			result_A[2]++;
			result_B[0]++;
			hands_B[change(temp[1])-1]++;
		}
	}
		printf("%d %d %d\n", result_A[0], result_A[1], result_A[2]);
		printf("%d %d %d\n", result_B[0], result_B[1], result_B[2]);
		for (int j = 1; j < 3; j++) {
			if (hands_A[max1] < hands_A[j])
				max1 = j;
			if (hands_B[max2] < hands_B[j])
				max2 = j;
		}
		printf("%c %c", dirt[max1], dirt[max2]);
	return 0;
}
