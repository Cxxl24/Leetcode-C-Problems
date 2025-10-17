#include <string.h>

int romanToInt(char *s) {
	int value = 0;
	int length = strlen(s);
	int i, j;

	for (i = 0; i < length; i++) {
		j = i + 1;
		if (s[i] == 'I' && s[j] == 'V') {
			value += 4;
			i++;
		} else if (s[i] == 'I'  && s[j] == 'X') {
			value += 9;
			i++;
		} else if (s[i] == 'X' && s[j] == 'L') {
			value += 40;
			i++;
		} else if (s[i] == 'X' && s[j] == 'C') {
			value += 90;
			i++;
		} else if (s[i] == 'C' && s[j] == 'D') {
			value += 400;
			i++;
		} else if (s[i] == 'C' && s[j] == 'M') {
			value += 900;
			i++;
		} else {
			switch (s[i]) {
				case 'I':
				  value++;
				  break;
				case 'V':
				  value += 5;
				  break;
				case 'X':
				  value += 10;
				  break;
				case 'L':
				  value += 50;
				  break;
				case 'C':
				 value += 100;
				 break;
				case 'D':
				  value += 500;
				  break;
				case 'M':
				  value += 1000;
				  break;
			}
		}
	}
	return value;
}
