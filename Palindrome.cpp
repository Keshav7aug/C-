#include<iostream>
#include<string>
using namespace std;
typedef long long int ll;
bool Palindrome(string s)
{
	if(s.size()<=1)
		return true;
	else 
	{
		if(s[0]==s[s.size()-1])
			return Palindrome(s.substr(1,s.size()-2));
		else
			return false;
	}
}
int main()
{
	string s;
	char A[2][10]={" is NOT a"," is a"};
	cin>>s;
	cout<<s<<A[Palindrome(s)]<<" Palindrome";
}

