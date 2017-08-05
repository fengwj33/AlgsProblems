int divide(int dividend, int divisor) {
	if (divisor == 0) return INT_MAX;
	int sym = 1;
	if ((dividend < 0 && divisor>0)||(dividend >= 0 && divisor < 0))
		sym = -1;
	long long d = abs((long long)dividend);
	long long out = 0;
	long long temp= abs((long long)divisor),t2;
	t2 = temp;
	int i;
	while (temp * 10 <= d)
		temp *= 10;
	do
	{
		i = 0;
		while (d >= temp)
		{
			i++;
			d -= temp;
		}
		out = out * 10 + i;
		if (sym*out > INT_MAX || sym*out<INT_MIN) return INT_MAX;
		if (temp == t2) return sym*out;
		temp /= 10;
	} while (true);
	return sym*out;
}