class Solution{
    public:
    //Function to return the position of the first repeating element.
    int firstRepeated(int arr[], int n) {
        
        map<int,int> mp;
        int ans=1e9;
        for(int i=0;i<n;i++){
            if(mp.find(arr[i])!=mp.end()){
                ans=min({ans,mp[arr[i]],i});
                mp[arr[i]]=i;
            }
            else mp[arr[i]]=i;
        }
        if(ans==1e9)return -1;
        return ans+1;
    }
};
