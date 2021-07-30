class Solution{
    public:
    //Function to return the largest possible number of n digits
    //with sum equal to given sum.
    string largestNumber(int n, int sum)
    {
        string output="";
        while(n--){
            if(sum<9){
               output+=(sum+'0');
               sum=0;
            }
            else if(sum>=9){
                output+='9';
                sum-=9;
            }
            else output+='0';
        }
        if(sum)return "-1";
        return  output;
    }
};