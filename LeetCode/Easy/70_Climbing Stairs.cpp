int ds(int n, int at, vector<int>& vec)
{
	if (at > n)
		return 0;
	else if (at == n)
		return 1;
	if (vec[at] != -1)
		return vec[at];
	int t = ds(n, at + 1, vec) + ds(n, at + 2, vec);
	vec[at] = t;
	return t;
}
int climbStairs(int n) {
	vector<int> vec(n + 1,-1);
	return ds(n, 0, vec);
}