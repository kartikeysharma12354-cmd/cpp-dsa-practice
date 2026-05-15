class Solution {
public:
    bool isequal(int a[], int b[]){
        for(int i=0;i<26;i++){
            if(a[i]!=b[i]) return false;
        }
        return true;
    }

    bool checkInclusion(string s1, string s2) {
        int n1 = s1.length(), n2 = s2.length();
        if(n1 > n2) return false;

        int freq[26]={0}, windowFreq[26]={0};

      
        for(char c: s1){
            freq[c-'a']++;
        }

      
        for(int i=0;i<n1;i++){
            windowFreq[s2[i]-'a']++;
        }

        if(isequal(freq, windowFreq)) return true;

  
        for(int i=n1;i<n2;i++){
            windowFreq[s2[i]-'a']++;          
            windowFreq[s2[i-n1]-'a']--;      

            if(isequal(freq, windowFreq)) return true;
        }

        return false;
    }
};
