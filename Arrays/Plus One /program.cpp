#include<bits/stdc++.h>
using namespace std;

int main(){

	int n;
	cin >> n;
	vector<int> arr(n);
	for(int i=0;i<n;i++)
		cin>>arr[i];

	int c=(arr[n-1]+1)%10;
	arr[n-1]=(arr[n-1]+1)/10;

	for(int i=n-2;i>=0;i--){
		arr[i]=(arr[i]+c)%10;
		c=(arr[i]+c)/10;
	}
	if(c)arr.insert(arr.begin(),c);
	for(auto ele:arr)
		cout<<ele<<" ";
	cout<<"\n";
}