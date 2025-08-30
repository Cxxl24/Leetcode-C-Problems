#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
	int *values = (int *)malloc(numsSize*sizeof(int));
	int i, j;
	if (values == NULL) {
		return NULL;
	}
    for (i = 0; i < numsSize; i++) {
        for (j = i+1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
				values[0] = i;
				values[1] = j;
				*returnSize = 2;
				return values;
			}
		}
    }
	free(values);
	*returnSize = 0;
	return NULL;
}
