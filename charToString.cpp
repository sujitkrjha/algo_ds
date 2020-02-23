#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
string str;
int main()
{
	int len,i;
	cin>>str;
	//str is a string 
	//str[0] is char.
	string str2 = string(2,str[0]);
	str2 += string(2,str[1]);
	cout<<str2<<endl;
	return 0;
}