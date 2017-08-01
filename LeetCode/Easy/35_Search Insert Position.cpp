int searchInsert(vector<int>& nums, int target) {
	int returnval = find(nums.begin(), nums.end(), target) - nums.begin();
	if (returnval != nums.end() - nums.begin())
		return returnval;
	if (target > nums[nums.size() - 1])
		return nums.size();
	for (int i = 0;i < nums.size();i++)
		if (nums[i] > target)
			return i;
	return 0;
}