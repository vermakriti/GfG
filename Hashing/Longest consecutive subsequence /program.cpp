class Solution{
  public:
    int findLongestConseqSubseq(int arr[], int N)
    {
        map<int,int> mp;
        for(int i=0;i<N;i++){
            mp[arr[i]]++;
        }
        int i=0;
        int mx=INT_MIN;
        while(i<N){
            if(mp.find(arr[i]-1)==mp.end()){
                int count=0;
                int num=arr[i];
                while(mp.find(num)!=mp.end()){
                    count++;
                    num++;
                }
                mx=max(mx,count);
            }
            i++;
        }
        return mx;
    }
};
