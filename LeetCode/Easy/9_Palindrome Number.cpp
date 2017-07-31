int reverse(int x) {
	int sym = (x >= 0 ? 1 : -1);
	x *= x >= 0 ? 1 : -1;
	long long int c = 0;
	for (;x != 0;x /= 10)
		c = c * 10 + (x % 10);
	return ((c*sym) > INT_LEAST32_MAX || (c*sym) <INT_LEAST32_MIN)?0: c*sym;
}
bool isPalindrome(int x) {
	return x == reverse(x) && x>=0;
}