class Solution {
public:
    bool isalphanum(char s){
        if((s >= '0' && s<='9') || 
          (tolower(s)>= 'a' && tolower(s)<='z')){
            return true;
          }
        return false;
    }
    bool isPalindrome(string s) {
        int st=0, end=s.length()-1;
        while(st<end){
            if(!isalphanum(s[st])){
                st++;
                continue;
            }
            if(!isalphanum(s[end])){
                end--;
                continue;
            }
            if(tolower(s[st]) != tolower(s[end])){
                return false;
            }
            st++; end--;
                
        }
        return true;
    }
};
