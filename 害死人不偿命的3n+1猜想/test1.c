#include"test1.h"


int Guess(int n) {
	int count = 0;
	while (n != 1) {
		if (n % 2 == 0) {
			n = n / 2;
			count++;
		}
		else {
			n = (3 * n + 1) / 2;
			count++;
		}
	}
	return count;
}