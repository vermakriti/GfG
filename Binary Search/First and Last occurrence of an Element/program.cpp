#include<bits/stdc++.h>
using namespace std;

int main(){

	int n,ele;
	cin >> n >> ele;
	vector<int> a(n);
	for(int i=0;i<n;i++)
		cin>>a[i];
	int first=-1,second=-1,low,high,mid;
	// left most element
	low=0;
	high=n-1;
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
		cout<<first<<" "<<second;
		return 0;
	}
	// right most element
	low=0;
	high=n-1;
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
	cout<<first<<" "<<second;
}