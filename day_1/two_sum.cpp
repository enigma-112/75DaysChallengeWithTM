// https://leetcode.com/submissions/detail/666358406/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m1;
        vector<int> ans;
        int n = (int)nums.size();
        for(int i=0; i<=n-1; i++){
            if(m1.find(target-nums[i]) != m1.end()){
                ans.push_back(m1[target-nums[i]]);
                ans.push_back(i);
            }
            m1[nums[i]] = i;
        }

         return ans;
    }

}

