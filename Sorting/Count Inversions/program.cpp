 class Solution{
 public:
    void merge(long long arr[],long long l,long long mid,long long r,long long &invCount){
        
        long long n1=mid-l+1;
        long long n2=r-mid;
        long long a[n1],b[n2];
        
        for(long long i=0;i<n1;i++)
            a[i]=arr[l+i];
        for(long long i=0;i<n2;i++)
            b[i]=arr[mid+1+i];   
        int i=0,j=0,k=l;
        while(i<n1 && j<n2){
            
            if(a[i]>b[j]){
                invCount+=(n1-i);
                arr[k++]=b[j++];
            }
            else{
                arr[k++]=a[i++];
            }
        }
        while(i<n1){
            arr[k++]=a[i++];
        }
        while(j<n2){
            arr[k++]=b[j++];
        }
            
    }
    void mergeSort(long long arr[],long long l,long long r,long long &invCount){
        
        if(l<r){
            long long mid=l+(r-l)/2;
            mergeSort(arr,l,mid,invCount);
            mergeSort(arr,mid+1,r,invCount);
            merge(arr,l,mid,r,invCount);
        }
    }
    long long int inversionCount(long long arr[], long long N)
    {
        long long int invCount=0;
        mergeSort(arr,0,N-1,invCount);
        return invCount;
    }
};