bool isValid(string s) {
	stack<char> temp;
	char t;
	for (int i = 0;i < s.length();i++)
	{
		if (s[i] == '(' || s[i] == '[' || s[i] == '{')
			temp.push(s[i]);
		else if (s[i] == ')')
		{
			if (temp.size() == 0) return false;
			t = temp.top();
			temp.pop();
			if (t != '(') return false;
		}
		else if (s[i] == ']')
		{
			if (temp.size() == 0) return false;
			t = temp.top();
			temp.pop();
			if (t != '[') return false;
		}
		else if (s[i] == '}')
		{
			if (temp.size() == 0) return false;
			t = temp.top();
			temp.pop();
			if (t != '{') return false;
		}
	}
	return temp.size() == 0;
}