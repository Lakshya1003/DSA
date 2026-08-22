class Solution {
public:
    bool checkDivisibility(int n) {
        int a = n;
        int sum = 0;
        int pro = 1;
        while(a > 0){
            int b = a % 10;
            sum += b;
            pro *= b;
            a /= 10;
        }
        sum += pro;
        if(n % sum == 0) return true;
        return false;
    }
};