#include<iostream>
#include<string>
#include<vector>
using namespace std;
typedef long long int ll;

ll Bin_Srch(vector<ll> A,ll st,ll end,ll target)
{
	ll mid=(st+end)/2;
//	cout<<mid<<" ";
	if(st>end)
		return -1;
	else if(A[mid]==target)
		return mid;
	else
	{
		if(target<A[mid]){
		
			return Bin_Srch(A,st,mid-1,target);}
		else
			return Bin_Srch(A,mid+1,end,target);
	}
}

ll Binary_Search(vector<ll> A,ll target)
{
	return Bin_Srch(A,0,A.size()-1,target);
}
int main()
{
	vector<ll> A;
	for(ll j=0;j<10;++j)
		A.push_back(j);
	cout<<Binary_Search(A,5);
}

