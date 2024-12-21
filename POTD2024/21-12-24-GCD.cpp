
class Solution {
  public:
    int gcd(int a, int b) {
        int temp;
      while(b!=0){
          temp=b;
          b=a%b;
          a=temp;
      }  
      return a;
    }
};
//time comlexity = O(log(min(a,b)))
//spca comlexity = O(1)
