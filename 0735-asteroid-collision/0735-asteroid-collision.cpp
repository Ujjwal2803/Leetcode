class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>s;
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