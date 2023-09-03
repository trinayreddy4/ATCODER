#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m;
	cin>>m;
	int d[m];
	int mid=0;
	for(int i=0;i<m;i++)
	{
		cin>>d[i];
		mid+=d[i];
	}
	mid=(mid+1)/2;
	int i=0,mo=1;
	while(mid-d[i]>0)
	{
		mid=mid-d[i];
		mo++;
		i++;
	}
	cout<<mo<<" "<<mid<<endl;
}
