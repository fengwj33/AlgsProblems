int maxSubArray(vector<int>& nums) {
	int tmin = 0,s= 0,max= nums[0];
	for (int i = 0;i < nums.size();i++)
	{
		s += nums[i];
		max = (s - tmin) > max ? (s - tmin) : max;
		tmin = s < tmin ? s : tmin;
	}
	return max;
}