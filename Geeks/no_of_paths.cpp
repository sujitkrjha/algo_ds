//https://practice.geeksforgeeks.org/problems/number-of-paths/0/?category[]=Recursion&page=1&query=category[]Recursionpage1
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
//recursice approach
int countPath(int m, int n){
    if (m==1 && n==1)
        return 0;
    else if(m==1)
        return 1;
    else if(n==1)
        return 1;
    else
        return countPath(m-1,n) + countPath(m,n-1);
}
int main(){
    int t,i,m,n,ans;
    cin>>t;
    while(t--){
        ans=0;
        cin>>m>>n;
        ans=countPath(m,n);
        cout<<ans<<endl;
    }
    return 0;
}
// Memoization
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int arr[11][11]={0};
void init(int m,int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            arr[i][j]=0;
        }
    }
}
int countPath(int m, int n){
    for(int i=0;i<m;i++)
        arr[i][0]=1;
    for(int i=0;i<n;i++)
        arr[0][i]=1;
    for(int i=1;i<m;i++){
        for(int j=1;j<n;j++){
            arr[i][j]=arr[i-1][j] + arr[i][j-1];
        }
    }
    return arr[m-1][n-1];
}
int main(){
    int t,m,n,ans;
    cin>>t;
    while(t--){
        ans=0;
        cin>>m>>n;
        init(m,n);
        ans=countPath(m,n);
        cout<<ans<<endl;
    }
    return 0;
}