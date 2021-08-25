class Solutuion{
    public:
    void insert(int arr[], int i){
        for(int j=0;j<=i-1;j++){
            if(arr[j]>arr[i]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
     public:
    //Function to sort the array using insertion sort algorithm.
    void insertionSort(int arr[], int n)
    {
        for(int i=1;i<n;i++)
            insert(arr,i);
    }
};