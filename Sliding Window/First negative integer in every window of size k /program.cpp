vector<long long> printFirstNegativeInteger(long long int A[],long long int N, long long int K){
     
    deque<long long >q;
    vector<long long> ans;
    long long i=0,j;
    
    for(j=0;j<K;j++){
        if(A[j]<0)
            q.push_back(A[j]);
    }
    while(j<N){
        if(q.size()>0){
            ans.push_back(q.front());
        }
        else{
            ans.push_back(0);
        } 
        if(A[i]<0)
            q.pop_front();
        if(A[j]<0)
            q.push_back(A[j]);
        i++;
        j++;
    }
    if(q.size()>0){
        ans.push_back(q.front());
    }
    else  ans.push_back(0);
    return ans;
     
 }