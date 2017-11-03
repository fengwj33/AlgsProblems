int myAtoi(string str) {
	long long c = 0;
	int sym=1;
	bool flag=false;
	for (int i = 0;i < str.size();i++)
	{
		if (sym*c > INT_MAX)
			return INT_MAX;
		if (sym*c < INT_MIN)
			return INT_MIN;
		if (!flag)
		{
			if (str[i] == ' ')
				continue;
			else if (str[i] == '-')
			{
				sym = -1;
				flag = true;
				continue;
			}
			else if (str[i] == '+')
			{
				sym = 1;
				flag = true;
				continue;
			}
			else if (str[i] >= '0'&& str[i] <= '9')
			{
				flag = true;
			}
			else
				return 0;	 
		}
		if (str[i] >= '0'&& str[i] <= '9')
			c = c * 10 + str[i] - '0';
		else
			break;
	}
	if (sym*c > INT_MAX)
		return INT_MAX;
	if (sym*c < INT_MIN)
		return INT_MIN;
	return sym*c;
}