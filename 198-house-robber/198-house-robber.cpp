class Solution {
public:
    int dp[10000];
    int helper(vector<int>nums, int ind,int sum){
        
        if(ind ==0){return nums[0];}
        if(ind <0)return 0;
        if(dp[ind]!=-1)return dp[ind];
        int pick  =nums[ind]+ helper(nums,ind-2,nums[ind]);
        
        int notpick  = helper(nums,ind-1,sum);
        
        return dp[ind]=max(pick,notpick);
    }
    
    
    int rob(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        return helper(nums,nums.size()-1,0);
        
    }
};