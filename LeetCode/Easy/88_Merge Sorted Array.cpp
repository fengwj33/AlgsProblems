void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
	for (int i = nums1.size() - 1;i >= m;i--)
		nums1.erase(nums1.begin() + i);
	for (int i = nums2.size() - 1;i >= n;i--)
		nums2.erase(nums2.begin() + i);
	int p = 0, p2 = 0;
	while (true)
	{
		if (p2 >= nums2.size())
			return;
		if (p >= nums1.size())
			break;
		if ( nums1[p]<nums2[p2])
			p++;
		else
		{
			nums1.insert(nums1.begin() + p, nums2[p2++]);
		}
	}
	for (int i = p2;i < n;i++)
		nums1.push_back(nums2[i]);
}