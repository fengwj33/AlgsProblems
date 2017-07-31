string longestCommonPrefix(vector<string>& strs) {
	if (strs.size() == 0)return "";
	string returnval="";
	for (int i = 0;i < strs[0].length();i++)
	{
		for (int j = 1;j < strs.size();j++)
			if (i >= strs[j].length() || strs[j][i] != strs[0][i])
				return returnval;
		returnval += strs[0][i];
	}
	return returnval;
}