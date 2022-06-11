class Solution {
    void FloodFill(vector<vector<int>>& image, int sr, int sc, int val, int newColor){
        int n=image.size();
        int m=image[0].size();
        if(sr>=0&&sc>=0&&sr<n&&sc<m&&image[sr][sc]!=newColor&&image[sr][sc]==val){
            image[sr][sc]=newColor;
            FloodFill(image,sr+1,sc,val,newColor);
            FloodFill(image,sr,sc+1,val,newColor);
            FloodFill(image,sr-1,sc,val,newColor);
            FloodFill(image,sr,sc-1,val,newColor);    
        }
        return;
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int val=image[sr][sc];
        FloodFill(image,sr,sc,val,newColor);
        return image;
    }
};