int removeDuplicates(vector<int>& nums) {
	map<int, bool> exi;
	vector<int> temp;
	for (int i = 0;i < nums.size();i++)
	{
		if (exi.find(nums[i]) == exi.end())
		{
			temp.push_back(nums[i]);
			exi[nums[i]] = true;
		}
	}
	nums.clear();
	for (int i = 0;i < temp.size();i++)
		nums.push_back(temp[i]);
	return nums.size();
}