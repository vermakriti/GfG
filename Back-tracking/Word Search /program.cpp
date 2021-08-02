class Solution{
public:
    bool solve(int i,int j,int k,vector<vector<char>>& board, string word,int x[],int y[]){
        
        if(i>=board.size() || j>=board[0].size() || k>=word.size() || board[i][j]=='#' || board[i][j]!=word[k])
            return false;
        
        if(k==word.size()-1)
            return true;
        bool ans=false;
        char ch;
        for(int l=0;l<4;l++){
            if(board[i][j]==word[k]){
                ch=board[i][j];
                board[i][j]='#';
                ans |= solve(i+x[l],j+y[l],k+1,board,word,x,y);
                board[i][j]=ch;
            }
        }  
        return ans;
    }
    bool isWordExist(vector<vector<char>>& board, string word) {
        
        int x[]={1,-1,0,0};
        int y[]={0,0,1,-1};
        
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[i].size();j++){
                if(board[i][j]!='#'){
                    if(solve(i,j,0,board,word,x,y))
                        return true;
                }
            }
        }
        return false;
    }
};