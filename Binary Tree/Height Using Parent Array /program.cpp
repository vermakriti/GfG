class Solution{
public:
    int solve(int node,int N){
        
        if(node>=N)
            return 0;
        return max(solve(2*node+1,N),solve(2*node+2,N))+1;    
    }
    int findHeight(int N, int arr[]){
       int root;
       for(int i=0;i<N;i++){
           if(arr[i]==-1){
               root=i;
               break;
           }
       }
       return solve(root,N);
    }
};