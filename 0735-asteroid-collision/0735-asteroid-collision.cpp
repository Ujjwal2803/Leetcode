class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>s;
        // vector<int>q;
        // for(int i=0;i<asteroids.size();i++){
            // while(p.size() && ((asteroids[i]<0 && p.top()>0) || (asteroids[i]>0 && p.top()<0))){
            //     if(abs(p.top())==abs(asteroids[i])){
            //         p.pop();
            //         continue;
            //     }
            //     // else if(abs(p.top())>abs(asteroids[i])){
            //     //     q.push_back(max(abs(p.top()),abs(asteroids[i])));
            //     // }
            //     else{
            //         q.push_back(max(abs(p.top()),abs(asteroids[i])));
            //         p.pop();
            //         p.push(max(abs(p.top()),abs(asteroids[i])));
            //     }
            // }
            // // if((asteroids[i]<0 && p.top()<0) || (asteroids[i]>0 && p.top()>0)){
            // //     q.push_back(p.top());
            // // }
            // p.push(asteroids[i]);
        // }
        // return q;
        for (int asteroid : asteroids) {
            bool destroyed = false;
            
            while (!s.empty() && asteroid < 0 && s.top() > 0) {
                if (abs(s.top()) < abs(asteroid)) {
                    s.pop();  // Destroy the top asteroid
                    continue;
                } else if (abs(s.top()) == abs(asteroid)) {
                    s.pop();  // Both asteroids destroy each other
                }
                destroyed = true;
                break;
            }   
            if (!destroyed) {
                s.push(asteroid);
            }
        }
        vector<int> result(s.size());
        for (int i = s.size() - 1; i >= 0; i--) {
            result[i] = s.top();
            s.pop();
        }
        return result;
    }
};