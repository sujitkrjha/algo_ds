#include<bits/stdc++.h>
#include<string>
#include<algorithm>
using namespace std;
string str,s;
int t,i;
void substring(string s, string str, int n,int len)
{
    str+=s[n];
    cout<<str<<endl;
    ++n;
    if(n==len)
    {
        str.clear();
        ++i;
        n=i;
    }
    if(i==len)
        return;
    substring(s,str,n,len);
    return ;
    
}
int main()
{
    scanf("%d",&t);
    i=0;
    while(t--)
    {
        cin>>s;
        substring(s,str,0,s.length()); 
    }
    return 0;
}