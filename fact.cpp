#include<iostream>
#include<vector>
typedef long long int ll;
using namespace std;

ll fact(ll N)
{
	if(N<1)
		return -1;
	if(N==1)
		return 1;
	else
	{
		return N*fact(N-1);
	}
}
int main()
{
	ll a;
	cin>>a;
	cout<<fact(a);
}
