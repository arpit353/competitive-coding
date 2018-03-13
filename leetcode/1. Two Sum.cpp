class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int, int> umap;
        vector<int> a;

        int i;
        int s = nums.size();

        for(i=0;i<s;i++)
        {
            int temp = target-nums[i];

            if(umap.find(temp) == umap.end())
            {
                umap.insert(make_pair(nums[i],i));
            }
            else
            {
                a.push_back(umap[temp]);
                a.push_back(i);
            }
        }

        return a;

    }
};
