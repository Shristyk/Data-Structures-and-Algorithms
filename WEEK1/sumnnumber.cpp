class Solution {
public:
    int sumNumbers(int n) {
        //do not write cin >> n, as input n is already taken in the driver code
        // Implement the loop logic to sum n numbers
        int sum=0 , num;
        for(int i=0; i<n; i++){
            //num ka use kiye hai cin ka use kare input value liye hai 
            cin>>num;
            sum=sum+num;
           
        }
          return sum;

    }

};