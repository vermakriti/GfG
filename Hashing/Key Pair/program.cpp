// hashing 
class Solution{
	public:	
	bool hasArrayTwoCandidates(int arr[], int n, int x) {
	    map<int,int> mp;
	    for(int i=0;i<n;i++){
	        
	        if(mp.find(x-arr[i])!=mp.end())
	            return true;
	        mp[arr[i]]++;     
	    }
	    return false;
	}
};
// sorting + two pointer
class Solution{
public:	
	bool hasArrayTwoCandidates(int arr[], int n, int x) {
	    sort(arr,arr+n);
	    int i=0,j=n-1;
	    while(i<j){
	        if(arr[i]+arr[j]<x){
	            i++;
	        }
	        else if(arr[i]+arr[j]==x)
	            return true;
	        else {
	            j--;
	        }     
	    }
	    return false;
	}
};