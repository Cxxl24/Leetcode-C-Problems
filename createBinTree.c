#include <stdio.h>

struct TreeNode* sortedArrayHelper(int *nums, int start, int end) {
	if (start >end ) {
		return NULL;
	}

	int mid = start + (end - start) / 2;

	struct TreeNode* root = malloc(sizeof(struct TreeNode));
	root->val = nums[mid];
	root->left = sortedArrayHelper(nums, start, mid - 1);
	root->right = sortedArrayHelper(nums, mid+1, end);
	return root;
}
struct TreeNode* sortedArrayToBST(int *nums, int numsSize) {
	return sortedArrayHelper(nums, 0, numsSize - 1);
}
