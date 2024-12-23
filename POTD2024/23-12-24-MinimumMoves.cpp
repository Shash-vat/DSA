class Solution {
public:
    int minimumMoves(string s) {
        int ans=0;
        for(int i=0;i<s.size();){
            if(s[i]=='X'){
                ans++;
                for(int j=0;j<s.size()-i && j<3;j++){
                    s[i+j]='0';
                }
                i=i+2;
            }
            i++;
        }
    return ans ;

    }
};
//Time complexity = O(n)
//Space complexity = O(1)
