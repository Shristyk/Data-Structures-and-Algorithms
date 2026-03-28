class Solution {
public:
    string isValidTriangle(int a, int b, int c) {
        //sare possible condition check karna chhiye har code mai
     if(a+b>c&&b+c>a&&a+c>b){
        return "Yes";
     }  else{
        return "No";
     }
    }
};