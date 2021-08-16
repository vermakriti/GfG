clas Solution{
  	public:
    void sort012(int a[], int n)
    {
        int low=0,mid=0,high=n-1;
        while(mid<=high){
            if(a[mid]==0){
                swap(a[low],a[mid]);
                low++;
                mid++;
            }
            else if(a[mid]==2){
                swap(a[mid],a[high]);
                high--;
            }
            else mid++;
        }
    }
    
};