class Solution {
public:
    int maxDepth(string s) {
        stack<char> p;
        int depth=0;
        int maxdepth=0;
        for(auto ele:s){
            if((ele =='(') ){
                p.push(ele);
            }else if(ele==')'){
                depth=p.size();
                p.pop();
            }
            if(depth>maxdepth) maxdepth=depth;
        }
        return maxdepth;
    }
};