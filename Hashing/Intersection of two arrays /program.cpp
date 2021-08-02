class Solution{
    public:
    int NumberofElementsInIntersection (int a[], int b[], int n, int m )
    {
        map<int,int> mp;
        for(int i=0;i<n;i++){
            if(mp[a[i]]==0)
                 mp[a[i]]++;
        }
        int count=0;
        for(int j=0;j<m;j++){
            if(mp[b[j]]){
                count++;
                mp[b[j]]--;
            }    
        }
        return count;
    }
};