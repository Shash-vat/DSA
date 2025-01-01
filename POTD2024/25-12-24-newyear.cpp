#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    int t;
    cin>>n>>t;
    int ans =0;
    for(int i=1;i<=n;i++){
        t+=5*i;
        if(t>240){
            break;
        }
        ans++;
    }
    cout<<ans;
    return 0;
    
}
//time complexity = O(n)
//space complexity = O(1)
