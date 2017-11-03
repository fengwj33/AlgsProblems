int binarysearchL(vector<int>& nums, int start, int end, int target)
{
	if (nums[start] == target)return start;
	if (nums[end] == target && start==end-1)return end;
	if (start >= end) return -1;
	if (abs(start - end) <= 1) return -1;
	int mid = (start + end) / 2;
	if (nums[mid] >= target)
		return binarysearchL(nums, start, mid, target);
	else
		return binarysearchL(nums, mid,end, target);

}
int binarysearchR(vector<int>& nums, int start, int end, int target)
{
	if (nums[end] == target)return end;
	if (nums[start] == target && start == end - 1)return start;
	
	if (start >= end) return -1;
	if (abs(start - end) <= 1) return -1;
	int mid = (start + end) / 2;
	if (nums[mid] <= target)
		return binarysearchR(nums, mid, end, target);
	else
		return binarysearchR(nums, start, mid, target);
		

}
vector<int> searchRange(vector<int>& nums, int target) {
	vector<int> rval(2);
	if (nums.size() == 0)
		rval[0] = rval[1] = -1;
	else
		rval = { binarysearchL(nums, 0, nums.size() - 1, target),binarysearchR(nums, 0, nums.size() - 1, target) };
	return rval;
}
int main() {
	vector<int> temp = { 5, 7, 7, 8, 8,8,8,8,10 };
	vector<int> out = searchRange(temp, 8);
	cout << out[0]<<","<< out[1];
	system("pause");
	return 0;
}