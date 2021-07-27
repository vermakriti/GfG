// Using Binary Search TC=O(log(N))
class Solution{
public:
	
	int findMaximum(int arr[], int n) {
	    int low=0,high=n-1,mid;
	    while(low<=high){
	        mid=low+(high-low)/2;
	        if(arr[(mid+1)%n]<arr[mid] && arr[mid]>arr[(mid+n-1)%n])
	            return arr[mid];
	        if(arr[(mid+1)%n]>arr[mid])    
	            low=mid+1;
	        else high=mid-1;     
	    }
	}
};