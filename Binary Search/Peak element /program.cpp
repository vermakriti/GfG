class Solution
{
    public:
    int peakElement(int arr[], int n)
    {
        if(n==1) return 0;
        int low,high,mid,ans=-1;
        low=0;high=n-1;
        while(low<=high){
            mid=low+(high-low)/2;
            cout<<mid<<"\n";
            if(mid==0 && arr[0]>arr[1]){
                ans=0;
                break;
            }
            if(mid==n-1 && arr[n-2]<arr[n-1]){
                ans=n-1;
                break;
            }
            if(arr[mid]>arr[(mid+1)%n] && arr[mid]>arr[(mid+n-1)%n]){
                ans=mid;
                break;
            } 
            if(arr[mid]<arr[(mid+1)%n])
                low=mid+1;
            else  high=mid-1; 
        }
        return ans;
    }   
};