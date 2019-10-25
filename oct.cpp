#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t!=0)
	{
		int n;
		int ctr=1;
		cin>>n;
		int p[n];
		for(int i=0;i<n;i++)
			cin>>p[i];
		int min=p[0];
		int i;
		for(i=1;i<5;i++)
		{
			if(p[i]<min)
			{
				ctr++;
				min=p[i];
			}
		}
		int j;
		for(i=5;i<n;i++)
		{
			for(j=1;j<=5;j++)
				{
					if(p[i-j]<=p[i])
						break;
				}
			if(j==6)
				ctr++;
		}
		cout<<ctr<<"\n";
		t--;
	}
}
