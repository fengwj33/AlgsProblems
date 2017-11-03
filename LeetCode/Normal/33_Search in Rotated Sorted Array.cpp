int min(vector<int>&nums,int start,int end){
	if (nums[start] < nums[end]) return start;
	int mid = (start + end) / 2;
	if (abs(start - end) <= 1)
		return nums[start] < nums[end] ? start : end;
	if (nums[start] < nums[mid])
		return min(nums, mid, end);
	else
		return min(nums, start, mid);
}
int binarysearch(vector<int>& nums, int start, int end, int target)
{
	if (nums[start] == target)return start;
	if (nums[end] == target)return end;
	if (start >= end) return -1;
	if (abs(start - end) <= 1) return -1;
	int mid = (start + end) / 2;
	if (nums[mid] == target)
		return mid;
	else if (nums[mid] > target)
		return binarysearch(nums, start, mid, target);
	else
		return binarysearch(nums, mid,end, target);

}
int search(vector<int>& nums, int target) {
	if (nums.size() == 0) return -1;
	int minid = min(nums, 0, nums.size() - 1);
	if (nums[minid] == target) return minid;
	if (minid!=0 && nums[nums.size() - 1] < target)
		return binarysearch(nums, 0, minid - 1, target);
	else
		return binarysearch(nums, minid,nums.size()-1, target);
	return minid;
}
int main() {
	vector<int> temp = {1,3,5};
	cout << search(temp,3);
	system("pause");
	return 0;
}