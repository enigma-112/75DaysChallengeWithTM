// https://leetcode.com/submissions/detail/666372396/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0;
        stack<int> stk;
        int n = (int)prices.size();
        if(n == 1){return 0;}
        stk.push(prices[0]);
        for(int i=1; i<=n-1; i++){
            if(prices[i] > stk.top()){
                int temp = prices[i]-stk.top();
                ans = max(ans, temp);
            }
            else{
                while(!stk.empty() && prices[i] <= stk.top()){
                    stk.pop();
                }
                if(stk.empty()){
                    stk.push(prices[i]);
                }
                else{
                     int temp = prices[i]-stk.top();
                     ans = max(ans, temp); 
                }
                
            }
        }
        
        return ans;
        
    }
};
