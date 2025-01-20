// class Solution {
// public:
//     bool isIsomorphic(string s, string t) {
//         map<char,int> p;
//         map<char,int> r;
//         for(auto i:s)
//         {
//             p[i]++;
//         }
//         for(auto i:t)
//         {
//             r[i]++;
//         }
//         for(int i=0;i<s.length();i++){
//             if(p.find(s[i])!=r.find(t[i])){
//                 return false;
//                 break;
//             }
//         }
//         return true;
//     }
// };
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }

        map<char, char> p;
        map<char, char> r;

        for (int i = 0; i < s.length(); i++) {
            if (p.find(s[i]) != p.end()) {
                if (p[s[i]] != t[i]) {
                    return false;
                }
            } else {
                p[s[i]] = t[i];
            }

            if (r.find(t[i]) != r.end()) {
                if (r[t[i]] != s[i]) {
                    return false;
                }
            } else {
                r[t[i]] = s[i];
            }
        }

        return true;
    }
};
