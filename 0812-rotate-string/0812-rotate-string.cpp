class Solution {
public:
    bool rotateString(string s, string goal) {
        // int s.size();
        // bool answer="";
        string s1=s+s;
        if(s.length()!=goal.length())return false; 

        int pos=s1.find(goal);
        if(pos==-1) return false;
        return true;
    }
};