class Solution {
public:
    bool isPalindrome(string s) {
        string str = "";
        for(char ch:s){
            if(isalnum(ch)){
                str+=ch;
            }
        }
        transform(str.begin(),str.end(),str.begin(),::tolower);
        // cout<<str;
        int lef = 0;
        int right = str.length()-1;
        while(lef<right){
            if(str[lef]!=str[right]){
                return false;
            }
            // cout<<str[lef]<<" "<<str[right]<<endl;
            lef++;
            right--;
        }
        return true;
    }
};