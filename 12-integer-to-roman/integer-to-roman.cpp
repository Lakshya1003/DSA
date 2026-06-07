class Solution {
public:
    string intToRoman(int num) {
        string ans = to_string(num);
        vector<int> cont;
        int ten = 1;

        for(int i = ans.length() - 1 ; i >= 0 ; i--){
            int t = ans[i] - '0';
            t *= ten;
            ten *= 10;
            cont.push_back(t);
        }

        sort(cont.rbegin(), cont.rend());
        ans = "";

        for(int i = 0 ; i < cont.size() ; i++){
            int x = cont[i];

            if(x >= 1000){
                ans.append(x / 1000, 'M');
            }
            else if(x == 900) ans += "CM";
            else if(x >= 500){
                ans += "D";
                ans.append((x - 500) / 100, 'C');
            }
            else if(x == 400) ans += "CD";
            else if(x >= 100){
                ans.append(x / 100, 'C');
            }
            else if(x == 90) ans += "XC";
            else if(x >= 50){
                ans += "L";
                ans.append((x - 50) / 10, 'X');
            }
            else if(x == 40) ans += "XL";
            else if(x >= 10){
                ans.append(x / 10, 'X');
            }
            else if(x == 9) ans += "IX";
            else if(x >= 5){
                ans += "V";
                ans.append(x - 5, 'I');
            }
            else if(x == 4) ans += "IV";
            else{
                ans.append(x, 'I');
            }
        }

        return ans;
    }
};