class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target);

};
vector<int> Solution::twoSum(vector<int>& nums, int target)
{
    map<int, int> v2i;
    vector<int> v=vector(2,0);
    for(int i = 0; i < nums.size(); i++)
    {
        int b = target - nums[i];
        map<int, int>::iterator it = v2i.find(b);

        if (it != v2i.end())
        {

            v[0] = (it->second);
            v[1] = i;
            break;
        }
        else
        {
            v2i[nums[i]] = i;
        }

    }
    return v;
}

