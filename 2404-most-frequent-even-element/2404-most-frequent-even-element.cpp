class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int> mp;
        
        for(auto num:nums)
        {
            if(num%2==0)
            {
                mp[num]++;
            }
        }
        
       int elem{-1},count{0};
        for(auto n:mp)
        {
            if(n.second > count)
            {
                elem=n.first;
                count=n.second;
            }
            else if(n.second==count && n.first!=elem)
            {
                elem=min(elem,n.first);
            }
        }
        return elem;
    }
};