class Solution{
public:
    int isBitSet(int N){
        if(N==0)
            return 0;
        if(((N+1)&N)==0)
            return 1;
        return 0;    
    }
};