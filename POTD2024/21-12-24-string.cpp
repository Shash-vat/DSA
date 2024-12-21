
class Solution {
public:
    int scoreOfString(string s) {
        int sum=0;
        for(int i=1;i<s.size();i++){
            sum=sum+abs(int(s[i-1]-s[i]));
        }
        return sum;
    }
};
//Time complexity = O(n)
//space complexity = O(1)
