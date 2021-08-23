class Solution{
public:
    bool solve(int i,int j,int k,vector<vector<char> >& board,string s,int x[],int y[]){
        
        if(i>=board.size()||i<0 || j>=board[0].size() || j<0 || k>=s.size() || board[i][j]=='#' || board[i][j]!=s[k])
            return false;
        if(k==s.size()-1)
            return true;
        bool ans=false;   
        for(int l=0;l<8;l++){
            if(board[i][j]==s[k]){
                char ch=board[i][j];
                board[i][j]='#';
                ans|=solve(i+x[l],j+y[l],k+1,board,s,x,y);
                board[i][j]=ch;
            }    
        }
        return ans;
    }
    
    bool find(vector<vector<char> >& board,string s){
        int x[]={1,-1,0,0,-1,1,1,-1};
	    int y[]={0,0,-1,1,-1,1,-1,1};
	    
	    for(int i=0;i<board.size();i++){
	       for(int j=0;j<board[0].size();j++){
                if(solve(i,j,0,board,s,x,y)){
                   return true;
                }
	        }
	    }  
	    return false;
    }
	vector<string> wordBoggle(vector<vector<char> >& board, vector<string>& dict) {

	   vector<string> ans;
	   
	   for(int i=0;i<dict.size();i++){
	       if(find(board,dict[i]))
	            ans.push_back(dict[i]);
	   }
	   return ans;
	}
};