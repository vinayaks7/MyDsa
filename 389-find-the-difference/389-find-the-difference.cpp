class Solution {
public:
    char findTheDifference(string s, string t) {
      map<char,int>mp;
       for(char ch:t){
           mp[ch]++;
       } 
        for(char ch:s){
            mp[ch]--;
        }
        for(char ch:t){
            if(mp[ch]>0){
                return ch;
            }
        }
        return 'a';
    }
};