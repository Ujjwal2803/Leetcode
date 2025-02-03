class Solution {
public:
    bool alphanumeric(char c){
        return (c<='z' && c>='a') || (c<='9' && c>='0');
    }
    bool f(string &s ,int i,int j){
        if(i>=j) return true;
        if(!alphanumeric(s[i])){
            return f(s,i+1,j);
        }
        else if(!alphanumeric(s[j])){
            return f(s,i,j-1);
        }else{
            return (s[i]==s[j])&&f(s,i+1,j-1);
        }
    }
    bool isPalindrome(string s) {
        transform(s.begin(),s.end(),s.begin(),::tolower);
        return f(s,0,s.size()-1);
    }
};