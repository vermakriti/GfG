class Solution{
public:
    int toyCount(int N, int K, vector<int> arr)
    {
        int tot=0;
        int count=0;
        sort(arr.begin(),arr.end());
        for(int i=0;i<N;i++){
            tot+=arr[i];
            if(tot<=K){
                count++;
            }
            else break;
        }
        return count;
    }
};