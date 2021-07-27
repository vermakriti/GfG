/* 
Given an array of size N-1 such that it only contains distinct integers in the range of 1 to N.Find the missing element.

Input:
N = 5
A[] = {1,2,3,5}
Output: 4

*/

#include<bits/stdc++.h>
using namespace std;

int main(){

	int n,sum=0;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n-1;i++){
		cin>>a[i];
		sum+=a[i];
	}
	int tot=(n*(n+1))/2;
	cout<<tot-sum<<"\n";
	return 0;

}

/* another method using XOR */

#include<bits/stdc++.h>
using namespace std;

int main(){

	int n,XOR;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n-1;i++){
		cin>>a[i];
		XOR^=a[i];
	}
	for(int i=1;i<=n;i++)
		XOR^=i;
	cout<<XOR<<"\n";
	return 0;

}