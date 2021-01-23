//use dp
//below approach is not right


#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
map<int, int> mp;
int main(){
    int t,n,k,i,a,sum1,sum2,cnt;
    map<int,int> :: iterator itr;
    cin>>t;
    while(t--){
        cin>>n>>k;
        for(i=0;i<n;i++){
            cin>>a;
            mp[a]+=1;
        }
        sum1=sum2=cnt=0;
        while(sum1<k || sum2<k){
            itr = mp.lower_bound(k-sum1);
            if(sum1<k){
	            if(itr==mp.end() && !mp.empty()){
	                itr--;
                    sum1+=(*itr).first;
                    cnt+=1;
                    mp[(*itr).first]-=1;
                    if(mp[(*itr).first]==0)
                        mp.erase((*itr).first);
	            }
	            else if(!mp.empty()){
	                sum1+=(*itr).first;
	                cnt+=1;
	                mp[(*itr).first]-=1;
	                if(mp[(*itr).first]==0)
	                    mp.erase((*itr).first);
	            }
	            else
	                break;
            }
            //sum2
            if(sum2<k){
	            itr = mp.lower_bound(k-sum2);
	            if(itr==mp.end() && !mp.empty()){
	                itr--;
                    sum2+=(*itr).first;
                    cnt+=1;
                    mp[(*itr).first]-=1;
                    if(mp[(*itr).first]==0)
                        mp.erase((*itr).first);
	            }
	            else if(!mp.empty()){
	                sum2+=(*itr).first;
	                cnt+=1;
	                mp[(*itr).first]-=1;
	                if(mp[(*itr).first]==0)
	                    mp.erase((*itr).first);
	            }
	            else
	                break;
            }
        }
        //cout<<sum1<<" "<<sum2<<endl;
        if(sum1>=k && sum2>=k)
            cout<<cnt<<endl;
        else
            cout<<"-1"<<endl;
        mp.clear();
    }
    return 0;
}