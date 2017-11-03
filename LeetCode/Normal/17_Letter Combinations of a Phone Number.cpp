void createstr(vector<char>& temp,vector<string>& out, string& digits,int p,string *c)
{
	string outstr="";
	if (p == digits.size() - 1)
	{
		for (int j = 0;j <p;j++)
			outstr += temp[j];
	}
	int num = digits[p]-'0';
	for (int i = 0;i < c[num].length();i++)
	{
		
		if (p == digits.size() - 1)
		{
			out.push_back(outstr + c[num][i]);
		}
		else
		{
			temp[p]=c[num][i];
			createstr(temp, out, digits, p+1, c);
		}
	}
}
vector<string> letterCombinations(string digits) {
	string c[10] = { " ","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz" };
	vector<string> outval;
	if (digits.length() == 0) return outval;
	vector<char> temp(digits.length());
	createstr(temp, outval, digits, 0, c);
	return outval;

}