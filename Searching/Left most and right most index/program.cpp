// using binary search TC=O(logN) SC=O(1)
class Solution{
    public:
    pair<long,long> indexes(vector<long long> v, long long x)
    {
        pair<long,long>p;
        long long first=-1,second=-1,low=0,high=v.size()-1,mid,n=v.size();
        // left most index
        while(low<=high){
            
            mid=low+(high-low)/2;
            if(v[mid]==x && v[(mid+n-1)%n]!=x){
                first=mid;
                break;
            }
            if(v[mid]==x && v[(mid+n-1)%n]==x)
                high=mid-1;
            else if(v[mid]>x)
                high=mid-1;
            else low=mid+1;    
        }
        // if element is not present
        if(first==-1){
            p.first=-1;
            p.second=-1;
            return p;
        }
        // right most index 
        low=0,high=v.size()-1;
        while(low<=high){
            
            mid=low+(high-low)/2;
            if(v[mid]==x && v[(mid+1)%n]!=x){
                second=mid;
                break;
            }
            if(v[mid]==x && v[(mid+1)%n]==x)
                low=mid+1;
            else if(v[mid]>x)
                high=mid-1;
            else low=mid+1;    
        }
        p.first=first;
        p.second=second;
        return p;
        
    }
};
