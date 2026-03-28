class Solution {
public:
    int maxi(int a , int b , int c) {
               // your code goes here
               int ans = (a>b)? a:b;
               ans = (ans>c)? ans:c;
               return ans;
    }
};