class Solution {
public:
    void dfs(int x,int y,int ocolor, int color,vector<vector<int>>&image){
        int n=image.size(),m=image[0].size();

        image[x][y]=color;

        vector<pair<int,int>> neigh={{x+1,y},{x-1,y},{x,y+1},{x,y-1} };
        for(auto[nx,ny] :neigh){
            if(nx>=0 && nx<n && ny>=0 && ny <m && image[nx][ny]==ocolor){
                dfs(nx,ny,ocolor,color,image);
            }
        }

    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int ocolor= image[sr][sc];
        if(ocolor==color) return image;

        dfs(sr,sc,ocolor,color,image);
        return image;
    }
};