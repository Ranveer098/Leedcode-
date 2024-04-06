class Solution {
public:
    bool isSubsequence(string s, string t) {
        int j=0;
        
        int n=t.length();
        int m=s.length();
        if(n<m) return false;
        for(int i=0;i<n && j<m;i++){
            if(t[i]==s[j])
               j++;
        }
        return(j==m);
        
    }
};