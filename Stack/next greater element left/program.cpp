#include<bits/stdc++.h>
using namespace std;

int main(){

	int n;
	cin >> n;
	vector<int> a(n),ans(n);
	for(int i=0;i<n;i++)
		cin>>a[i];
	stack<pair<int,int>> st;
	for(int i=n-1;i>=0;i--){

		while(!st.empty() && st.top().first<a[i]){
			ans[st.top().second]=a[i];
			st.pop();
		}
		st.push({a[i],i});
	}
	while(!st.empty()){
		ans[st.top().second]=-1;
		st.pop();
	}
	for(auto i:ans)
		cout<<i<<" ";
	return 0;
}
