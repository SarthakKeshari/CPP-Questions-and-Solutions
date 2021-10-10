#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
      int a[55],b[55],n;
		cin>>n;
		int mina=INT_MAX, minb=INT_MAX;
		long long ans=0;
		for(int i=1; i<=n;i++)
		{
			cin>>a[i];
			mina=min(mina,a[i]);
		}	
		for(int i=1;i<=n;i++)
		{
			cin>>b[i];
			minb=min(minb,b[i]);
		}
		for(int i=1;i<=n;i++)
		{
			ans+=1ll*max(a[i]-mina,b[i]-minb);
		}
		cout<<ans<<endl;
	}
	return 0;
}