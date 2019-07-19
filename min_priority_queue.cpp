#include<bits/stdc++.h>
#include<algorithm>
#include<queue>
using namespace std;

priority_queue <int, vector<int>, greater<int> > pq;
int main(){
    pq.push(5);
    pq.push(15);
    pq.push(3);
    
    while (pq.empty() == false) 
    { 
        cout << pq.top() << " "; 
        pq.pop(); 
    } 
  
    return 0;
}