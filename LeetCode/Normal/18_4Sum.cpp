vector<vector<int>> fourSum(vector<int>& nums, int target) {
	vector<vector<int>> retval;
	if (nums.size() <4) return retval;
	vector<int> temp;
	sort(nums.begin(), nums.end());
	bool flag = false;
	int fnum, s, e, sum, ts, te,os=0,oe=nums.size()-1,tos,toe;
	for (int i = 0;i < nums.size()-3;)
	{

		tos = nums[i];
		for (int j = i + 3;j < nums.size();)
		{
			toe = nums[j];
			while (j < nums.size()&&nums[j] == toe)j++;
			j--;
			fnum = nums[i] + nums[j];
			s = i + 1;
			e = j - 1;
			while (s < e)
			{
				ts = nums[s];te = nums[e];
				sum = ts + te + fnum;
				if (sum == target)
				{
					temp = { nums[i],nums[j],ts,te };
					retval.push_back(temp);
				}
				if (sum > target)
					while (nums[e] == te&&s < e)e--;
				else
					while (nums[s] == ts&&s < e)s++;
			}
			while (j < nums.size()&&nums[j] == toe)j++;
		}
		while (i < nums.size()&&nums[i] == tos)i++;
	}
	return retval;
}