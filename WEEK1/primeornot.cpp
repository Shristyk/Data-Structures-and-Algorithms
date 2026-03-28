class Solution {
public:
    string isPrime(int n) {
              // your code goes here
              // mai hamesa ek galti karti hu har condfitgion check nhi karti hu sari possible condition check karna
             
              for(int i=2; i<n; i++){
                if(n%i==0) return "No";
                
              }
                    return "Yes";
                
              }

    };
