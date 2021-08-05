class Solution{
    public:
    int atoi(string str) {
        int res=0,sign=1;
        if(str[0]=='-')
            sign=-1;
        for(int i=0;i<str.size();i++){
            if(sign<0 && i==0)continue;
            if(str[i]>='0' && str[i]<='9')
                res=res*10+(str[i]-'0');
            else return -1;    
        }
        return res*sign;
    }
};