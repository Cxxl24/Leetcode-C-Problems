int mySqrt(int x) {
	int value;
	int i;
	if (x < 2) {
		return x;
	}

	int left = 1, right = x / 2, mid, sqrt;

	while (left <= right) {
		mid = left + (right - left) / 2;
		long long sq = (long long) mid * mid;
		if (sq == x) {
			return mid;
		} else if (sq < x) {
			left = mid + 1;
			sqrt = mid;
		} else {
			right = mid - 1;
		}
	}
	return sqrt;
}
