class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char>p;
        int i=0,j=0;
        int maxn=0;
        while(j<s.size()){
            if(p.find(s[j])==p.end()){
            // if(!p.count(s[j])){
                p.insert(s[j]);
                maxn=max(maxn,(int)p.size());
                j++;
            }else{
                 p.erase(*p.find(s[i]));
                //  p.erase(s[i]);
                i++;
            }
        }
        return maxn;
    }
};