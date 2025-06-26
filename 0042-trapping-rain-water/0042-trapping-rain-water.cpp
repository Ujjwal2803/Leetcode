class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int max_wall_index=-1;
        int max=-1;
        // Step 1: Find the index of the highest wall
        for(int i=0;i<n;i++){
            if(height[i]>max){
                max=height[i];
                max_wall_index=i;
            }
        }
        int water=0;
        int leftmax=-1;
        //Calculate water trapped on the left of the highest wall
        for(int i=0;i<max_wall_index;i++){
            if(leftmax>height[i]){
                water+=(leftmax-height[i]);
            }
            else{
                leftmax=height[i];
            }
        }
        int rightmax=-1;
        //Calculate water trapped on the right of the highest wall
        for(int i=n-1;i>max_wall_index;i--){
            if(rightmax>height[i]){
                water+=(rightmax-height[i]);
            }
            else{
                rightmax=height[i];
            }
        }
        return water;
    }
};