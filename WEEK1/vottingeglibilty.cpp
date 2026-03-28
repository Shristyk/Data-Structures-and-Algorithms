class Solution {
public:
    string checkVotingEligibility(int age) {
        // Implement the logic to check voting eligibility
        // ? iska maltalb hai agar 18 ya 18 se jada hai age to vote de sakta hai agar nhi hi to nhi de sakta hai
       return (age >=18) ? "Eligible to vote" :"Not eligible to vote";
            }
};