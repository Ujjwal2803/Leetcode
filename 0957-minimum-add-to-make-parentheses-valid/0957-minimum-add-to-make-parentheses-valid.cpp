class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> p;
        int count=0;
        for(auto ele:s){
            if((ele =='(') ){
                p.push(ele);
            }else {
                if(p.empty()){
                    count++;
                }
                else{
                    p.pop();
                }
            }
            
        }
        return count+p.size();
    }
};