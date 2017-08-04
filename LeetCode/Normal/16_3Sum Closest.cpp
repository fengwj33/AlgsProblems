int threeSumClosest(vector<int>& nums, int target) {
	int min;
	if (nums.size() <3) return 0;
	sort(nums.begin(), nums.end());
	bool flag=false;
	int fnum,s,e,sum,ts,te;
	for (int i = 0;i < nums.size() - 2;)
	{
		fnum = nums[i];
		s = i + 1;
		e = nums.size()-1;
		while (s < e)
		{
			ts = nums[s];te = nums[e];
			sum = ts + te+fnum;
			if (!flag)
			{
				flag = true;
				min = sum;
			}
			else
			{
				if (abs(sum - target) < abs(min - target))
					min = sum;
			}
			if (sum > target)
				while (nums[e] == te&&s < e)e--;
			else
				while (nums[s] == ts&&s < e)s++;
		}
		while (nums[i] == fnum&&i < nums.size() - 2) i++;
	}
	return min;
}