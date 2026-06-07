class Solution {
public:
    int reverse(int x) {
        if(x == 0) return 0;

        string help = to_string(x);

        bool nega = false;
        if(help[0] == '-') {
            nega = true;
            help.erase(0,1);
        }

        std::reverse(help.begin(), help.end());

        while(help.size() > 1 && help[0] == '0') {
            help.erase(0,1);
        }

        long long n = stoll(help);

        if(nega) n = -n;

        if(n > INT_MAX || n < INT_MIN)
            return 0;

        return (int)n;
    }
};