// TC= O(M+N)
class Solution{
 public:
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        int count=0,i=0,j=0;
        while(i<n && j<m){
            if(arr1[i]<arr2[j]){
                count++;
                if(count==k)
                    return arr1[i];
                i++;    
            }
            else {
                count++;
                if(count==k)
                    return arr2[j];
                j++;    
            }
        }
        while(i<n){
            count++;
            if(count==k)
                return arr1[i];
            i++;    
        }
        while(j<m){
            count++;
            if(count==k)
                return arr2[j];
            j++;    
        }
        
    }
};

