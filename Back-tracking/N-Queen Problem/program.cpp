
bool visited[15][15];
bool isSafe(int row,int col,int n){
    if(row>n || col>n || visited[row][col])
        return false;
    int r,c;
    //left
    r=row;
    c=col-1;
    while(c>=1){
        if(visited[r][c])
            return false;
        c--;
    }
    //diagonal upper left
    r=row-1;
    c=col-1;
    while(r>=1 && c>=1){
        if(visited[r][c])
            return false;
        r--;
        c--;
    }

    // diagonal lower left
    r=row+1;
    c=col-1;
    while(r<=n && c>=1){
        if(visited[r][c])
            return false;
        r++;
        c--;
    }
    return true;

}

void solve(int col,int n,vector<vector<int>> &ans,vector<int> temp){

    if(col==n+1){
        ans.push_back(temp);
        return;
    }
    if(col>n)
        return;
    for(int row=1;row<=n;row++){
        if(isSafe(row,col,n)){
            visited[row][col]=true;
            temp.push_back(row);
            solve(col+1,n,ans,temp);
            visited[row][col]=false;
            temp.pop_back();
        }
    }
}
class Solution{
public:
    vector<vector<int>> nQueen(int n) {
        
        memset(visited,false,sizeof visited);
        vector<vector<int>> ans;
        vector<int> temp;
    
        solve(1,n,ans,temp);
        return ans;
    }
};