
#include<bits/stdc++.h>
using namespace std;

bool search(int low,int high,int ele,vector<int> a){

	int mid;
	while(low<=high){
		mid=low+(high-low)/2;
		if(a[mid]==ele)
			return true;
		if(a[mid]>ele)
			high=mid-1;
		else low=mid+1;
	}
	return false;
}

int main(){

	int n,ele;
	cin>>n>>ele;
	vector<int> a(n);
	for(int i=0;i<n;i++)
		cin>>a[i];
	int low=0,high=n-1,mid;
	// finding pivot element
	while(low<=high){
		mid=low+(high-low)/2;
		if(a[mid]<a[(mid+1)%n] && a[mid]<a[(mid+n-1)%n])
			break;
		if(a[mid]<=a[high])
			high=mid-1;
		else low=mid+1;
	}
	if(search(0,mid-1,ele,a))
		cout<<"element found\n";
	else if(search(mid,high,ele,a))
		cout<<"element found\n";
	else cout<<"not found\n";

}