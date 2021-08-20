#include<bits/stdc++.h>
using namespace std;

int main(){

	int n,ele,idx=-1;
	cin>>n>>ele;
	vector<int> a(n);
	for(int i=0;i<n;i++)
		cin>>a[i];
	int low=0,high=n-1,mid;
	while(low<=high){
		mid=low+(high-low)/2;
		if(a[mid]==ele){
			idx=mid;
			break;
		}
		else if(a[mid]<ele)
			idx=mid;
		if(a[mid]>ele)
			high=mid-1;
		else low=mid+1;
	}
	cout<<idx<<"\n";
	return 0;
}
