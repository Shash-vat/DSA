class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> unique;
        while(unique.find(n)==unique.end()){
            unique.insert(n);
            int sum=0;
            while(n>0){
                sum=sum+(n%10)*(n%10);
                n=n/10;
            }
            if(sum==1)
                return true;
            n=sum;
        }
        return false ;
    }
};
//time complexity = O(n*n)
//space complexity = O(n)
