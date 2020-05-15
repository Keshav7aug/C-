#include<iostream>
#include<vector>
#include<string>
using namespace std;
typedef long long int ll;
vector<string> Permutations(vector<string> A)
{
	vector<ll> B;
	if(A.size()==1)
	{
		B.push_back(A[0]);
	}
	else if(A.size()==2)
	{
		B.push_back(A);
		t=A[0];
		A[0]=A[1];
		A[1]=t;
		B.push_back(A);
	}
	else
	{
		string curr_el=S[0];
		vector<string> out,prev=P;
	}
	
}
int main()
{
	vector<ll> A,B;
	A.push_back(1);
	A.push_back(2);
	A.push_back(3);
	/*B.push_back(1);
	B.push_back(2);
	B.push_back(3);
	B.insert(B.begin(),A.begin(),A.end());*/
	B.push_back(4);
	B.push_back(A);
	//B=Permutations(A);
	for(int j=0;j<B.size();++j)
	{
		cout<<B[j]<<" ";
	}
}

