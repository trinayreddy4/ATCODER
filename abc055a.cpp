#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	
	int moneypaid=800*n;
	int moneyreceivedtimes=n/15;
	int moneyreceived=moneyreceivedtimes*200;
	cout<<moneypaid-moneyreceived<<endl;
}

