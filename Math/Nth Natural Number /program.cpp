/* Given a positive integer N. You have to find Nth natural number after removing all the numbers containing digit 9.

Input:
N = 9
Output:
10

*/

/* It can be observed that Nth number in base 9 is equal to Nth number after skipping numbers containing digit 9.
So the task is reduced to find the base 9 equivalent of the number N. */

#include<bits/stdc++.h>
using namespace std;

int main(){

	long long n;
	cin>>n;
	long long ans=0;
	long long p=1;
	while(n){
		ans+=(p*(n%9));
		n/=9;
		p*=10;
	}
	cout<<ans<<"\n";
}