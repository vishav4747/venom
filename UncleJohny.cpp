#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long int n,k,i,j,b;
		cin>>n;
		long int a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		cin>>k;
		b=a[k-1];
		sort(a,a+n);
		for(i=0;i<n;i++)
		{
			if(b==a[i])
			{
				cout<<i+1<<endl;
			}
		}
	}
}
