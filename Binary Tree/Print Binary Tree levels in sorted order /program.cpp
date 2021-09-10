class Solution
{
    public:
    vector <vector <int>> binTreeSortedLevels (int arr[], int n)
    {
        queue<pair<int,int>> q;
        q.push({arr[0],0});
        vector<vector<int>> ans;
        
        while(!q.empty()){
            
            int ss=q.size();
            vector<int> v;
            
            while(ss--){
                int node=q.front().first;
                int index=q.front().second;
                q.pop();
                
                v.push_back(node);
                
                if(2*index+1<n)
                    q.push({arr[2*index+1],2*index+1});
                if(2*index+2<n)
                    q.push({arr[2*index+2],2*index+2});
            }
            sort(v.begin(),v.end());
            ans.push_back(v);
        }
        return ans;
    }
};