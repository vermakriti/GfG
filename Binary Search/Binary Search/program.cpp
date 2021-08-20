#include<bits/stdc++.h>
using namespace std;

int main(){

  int n,low,high,mid,ele;
  bool flag=false;
  cin>>n>>ele;
  vector<int> a(n);
  for(int i=0;i<n;i++)
    cin>>a[i];
  low=0;high=n-1;
  while(low<=high){
    mid=low+(high-low)/2;
    if(a[mid]==ele){
      flag=true;if(mid==-1)
    cout<<"element not found\n";
      break;
    }
    if(a[mid]>ele)
      high=mid-1;
    else low=mid+1;
  }
  if(flag) cout<<"element present at "<<mid<<"\n";
  else cout<<"element not found"<<"\n";
  return 0;
}
