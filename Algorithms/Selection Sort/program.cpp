class Solution{
    public:
    int select(int arr[], int i,int n)
    {   int mn=arr[i];
        int idx=i;
        for(int j=i;j<n;j++){
           if(mn>arr[j]){
               mn=arr[j];
               idx=j;
           }
        }
        int temp=arr[i];
        arr[i]=arr[idx];
        arr[idx]=temp;
    }
     
    void selectionSort(int arr[], int n)
    {
       for(int i=0;i<n-1;i++)
            select(arr,i,n);
    }
};