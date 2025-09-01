#include <stdbool.h>

bool isPalindrome(int x) {
	int digit, i,j;
	int digits[20];
	int counter = 0;
	int temp = x;

	if (x < 0) {
		return false;
	}

	while (temp > 0) {
		digit = temp % 10;
		digits[counter++] = digit;
		temp /= 10;
	}
	for (i = 0, j = counter - 1; i < j; i++, j--) {
		if (digits[i] != digits[j]) {
			return false;
		}
	}
	return true;
}
