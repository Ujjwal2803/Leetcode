class Solution {
public:
    bool isValid(string s) {
        stack<char> p;
        for(auto ele:s){
            if((ele =='(') || (ele=='{') || (ele=='[')){
                p.push(ele);
            }else{
                if(p.empty()) return false;
                char c=p.top();
                p.pop();
                if((c=='(' and ele==')' || (c=='[' and ele==']') || (c=='{' and ele=='}'))) continue;
                else return false;
            }
        }
        return p.empty();
    }
};