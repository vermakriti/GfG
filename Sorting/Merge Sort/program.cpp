class Solution{
    public:
    void merge(int arr[], int l, int m, int r)
    {
        int n1=m-l+1;
        int n2=r-m;
        int a[n1],b[n2];
        for(int i=0;i<n1;i++)
            a[i]=arr[l+i];
        for(int i=0;i<n2;i++)
            b[i]=arr[m+1+i];
        int i=0,j=0,k=l;
        while(i<n1 && j<n2){
            
            if(a[i]<b[j]){
                arr[k++]=a[i];
                i++;
            }
            else{
                arr[k++]=b[j];
                j++;
            }
        }
        while(i<n1){
            arr[k++]=a[i];
            i++;
        }
        while(j<n2){
            arr[k++]=b[j];
            j++;
        }
    }
    public:
    void mergeSort(int arr[], int l, int r){
        int mid;
        if(l<r){
            mid=(l+r)/2;
            mergeSort(arr,l,mid);
            mergeSort(arr,mid+1,r);
            merge(arr,l,mid,r);
        }
    }
};
