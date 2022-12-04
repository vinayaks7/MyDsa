class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        long long int n = nums.size();
        long long int sum_f = 0;
        long long int sum_b = 0;
        long long int dif = INT_MAX;
        long long int  small_counter = -1;
        if(n==1)return 0;
        for(int i=0;i<n;i++){
            sum_b+=nums[i];
        }
        for(int i=0;i<n;i++){
            sum_f+=nums[i];
            sum_b-=nums[i];
            if(i==n-1){
              if(abs(sum_f/(i+1)-0)<dif){
                dif = abs(sum_f/(i+1)-0);
                small_counter = i;
            }
            }
            else if(sum_f==0){
              if(abs(0-sum_b/(n-i-1))<dif){
                dif = abs(0-sum_b/(n-i-1));
                small_counter = i;
            }  
            }
            else if(sum_b==0){
               
              if(abs(sum_f/(i+1)-0)<dif){
                dif = abs(sum_f/(i+1)-0);
                small_counter = i;
            }    
            }
            
            
            else{
                if(abs(sum_f/(i+1)-sum_b/(n-i-1))<dif){
                dif = abs(sum_f/(i+1)-sum_b/(n-i-1));
                small_counter = i;
            }
                
            }
            
        }
        return small_counter;
    }
};