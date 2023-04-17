//自己写的全错 如果要一个个找下去，如果不是所有元素都是一个环的话，那根本无法通过一次遍历完成，没办法，看答案，这份代码仅以记录。
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

char change(char a) {
	if (a >= 1 && a <= 13) return 'S';
	else if (a > 13 && a <= 26)return 'H';
	else if (a > 26 && a <= 39)return 'C';
	else if (a > 39 && a <= 52)return 'D';
	else return 'J';
}

int main() {
	int K;
	char card[5] = { 'S','H','C','D','J' };
	int O[54];
	int O_temp[54];
	int temp = 0, count = 0;
	scanf("%d", &K);
	if (K > 20) return 0;
	for (int i = 0; i < 5; i++) {
		scanf("%d", &O[i]);
	}
	while (K > 1) {
		O_temp[0] = O[0];
		temp = 0;
		while (count < 5) {// 2 5 4 3 1
			O_temp[O_temp[temp]-1] = O[O_temp[temp]-1];
			O[O_temp[temp]-1] = O_temp[temp];
			temp = O_temp[temp]-1;
			count++;
		}
		K--;
	}
	for (int i = 0; i < 5; i++) {
		printf("%c%d", change(O[i]), O[i]%13+1);
		if (i < 53) printf(" ");
	}
	
	return 0;
}