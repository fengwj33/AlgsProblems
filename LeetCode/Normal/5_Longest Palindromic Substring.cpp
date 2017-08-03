int palLength(string s, int center1, int center2)//__AC
{
	int c=0;
	for (int i = center1, j = center2;i >= 0 && j < s.length();j++, i--, c++)
		if (s[i] != s[j])
			break;
	return c;
}
string longestPalindrome(string s) {
	int max = 0,mstart,t,t2;

	for (int i = 0;i < s.length();i++)
	{
		t = palLength(s, i, i);
		t2 = t * 2 - 1;
		if (max < t2)
		{
			max = t2;
			mstart = i - t + 1;
		}
		if (i == s.length() - 1) break;
		t = palLength(s, i, i+1);
		t2 = t * 2 ;
		if (max < t2)
		{
			max = t2;
			mstart = i - t + 1;
		}

	}
	return s.substr(mstart, max);
}



//__________________TLE
struct Pcenter
{
	int center;
	int counter;
	int maxr;
	map<int, bool> rlist;
};
int findpc(vector<Pcenter>& vec, int center)
{
	for (int i = 0;i < vec.size();i++)
		if (vec[i].center == center)
			return i;
	return -1;
}
static bool cmp(const Pcenter&a, const Pcenter&b)
{
	if (a.maxr == b.maxr)
		return a.center < b.center;
	return a.maxr > b.maxr;
}

string longestPalindrome(string s) {
	if (s.length() == 0) return "";
	map<char, vector<int> > posi;
	vector<Pcenter> plist;
	for (int i = 0;i < s.length();i++)
		posi[s[i]].push_back(i);
	int start, end,p;
	
	for (map<char, vector<int>>::iterator it = posi.begin();it != posi.end();it++)
	{
		for (int i = 0;i < it->second.size() - 1;i++)
		{
			for (int j = i + 1;j < it->second.size();j++)
			{
				start = it->second[i];
				end = it->second[j];
				p = findpc(plist, start + end);
				if (p != -1)
				{
					plist[p].counter++;
					plist[p].rlist[end - start + 1] = true;
				}
				else
				{
					Pcenter temp;
					temp.center = start + end;
					temp.counter = 1;
					temp.rlist[end - start + 1] = true;
					plist.push_back(temp);
				}
			}
		}
	}
	for (int i = 0;i < plist.size();i++)
	{
		for (int j = (plist[i].center % 2 == 1) ? 2:3;;j += 2)
		{
			if (plist[i].rlist[j] == false)
			{
				plist[i].maxr = j - 2;
				break;
			}
		}
	}
	sort(plist.begin(), plist.end(), cmp);
	int pstart;
	for (int i = 0;i < plist.size();i++)
	{
		if (plist[i].center % 2 == 1)
		{
			if (plist[i].counter * 2 >= plist[i].maxr)
			{
				pstart = (int)(plist[i].center / 2) + 1 - plist[i].maxr / 2;
				return s.substr(pstart, plist[i].maxr);
			}	
		}
		else
		{
			if (plist[i].counter * 2 + 1 >= plist[i].maxr)
			{
				pstart = (plist[i].center - plist[i].maxr + 1) / 2;
				return s.substr(pstart,plist[i].maxr );
			}
		}
	}
	return s.substr(0,1);
}




