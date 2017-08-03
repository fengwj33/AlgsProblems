string convert(string s, int numRows) {
	if (numRows == 1) return s;
	vector<string> olist(numRows, "");
	int c=0,it=1;
	for (int i = 0;i < s.length();i++)
	{
		olist[c] += s[i];
		if (c + it >= numRows || c + it < 0)
			it *= -1;
		c += it;
	}
	string out="";
	for (int i = 0;i < olist.size();i++)
		out += olist[i];
	return out;
}