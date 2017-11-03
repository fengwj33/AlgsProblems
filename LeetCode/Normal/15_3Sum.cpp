vector<vector<int>> threeSum(vector<int>& nums) {
	vector<vector<int>> retval;
	if (nums.size() <3) return retval;
	sort(nums.begin(), nums.end());
	vector<int> temp;
	int target,s,e,sum,ts,te;
	for (int i = 0;i < nums.size() - 2;)
	{
		target = nums[i];
		s = i + 1;
		e = nums.size()-1;
		while (s < e)
		{
			ts = nums[s];te = nums[e];
			sum = ts + te;
			if (sum == -target)
			{
				temp = { ts,te ,target };
				retval.push_back(temp);
			}
			if (sum > -target)
				while (nums[e] == te&&s < e)e--;
			else
				while (nums[s] == ts&&s < e)s++;
		}
		while (nums[i] == target&&i < nums.size() - 2) i++;
	}
	return retval;
}


int hashV(int a, int b, int c)//TLE
{
	return  (a + 1)*(a + 1) + (b + 1)*(b + 1) + (c + 1)*(c + 1);
}
bool cmp(int a, int b, int c, vector<vector<int> > vec)
{
	for (int i = 0;i < vec.size();i++)
		if (max(a, max(b, c)) == max(vec[i][0], max(vec[i][1], vec[i][2])) && min(a, min(b, c)) == min(vec[i][0], min(vec[i][1], vec[i][2])))
			return true;
	return false;
}
vector<vector<int>> threeSum(vector<int>& nums) {
	map<int, int> ncount;
	map<int, vector<vector<int>>> hashm;
	vector<int>temp;
	vector<vector<int>> retval;
	int t,tc,hashval;
	for (int i = 0;i < nums.size();i++)
		ncount[nums[i]]++;
	for (int i = 0;i < nums.size();i++)
	{
		for (int j = i+1;j < nums.size();j++)
		{
			t = -(nums[i] + nums[j]);
			tc = ncount[t];
			if (t != nums[i] && t != nums[j])
			{
				if (tc <= 0)
					continue;
			}
			else if (t == nums[i] && t == nums[j])
			{
				if (tc <= 2)
					continue;
			}
			else
			{
				if (tc <= 1)
					continue;
			}
			hashval = hashV(nums[i], nums[j], t);
			if (hashm.find(hashval) != hashm.end())
			{
				if (cmp(nums[i], nums[j], t,hashm[hashval])) continue;
			}
			temp.clear();
			temp.push_back(nums[i]);
			temp.push_back(nums[j]);
			temp.push_back(t);
			hashm[hashval].push_back(temp);
			retval.push_back(temp);
		}
	}
	return retval;
}