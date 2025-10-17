#include <stdlib.h>

int* plusOne(int* digits, int digitsSize, int* returnSize) {
	int i;
	for (i = digitsSize - 1; i >= 0; i--) {
		if (digits[i] < 9) {
			digits[i]++;
			*returnSize = digitsSize;
			return digits;
		}
		digits[i] = 0;
	}

	int *result = malloc((digitsSize + 1) * sizeof(int));
	result[0] = 1;
	for (i = 1; i <= digitsSize; i++) {
		result[i] = 0;
	}
	*returnSize = digitsSize + 1;
	return result;
}
