//uisng multiset
#include<bits/stdc++.h>
#include<set>
using namespace std;
multiset <int, greater <int> > ms;  // Multiset in descending order
multiset <int, greater <int> > :: iterator itr;
string s,s1;
int main(){
    int t,i,len;
    cin>>t;
    while(t--){
        cin>>s;
        len = s.length();
        for(i=0;i<len;i++){
            ms.insert(s[i]);
        }
        itr=ms.begin();
        s1="";
        for(i=0;i<len;i++){
            s1+=string(1,char(*itr)); //Method to convert char to string and concat
            itr++;
        }
        cout<<s1<<endl;
        ms.clear();
    }
    return 0;
}