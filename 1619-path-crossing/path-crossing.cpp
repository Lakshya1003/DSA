class Solution {
public:
    bool isPathCrossing(string path) {
         int x = 0, y = 0;

        unordered_set<string> st;
        st.insert("0,0");

        for(char ch : path) {
            if(ch == 'N') y++;
            else if(ch == 'S') y--;
            else if(ch == 'E') x++;
            else x--;

            string pos = to_string(x) + "," + to_string(y);

            if(st.count(pos))
                return true;

            st.insert(pos);
        }

        return false;
    }
};