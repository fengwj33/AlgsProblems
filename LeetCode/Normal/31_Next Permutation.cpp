void nextPermutation(vector<int>& nums) {
	int p=nums.size()-2;
	while (p >= 0 && nums[p] > nums[p + 1])p--;
	if (p == -1)
	{
		sort(nums.begin(), nums.end());
		return;
	}
	int min = nums[p+1],minid=p+1;
	for (int i = p + 1;i < nums.size();i++)
	{
		if (nums[i] >nums[p] && nums[i]<=min)
		{
			min = nums[i];
			minid = i;
		}
	}
	swap(nums[p], nums[minid]);
	sort(nums.begin()+p+1, nums.end());
}