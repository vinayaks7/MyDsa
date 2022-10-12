class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int third=nums.size()-1;
        int sec=nums.size()-2;
        int first=nums.size()-3;
        
        while(first>=0){
            if(nums[first]+nums[sec]>nums[third])return                    nums[first]+nums[sec]+nums[third];
            else{
                third = third-1;
               sec = sec-1;
            first = first-1; 
            }
            
        }
        return 0;
    }
};