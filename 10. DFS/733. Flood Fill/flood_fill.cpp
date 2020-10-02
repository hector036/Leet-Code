class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        if(image[sr][sc]!=newColor) dfs(image,sr,sc,image[sr][sc],newColor);
        return image;
    }
    
    void dfs(vector<vector<int>>& image, int sr, int sc, int color, int newColor){
        if(image[sr][sc]==color){
            image[sr][sc] = newColor;
            if(sr>=1) dfs(image, sr-1, sc, color, newColor);
            if(sc>=1) dfs(image, sr, sc-1, color, newColor);
            if(sr+1<image.size()) dfs(image, sr+1, sc, color, newColor);
            if(sc+1<image[0].size()) dfs(image, sr, sc+1, color, newColor);
        }
    }
    
};