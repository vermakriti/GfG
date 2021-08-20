/* Given a sorted array of numbers, find if a given number ‘key’ is present in the array. 
Though we know that the array is sorted, we don’t know if it’s sorted in ascending or descending order.*/


#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,ele,low,high,mid;
	cin>>n>>ele;
	vector<int> a(n);
	for(int i=0;i<n;i++)
		cin>>a[i];

	low=0;high=n-1;
	if(a[low]<a[high]){
		while(low<=high){
			mid=low+(high-low)/2;
			if(a[mid]==ele)
				return mid;
			if(a[mid]>ele)
				high=mid-1;
			else low=mid+1;
		}
	}
	else{
		while(low<=high){
			mid=low+(high-low)/2;
			if(a[mid]==ele)
				return mid;
			if(a[mid]>ele)
				low=mid+1;
			else high=mid-1;
		}
	}
	return -1;
}