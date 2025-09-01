#include <stdlib.h>
#include <string.h>

char* addBinary(const char* a, const char* b) {
	int lenA = strlen(a);
	int lenB = strlen(b);
	int maxLen = (lenA > lenB) ? lenA : lenB;

	char* result = malloc(maxLen + 2);
	if (!result) return NULL;
	result[maxLen + 1] = '\0';

	int carry = 0;
	for (int i = 0; i < maxLen; i++) {
		int bitA = (i < lenA) ? a[lenA - 1 - i] - '0' : 0;
		int bitB = (i < lenB) ? b[lenB - 1 - i] - '0' : 0;

		int sum = bitA + bitB + carry;
		result[maxLen - i] = (sum % 2) + '0';
		carry = sum / 2;
	}

	if (carry) {
		result[0] = '1';
		return result;
	} else {
		char* shifted = malloc(maxLen + 1);
		if (!shifted) {
			free(result);
			return NULL;
		}
		strcpy(shifted, result + 1);
		free(result);
		return shifted;
	}
}
