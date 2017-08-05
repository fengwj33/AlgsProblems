void create(vector<string>&outval, int p, int l, int c,vector<char>& temp)
{
	if (l/2-c>l-p) return;
	if (c == l / 2)
	{
		string ot="(";
		stack<bool> isL;
		isL.push(true);
		bool flag = true;
		for (int i = 0;i <= l;i++)
		{
			if (i < p)
			{
				ot += temp[i];
				if (temp[i] == '(')
					isL.push(true);
				else
				{
					if (isL.empty())
						flag = false;
					else
						isL.pop();
				}
					
			}
			else
			{
				ot += ')';
				if (isL.empty())
					flag = false;
				else
					isL.pop();
			}
		}
		if(flag)
			outval.push_back(ot);
	}
	else
	{
		temp[p] = '(';
		create(outval, p + 1, l, c + 1, temp);
		temp[p] = ')';
		create(outval, p + 1, l, c , temp);
	}
}
vector<string> generateParenthesis(int n) {
	vector<string> retval;
	vector<char> temp(n*2-2);
	create(retval, 0, n*2 - 2, 0,temp);
	return retval;
}