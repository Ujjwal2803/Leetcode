class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }
        map<char, int> p;
        map<char, int> r;
        for(auto i:s)
        {
            p[i]++;
        }
        for(auto i:t)
        {
            r[i]++;
        }
        for(auto i: p) {
            if(r[i.first] != i.second) { 
                return false;
            }
        }
        return true;
    }
};