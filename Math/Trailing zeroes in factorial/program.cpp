/* For an integer N find the number of trailing zeroes in N!.

Input:
N = 5
Output:
1
Explanation:
5! = 120 so the number of trailing zero is 1.

*/

/* A trailing zero is always produced by prime factors 2 and 5.
So trailing zero in N! = min(count of 2, count of 5), count of 5 is always less that 2.*/

#include<bits/stdc++.h>
using namespace std;

int main(){

	int n;
	cin >> n;
	int count=0;
	int i=5;
	while(1<=n/i){
		count+=n/i;
		i*=5;
	}
	cout<<count<<"\n";
}