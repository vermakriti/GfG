class Solution{   
public:
    int getOddOccurrence(int arr[], int n) {
        // code here
        int val=arr[0];
        for(int i=1;i<n;i++){
            val^=arr[i];
        }
        return val;
    }
};