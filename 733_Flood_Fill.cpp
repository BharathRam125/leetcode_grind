//https://leetcode.com/problems/flood-fill/

class Solution {
    void dfs(vector<vector<int>>& image, int sr, int sc, int color, int rows, int cols, int sourceColor)
{
    if(sr < 0 || sr >= rows || sc < 0 || sc >= cols)
        return;
    else if(image[sr][sc]!=sourceColor) 
        return;
    
    image[sr][sc]=color;

    dfs(image, sr-1, sc, color, rows, cols, sourceColor); //top
    dfs(image, sr+1, sc, color, rows, cols, sourceColor); //down
    dfs(image, sr, sc-1, color, rows, cols, sourceColor); //left
    dfs(image, sr, sc+1, color, rows, cols, sourceColor); //right
}

public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        
        int rows = image.size();
        int cols = image[0].size();
        int sourceColor = image[sr][sc];

        if(sourceColor==color) 
            return image;

        dfs(image, sr, sc, color, rows, cols, sourceColor);
        return image;
    }
};
