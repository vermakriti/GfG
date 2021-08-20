#include<bits/stdc++.h>
using namespace std;

int main(){

	int n,ele;
	cin>>n>>ele;
	vector<int> a(n);
	for(int i=0;i<n;i++)
		cin>>a[i];
	int low=0,high=n-1,mid,first=-1,second=-1;

	//leftmost element
	while(low<=high){

		mid=low+(high-low)/2;
		if(a[mid]==ele && a[(mid+n-1)%n]!=ele){
			first=mid;
			break;
		}
		if(a[mid]==ele && a[(mid+n-1)%n]==ele)
			high=mid-1;
		else if(a[mid]>ele)
			high=mid-1;
		else low=mid+1;
	}
	if(first==-1){
		cout<<"0";
		return 0;
	}
	//rightmost element
	low=0;high=n-1;
	while(low<=high){

		mid=low+(high-low)/2;
		if(a[mid]==ele && a[(mid+1)%n]!=ele){
			second=mid;
			break;
		}
		if(a[mid]==ele && a[(mid+1)%n]==ele)
			low=mid+1;
		else if(a[mid]>ele)
			high=mid-1;
		else low=mid+1;
	}
	cout<<second-first+1<<"\n";
	return 0;
}