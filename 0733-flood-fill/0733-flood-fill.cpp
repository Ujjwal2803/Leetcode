class Solution {
public:
    void dfs(vector<vector<int>>& image, int sr, int sc, int color,int k){
        if(sr<0 ||sc<0 || sr>=image.size() || sc>=image[0].size() || image[sr][sc]!=k){
            return;
        }
        image[sr][sc]=color;
        dfs(image,sr+1,sc,color,k);
        dfs(image,sr-1,sc,color,k);
        dfs(image,sr,sc+1,color,k);
        dfs(image,sr,sc-1,color,k);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if(image[sr][sc]==color){
            return image;
        }
        int k=image[sr][sc];
        dfs(image,sr,sc,color,k);
        return image;
    }
};