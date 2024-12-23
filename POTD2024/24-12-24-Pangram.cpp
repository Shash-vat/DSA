#include<iostream>
#include<unordered_set>
using namespace std;
 
int main(){
    int n;
    string str;
    cin>>n;
    cin>>str;
    for(int i=0;i<str.size();i++){
        str[i]=tolower(str[i]);
    }
    unordered_set<char> unique;
    for(int i=0;i<str.size();i++){
        unique.insert(str[i]);
    }
    if(unique.size()==26)
        cout<<"YES";
    else 
        cout<<"NO";
        
    return 0;
}
//Time complexity = O(n)
//Space complexity =O(n)
