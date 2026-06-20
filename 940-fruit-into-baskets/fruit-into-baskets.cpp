class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int mo = 0;
        int l = 0;
        unordered_map<int, int> m;

        for (int h = 0; h < fruits.size(); h++) {
            m[fruits[h]]++;

            while (m.size() > 2) {
                m[fruits[l]]--;

                if (m[fruits[l]] == 0)
                    m.erase(fruits[l]);

                l++;
            }

            mo = max(mo, h - l + 1);
        }

        return mo;
    }
};