vector<int> plusOne(vector<int>& digits) {
	vector<int>temp(digits.size()+1);
	int c = 1,t;
	for (int i = digits.size() - 1;i >= 0;i--)
	{
		t = c + digits[i];
		if (t >= 10)
		{
			c = 1;
			t -= 10;
		}
		else
			c = 0;
		temp[i + 1] = t;
	}
	if (c == 0)
		temp.erase(temp.begin());
	else
		temp[0] = c;
	return temp;
}