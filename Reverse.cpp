#include<iostream> 
#include<string>
using namespace std;
typedef long long int ll;
string Reverse(string s)
{
	string ans;
	if(s.size()==0)
		return "";
	else
		return Reverse(s.substr(1))+s[0];
		//return ans;
}
int main()
{
	string h;
	cin>>h;
	cout<<Reverse(h);
}

