class TrieNode{
    vector<TrieNode*> children;
    bool end;
    public:
    TrieNode():children(2){
        end=false;
        for(int i=0;i<2;i++)
            children[i]=nullptr;
    }
    TrieNode*get(int j){
        return children[j];
    }
    void put(int j,TrieNode*node){
        children[j]=node;
    }
    void setEnd(){
        end=true;
    }
    bool getEnd(){
        return end;
    }
};
class Solution{
    TrieNode*root;
    public:
    Solution(){
        root=new TrieNode();
    }
    bool insert(vector<int> arr){
        TrieNode*curr=root;
        for(int i=0;i<arr.size();i++){
            if(curr->get(arr[i])==nullptr){
                TrieNode*node=new TrieNode();
                curr->put(arr[i],node);
            }
            curr=curr->get(arr[i]);
        }
        if(curr->getEnd())
            return false;
        curr->setEnd();
        return curr->getEnd();
    }
    
    vector<int> repeatedRows(vector<vector<int>> matrix, int M, int N) 
    { 
        vector<int> ans;
        for(int i=0;i<matrix.size();i++){
            if(!insert(matrix[i])){
                ans.push_back(i);
            }
        }
        return ans;
    } 
};