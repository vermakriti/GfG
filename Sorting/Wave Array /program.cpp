/* arrange the elements into a sequence such that arr[1] >= arr[2] <= arr[3] >= arr[4] <= arr[5].....*/

// Time Complexity = O(NlogN) + O(N)
class Solution{
   	public:
    void convertToWave(vector<int>& arr, int n){
        for(int i=0;i+1<n;i+=2){
        	swap(arr[i],arr[i+1]);
	    }    
    }
};


// Optimise method TC=O(N)
class Solution{
	public:
    void convertToWave(vector<int>& arr, int n){
        for(int i=0;i+1<n;i++){
            if(i%2==0){
                if(arr[i]<arr[i+1])
                    swap(arr[i],arr[i+1]);
            }
            else{
                if(arr[i]>arr[i+1])
                    swap(arr[i],arr[i+1]);
            }
        }
    }
};