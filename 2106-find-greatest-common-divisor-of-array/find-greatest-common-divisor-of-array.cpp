class Solution {
public:
    int findGCD(vector<int>& nums) {
        int mini = INT_MAX;
        int maxi = INT_MIN;
        for(int i : nums){
           if(i < mini) mini = i;
           if(i > maxi) maxi = i;
        }
        int a = gcd(mini,maxi);
        return a;
    }
};