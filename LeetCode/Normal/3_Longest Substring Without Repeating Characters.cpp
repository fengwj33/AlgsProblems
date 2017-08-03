bool _CRange(int start, int end, int rstart, int rend)
{
	if (rstart == rend) return false;
	return start <= rstart&&end >= rend;
}
bool NCRanges(int start, int end, map<char, vector<int> >& rs,char c)
{
	for (map<char, vector<int> >::iterator it = rs.begin();it != rs.end();it++)
	{
		if (c == it->first) continue;
		for(int i = 0;i < it->second.size() - 1;i++)
		{
			if (it->second[i] >= end)break;
			if (_CRange(start, end, it->second[i], it->second[i + 1]))
				return false;
		}
	}
	return true;
}
int lengthOfLongestSubstring(string s) {
	if (s.length() == 0) return 0;
	map<char, vector<int> > posi;
	bool flag = false;
	int pstart = 0;
	for (int i = 0;i < s.length();i++)
	{
		if(flag)
			posi[s[i]].push_back(i);
		else
		{
			if (s[i] != s[i + 1])
			{
				flag = true;
				posi[s[i]].push_back(i);
				pstart = i;
			}
		}
	}
		
	int start, end, max = 1;
	for (map<char, vector<int> >::iterator it = posi.begin();it != posi.end();it++)
	{
		for (int i = 0;i < it->second.size();i++)
		{
			end = it->second[i];
			if (i == 0)
				start = pstart;
			else
				start = it->second[i - 1] + 1;
			if (end - start + 1 <= max)
				continue;
			while (end - start + 1 > max)
			{
				if (NCRanges(start, end, posi, it->first))
				{
					max = end - start + 1;
					break;
				}	
				else
					start++;
			}
		}
	}
	return max;
}



//#2
int lengthOfLongestSubstring(string s) {
    set<int> k;
    int start = 0, end = 0, ml = 0;
    while (start < s.length() && end < s.length())
    {
        if (k.find(s[end]) == k.end())
        {
            k.insert(s[end]);
            ml = max(end-start + 1, ml);
            end++;
        }
        else
        {
            k.erase(s[start]);
            start++;
        }
    }
    return ml;
}