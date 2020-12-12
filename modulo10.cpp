#include<bits/stdc++.h>
using namespace std;
int M=1e9+7;
long long power(int n, int k)
{
	if(k==0)
		return 1;
	long long x=power(n,k/2);
	if(k%2==0)
		return x*x%M;
	return n*(x*x%M)%M;
}
int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n,x,a[3213];cin>>n>>x;
		for(int i=n-1;i>=0; i--)
			cin>>a[i];
		long long kq=0;
		for(int i=n-1; i>=0; i--)
			kq=kq%M+(a[i]%M)*power(x,i);
		cout<<kq<<endl;
	}
}
