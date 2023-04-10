#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define CLK_TCK 100

int main() {
	long long c1, c2, result;
	long long h, m, s;
	scanf("%lld%lld", &c1, &c2);
	result = c2 - c1;
	if (result % 100 >= 50)
		result = ((c2 - c1) / 100) + 1;
	else
		result = (c2 - c1) / 100;
	h = result / 3600;
	result = result - h * 3600;
	m = result / 60;
	s = result - m * 60;
	printf("%02lld:%02lld:%02lld", h, m, s);
	return 0;
}
