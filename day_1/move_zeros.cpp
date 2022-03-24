// https://leetcode.com/submissions/detail/666379081/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = (int)nums.size();
        for(int i=0, j=0; j<=n-1;){
            if(nums[j] != 0){
                swap(nums[i], nums[j]);
                i++,j++;
            }
            else{
                swap(nums[i], nums[j]);
                j++;
            }
        }
    }
};
