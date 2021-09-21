class Solution{
public:
    int mthHalf(int N, int M){
        M-=1;
        while(M--){
            N/=2;
            if(N==0)
                break;
        }
        return N;
    }
};