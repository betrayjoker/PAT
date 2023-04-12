#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main() {
	int N,a,temp = 0;
	int A1 = 0, A2 = 0, A3 = 0, A5 = 0;
	int num1 = 0, num2 = 0, num3 = 0, num4 = 0, num5 = 0;
	float A4 = 0;
	scanf("%d", &N);
	if (N > 1000) return 0;
	for (int i = 0; i < N; i++) {
		scanf("%d", &a);
		if (a % 5 == 0 && a % 2 == 0) {
			A1 += a;
			num1++;
		}
		if (a % 5 == 1) {
			A2 = A2 + (int)pow(-1, temp) * a;
			temp++;
			num2++;
		}
		if (a % 5 == 2) {
			A3++;
			num3++;
		}
		if (a % 5 == 3) {
			A4 += a;
			num4++;
		}
		if (a % 5 == 4) {
			if (A5 < a) {
				A5 = a;
				num5++;
			}
		}
	}
	if (num1 != 0)printf("%d ", A1);
	else printf("N ");
	if (num2 != 0)printf("%d ", A2);
	else printf("N ");
	if (num3 != 0)printf("%d ", A3);
	else printf("N ");
	if (num4 != 0)printf("%.1f ", A4/num4);
	else printf("N ");
	if (num5 != 0)printf("%d", A5);
	else printf("N");

	return 0;
}

