#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
#define MAX 1000000000001
int arr[1000010]={0};
int brr[1000000]={0};
bool primes(){
    arr[1]=1;
    arr[2]=0;
    arr[3]=0;
    for(int i=2;i<=1000000;i++){
        if(arr[i]==0){
           for(long long j=(long long)i*i;j<=1000000;j+=i){
                arr[j]=1;
            }
        }
    }
    return true;
}
int main() {
    bool xx= primes();
    long long t,i,j,n,ans=0,num;
    for(i=1,j=0;i<=1000010;i++){
        if(arr[i]==0){
            brr[j]=i;
            j+=1;
        }
    }
    cin>>t;
    while(t--){
        ans=0;
        cin>>n;
        for(i=0;i<=1000000;i++){
            num=brr[i];
            if(num*num<=n && num!=0 && num*num<MAX)
                ans+=1;
            else if(i*i>n)
                break;
        }
        cout<<ans<<endl;
    }
    return 0;
}