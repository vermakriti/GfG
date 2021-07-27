// Time Complexity = O(N), Space Complexity = O(N)
class Solution{ 
    public:
    void frequencyCount(vector<int>& arr,int N, int P)
    { 
        map<int,int> mp;
        for(int i=0;i<N;i++){
            mp[arr[i]]++;
        }
        for(int i=0;i<N;i++){
            if(mp.find(i+1)==mp.end())
                arr[i]=0;
            else arr[i]=mp[i+1];    
        }
    }
};

// 