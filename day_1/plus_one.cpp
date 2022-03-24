// https://leetcode.com/submissions/detail/666375811/
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> ans;
        reverse(digits.begin(), digits.end());
        int n = (int)digits.size();
        int carry = 1;
        for(int i=0; i<=n-1; i++){
            int temp = digits[i] + carry;
            carry = temp/10;
            int current_digit = temp%10;
            ans.push_back(current_digit);
        }
        if(carry >= 1){
            ans.push_back(carry);
        }
        reverse(ans.begin(), ans.end());
        return ans;
        
    }
};
