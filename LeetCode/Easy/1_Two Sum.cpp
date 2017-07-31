struct v_id
{
    int num;
    int id;
};
static bool comp(const v_id &a, const v_id &b)
{
    return a.num < b.num;
}
vector<int> twoSum(vector<int>& nums, int target) {
    vector<int>returnval;
    vector<v_id>temp(nums.size());
     for (int i = 0;i < nums.size();i++)
    {
        temp[i].num = nums[i];
        temp[i].id = i;
    }
    sort(temp.begin(), temp.end(),comp);
    int ps = 0, pe = temp.size() - 1;
    while (temp[ps].num + temp[pe].num != target)
        if (temp[ps].num + temp[pe].num < target)
            ps++;
        else if (temp[ps].num + temp[pe].num > target)
            pe--;
    if (temp[ps].id > temp[pe].id)
        swap(temp[ps].id, temp[pe].id);
    returnval.push_back(temp[ps].id);
    returnval.push_back(temp[pe].id);
    return returnval;
}
