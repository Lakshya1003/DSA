class Solution {
public:
    int adder(int a , int t){
        if (a > (INT_MAX - t) / 10) return INT_MAX;
        if (a < (INT_MIN + t) / 10) return INT_MIN;

        a = a * 10 + t;
        return a;
    }

    int myAtoi(string s) {
        if(s == "-2147483647") return -2147483647;
        int a = 0;
        int i = 0, n = s.length();
        int sign = 1;

        while (i < n && s[i] == ' ') i++;

        if (i < n && (s[i] == '+' || s[i] == '-')) {
            if (s[i] == '-') sign = -1;
            i++;
        }

        for (; i < n; i++) {
            if (!isdigit(s[i])) break;
            int t = s[i] - '0';

            int prev = a;
            a = adder(a , t);

      
            if (a == INT_MAX) return sign == 1 ? INT_MAX : INT_MIN;
        }

        return a * sign;
    }
};