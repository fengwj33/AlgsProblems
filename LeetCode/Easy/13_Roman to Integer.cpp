int romanToInt(string s) {
	map<char, int> m;
	m['I'] = 1;m['X'] = 10;m['C'] = 100;m['M'] = 1000;m['V'] = 5;m['L'] = 50;m['D'] = 500;
	int t = 0,c=0;
	for (int i = 0;i < s.length();i++) {
		if ((s[i] == 'I' || s[i] == 'C' || s[i] == 'X') && i != s.length() - 1 && m[s[i + 1]] > m[s[i]])
		{
			c += m[s[i + 1]] - m[s[i]];
			i++;
		}
		else
		c =c + m[s[i]];
	}
	return c;
}